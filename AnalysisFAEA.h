//======================================================================
//
//      This class has been made by me because I'm bored and there is
//      a pandemic worldwide problem :D
//
//======================================================================

#ifndef Xmass_h
#define Xmass_h

//================= ROOT includes =================
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TVectorF.h"
#include "TGraphAsymmErrors.h"
#include "TString.h"
#include "TLegend.h"
#include "TPave.h"
#include "TPaveText.h"
#include "TSystem.h"
#include "TMath.h"
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

//Header file for vector storage
#include <TClonesArray.h>

//================= C++ includes =================
#include <vector>
#include <iostream>

class AnalysisFAEA {

 public:
  int			NJet;
  float			Jet_Px;
  float			Jet_Py;
  float			Jet_Pz;
  float			Jet_E;
  std::vector<float>	Jet_btag;
  std::vector<float>	Jet_ID;
  int			NMuon;
  std::vector<float>	Muon_Px;
  std::vector<float>	Muon_Py;
  std::vector<float>	Muon_Pz;
  std::vector<float>	Muon_E;
  int			Muon_Charge;
  std::vector<float>	Muon_Iso;
  int			NElectron;
  std::vector<float>    Electron_Px;
  std::vector<float>	Electron_Py;
  std::vector<float>	Electron_Pz;
  std::vector<float>	Electron_E;
  int			Electron_Charge;
  std::vector<float>	Electron_Iso;
  int			NPhoton;
  std::vector<float>    Photon_Px;
  std::vector<float>	Photon_Py;
  std::vector<float>	Photon_Pz;
  std::vector<float>	Photon_E;
  int			Photon_Charge;
  std::vector<float>	Photon_Iso;
 
}
