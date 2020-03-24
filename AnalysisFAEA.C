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
  
  //First we need to create the histograms for the analysis
  InitHistos();
  std::cout << "Histos initialized" << std::endl;
}


void AnalysisFAEA::FillHistograms(){

  h_MuonPt->Fill(MuonPt, weight);
  h_DiMuonMass->Fill(DiMuonMass, weight);
  h_NJet->Fill(NJet, weight);
  h_MET->Fill(MET, weight);
  h_MuonEta->Fill(MuonEta, weight);

}

void AnalysisFAEA::InitHistos(){
  //Some debug output
  std::cout << "[INFO]Creating histograms for the analysis..." << std::endl;
  TH1F* h_MuonPt = new TH1F("h_MuonPt", "", 20, 0, 200);
  TH1F* h_DiMuonMass = new TH1F("h_DiMuonMass", "", 20, 0, 200);
  TH1F* h_NJet = new TH1F("h_NJet", "", 10, 0, 10);
  TH1F* h_MET = new TH1F("h_MET", "", 30, 0, 200);
  TH1F* h_MuonEta = new TH1F("h_MuonEta","", 20, -3, 3);
  
}


