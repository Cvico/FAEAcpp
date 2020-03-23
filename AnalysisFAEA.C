//========================================
//Method implementation used for the
//analysis.
//=========================================

#define AnalysisFAEA_cxx
#include "AnalysisFAEA.h"


void AnalysisFAEA::Loop(){

  //First we need to create the histograms for the analysis
  InitHistos();


  TString Datapath = "../files/";

  for(int i = 0; i < Backgrounds.size(); i++){
     std::cout << "Background: " << Backgrounds.at(i) << std::endl;
  }
  
    
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


