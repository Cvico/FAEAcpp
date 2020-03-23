//========================================
//Method implementation used for the
//analysis.
//=========================================

#define AnalysisFAEA_cxx
#include "AnalysisFAEA.h"


void AnalysisFAEA::Loop(std::vector<TString> VectorSamples){

}
void AnalysisFAEA::Loop(TString sample){

  //First we need to create the histograms for the analysis
  InitHistos();


  TString Datapath = "../files/";
    
}



void AnalysisFAEA::InitHistos(){
  //Some debug output
  std::cout << "[INFO]Creating histograms for the analysis..." << std::endl;
  TH1F* MuonPt = new TH1F("_MuonPt", "", 20, 0, 200);
  TH1F* DiMuonMass = new TH1F("_DiMuonMass", "", 20, 0, 200);
  TH1F* NJet = new TH1F("_NJet", "", 10, 0, 10);
  TH1F* MET = new TH1F("_MET", "", 30, 0, 200);
  TH1F* MuonEta = new TH1F("_MuonEta", 20, -3, 3);
  
}


void AnalysisFAEA::FillHistograms(){

  MuonPt->Fill(MuonPt, weight);
  DiMuonMass->Fill(DiMuonMass, weight);
  NJet->Fill(NJet, weight);
  MET->Fill(MET, weight);
  MuonEta->Fill(MuonEta, weight);

}
