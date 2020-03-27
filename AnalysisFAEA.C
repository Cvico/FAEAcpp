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



void AnalysisFAEA::FillHistograms(){

  ((TH1F*)gROOT->FindObject("h_MuonPt"))->Fill(MuonPt, weight);
  ((TH1F*)gROOT->FindObject("h_DiMuonMass"))->Fill(DiMuonMass, weight);
  ((TH1F*)gROOT->FindObject("h_NJet"))->Fill(NJet, weight);
  ((TH1F*)gROOT->FindObject("h_MET"))->Fill(MET, weight);
  ((TH1F*)gROOT->FindObject("h_MuonEta"))->Fill(MuonEta, weight);

}
