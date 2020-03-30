//========================================
//Method implementation used for the
//analysis.
//=========================================

#define AnalysisFAEA_cxx
#include "AnalysisFAEA.h"

/*
void AnalysisFAEA::Loop(std::vector<TString> VectorSamples){
  for (int i = 0; VectorSamples.size(); i++){
    Loop(VectorSamples.at(i));
  }
  return
}
*/
void AnalysisFAEA::Loop(TString sample){
    //Set path to store results
    TString  Outpath = "../results/";
    gSystem->MakeDirectory(Outpath);
    //Create a rootfile where the histograms will be stored
    fOut = new TFile(Outpath + "histograms.root", "recreate");
    
    //Iterate over all events
    int nevents = Tree->GetEntries();
    std::cout << "Looping over " << nevents << " events." << std::endl;
    for (int event = 0; event<nevents; event++){
        GetEntry(event);
        if(event%5000 == 0){std::cout << (float)event/nevents*100 <<"% analysed..." << std::endl;}
        TLorentzVector *Muon1 = new TLorentzVector();
        Muon1->SetPxPyPzE(Muon_Px[0], Muon_Py[0], Muon_Pz[0], Muon_E[0]);
        MuonPt = float(Muon1->Pt());
        MuonEta = float(Muon1->Eta());
        MET = (MET_px * MET_px + MET_py * MET_py);
        weight = EventWeight;
        FillHistograms();
        //delete Muon1;
    }
    WriteHistograms();
    fOut->Close();
    delete fOut;
    return;
    
}



void AnalysisFAEA::InitHistos(){
  //Some debug output
  std::cout << "[INFO]Creating histograms for the analysis..." << std::endl;
  h_MuonPt = new TH1F("h_MuonPt", "", 20, 0, 200);
  h_NJet = new TH1F("h_NJet", "", 10, 0, 10);
  h_MET = new TH1F("h_MET", "", 30, 0, 200);
  h_MuonEta = new TH1F("h_MuonEta","", 20, -3, 3);
  
  return;
}



void AnalysisFAEA::FillHistograms(){
  h_MuonPt->Fill(MuonPt, weight);
  h_NJet->Fill(NJet, weight);
  h_MET->Fill(MET, weight);
  h_MuonEta->Fill(MuonEta, weight);

}

void AnalysisFAEA::WriteHistograms(){
  fOut->cd();
  
  h_MuonPt->Write();
  h_NJet->Write();
  h_MET->Write();
  h_MuonEta->Write();
    
}
