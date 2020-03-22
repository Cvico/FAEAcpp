//======================================================================
//
//      This class has been made by me because I'm bored and there is
//      a pandemic worldwide problem :D
//
//======================================================================

#ifndef AnalysisFAEA_h
#define AnalysisFAEA_h

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
  std::vector<float>	MET_px;			     
  std::vector<float>	Met_py;			     
  float			MChadronicBottom_px;	     
  float			MChadronicBottom_py;	     
  float			MChadronicBottom_pz;	     
  float			MCleptonicBottom_px;	     
  float			MCleptonicBottom_py;	     
  float			MCleptonicBottom_pz;	     
  float			MChadronicWDecayQuark_px;    
  float			MChadronicWDecayQuark_py;    
  float			MChadronicWDecayQuark_pz;    
  float			MChadronicWDecayQuarkBar_px; 
  float			MChadronicWDecayQuarkBar_py; 
  float			MChadronicWDecayQuarkBar_pz; 
  float			MClepton_px;		     
  float			MClepton_py;		     
  float			MClepton_pz;		     
  int			MClepton_PDGid;		     
  float			MCneutrino_px;		     
  float			MCneutrino_py;		     
  float			MCneutrino_pz;		     
  int			NPrimaryVertices;	     
  bool			triggerIsoMu24;		     
  float			EventWeight;                                 


  //List of branches

	 
  TBranch		NJet;			    
  TBranch		Jet_Px;			    
  TBranch		Jet_Py;			    
  TBranch		Jet_Pz;			    
  TBranch		Jet_E;			    
  TBranch		Jet_btag;		    
  TBranch	 	Jet_ID;			    
  TBranch		NMuon;			    
  TBranch		Muon_Px;		    
  TBranch		Muon_Py;		    
  TBranch		Muon_Pz;		    
  TBranch		Muon_E;			    
  TBranch		Muon_Charge;		    
  TBranch	 	Muon_Iso;		    
  TBranch		NElectron;		    
  TBranch		Electron_Px;		    
  TBranch		Electron_Py;		    
  TBranch		Electron_Pz;		    
  TBranch		Electron_E;		    
  TBranch		Electron_Charge;	    
  TBranch	 	Electron_Iso;		    
  TBranch		NPhoton;		    
  TBranch		Photon_Px;		    
  TBranch		Photon_Py;		    
  TBranch		Photon_Pz;		    
  TBranch		Photon_E;		    
  TBranch		Photon_Charge;		    
  TBranch		Photon_Iso;		    
  TBranch			MET_px;			    
  TBranch			Met_py;			    
  TBranch			MChadronicBottom_px;	    
  TBranch			MChadronicBottom_py;	    
  TBranch			MChadronicBottom_pz;	    
  TBranch			MCleptonicBottom_px;	    
  TBranch			MCleptonicBottom_py;	    
  TBranch			MCleptonicBottom_pz;	    
  TBranch			MChadronicWDecayQuark_px;   
  TBranch			MChadronicWDecayQuark_py;   
  TBranch			MChadronicWDecayQuark_pz;   
  TBranch			MChadronicWDecayQuarkBar_px;
  TBranch			MChadronicWDecayQuarkBar_py;
  TBranch			MChadronicWDecayQuarkBar_pz;
  TBranch			MClepton_px;		    
  TBranch			MClepton_py;		    
  TBranch			MClepton_pz;		    
  TBranch			MClepton_PDGid;		    
  TBranch			MCneutrino_px;		    
  TBranch			MCneutrino_py;		    
  TBranch			MCneutrino_pz;		    
  TBranch			NPrimaryVertices;	    
  TBranch			triggerIsoMu24;		    
  TBranch			EventWeight;                
}
