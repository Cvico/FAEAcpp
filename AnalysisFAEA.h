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


  TBranch	        NJet;			                  //!			    
  TBranch	       	Jet_Px;			   	     //!
  TBranch	       	Jet_Py;			   	     //!
  TBranch	       	Jet_Pz;			   	     //!
  TBranch	       	Jet_E;			   	     //!
  TBranch	       	Jet_btag;		   	     //!
  TBranch	       	Jet_ID;			   	     //!
  TBranch	       	NMuon;			   	     //!
  TBranch	       	Muon_Px;		   	     //!
  TBranch	       	Muon_Py;		   	     //!
  TBranch	       	Muon_Pz;		   	     //!
  TBranch	       	Muon_E;			   	     //!
  TBranch	       	Muon_Charge;		   	     //!
  TBranch	       	Muon_Iso;		   	     //!
  TBranch	       	NElectron;		   	     //!
  TBranch	       	Electron_Px;		   	     //!
  TBranch	       	Electron_Py;		   	     //!
  TBranch	       	Electron_Pz;		   	     //!
  TBranch	       	Electron_E;		   	     //!
  TBranch	       	Electron_Charge;	   	     //!
  TBranch	       	Electron_Iso;		   	     //!
  TBranch	       	NPhoton;		   	     //!
  TBranch	       	Photon_Px;		   	     //!
  TBranch	       	Photon_Py;		   	     //!
  TBranch	       	Photon_Pz;		   	     //!
  TBranch	       	Photon_E;		   	     //!
  TBranch	       	Photon_Charge;		   	     //!
  TBranch	       	Photon_Iso;		   	     //!
  TBranch	       	MET_px;			        //!
  TBranch	       	Met_py;			        //!
  TBranch	       	MChadronicBottom_px;	        //!
  TBranch	       	MChadronicBottom_py;	        //!
  TBranch	       	MChadronicBottom_pz;	        //!
  TBranch	       	MCleptonicBottom_px;	        //!
  TBranch	       	MCleptonicBottom_py;	        //!
  TBranch	       	MCleptonicBottom_pz;	        //!
  TBranch	       	MChadronicWDecayQuark_px;       //!
  TBranch	       	MChadronicWDecayQuark_py;       //!
  TBranch	       	MChadronicWDecayQuark_pz;       //!
  TBranch	       	MChadronicWDecayQuarkBar_px     //!
  TBranch	       	MChadronicWDecayQuarkBar_py     //!
  TBranch	       	MChadronicWDecayQuarkBar_pz     //!
  TBranch	       	MClepton_px;		        //!
  TBranch	       	MClepton_py;		        //!
  TBranch	       	MClepton_pz;		        //!
  TBranch	       	MClepton_PDGid;		        //!
  TBranch	       	MCneutrino_px;		        //!
  TBranch	       	MCneutrino_py;		        //!
  TBranch	       	MCneutrino_pz;		        //!
  TBranch	       	NPrimaryVertices;	        //!
  TBranch	       	triggerIsoMu24;		        //!
  TBranch	        EventWeight;                      //!

  //================================ Method Declaration
  //Constructor
  AnalysisFAEA(TTree *tree = 0);
  //Destructor
  ~AnalysisFAEA();
  int cut(int entry);
  int GetEntry(int entry);
  int LoadTree(int entry);
  void Init(TTree *tree);
  void Loop(float cut);
  Bool_t Notify();
  void Show(int entry = -1);
};
#endif
//====================== Method Implementation
#ifdef AnalysisFAEA_cxx
AnalysisFAEA::AnalysisFAEA(TTree *tree){

  if (tree == 0) {
    std::cout << "[ERROR]: No rootfile to be read" << std::endl;

  }
  Init(tree);

}

AnalysisFAEA::~AnalysisFAEA(){
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

int AnalysisFAEA::GetEntry(int entry){
  if (!fChain) return 0;
  return fChain->GetEntry(entry);

}

int AnalysisFAEA::LoadTree(int entry){

  //Set the environment to read one entry
  if(!fChain) return -5;
  int centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (fChain->IsA() != TChain::Class()) return centry;
  TChain *chain = (TChain*)fChain;
  if (chain->GetTreeNumber() != fCurrent) {
    fCurrent = chain->GetTreeNumber();
    Notify();
  }
  return centry;
}

void AnalysisFAEA::Init(TTree *tree){
  //Set branch addresses
  if (tree == 0) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);

   fChain->SetBranchAddress("NJet",&NJet )
   fChain->SetBranchAddress("Jet_Px",&Jet_Px )
   fChain->SetBranchAddress("Jet_Py",&Jet_Py )
   fChain->SetBranchAddress("Jet_Pz",&Jet_Pz )
   fChain->SetBranchAddress("Jet_E",&Jet_E )
   fChain->SetBranchAddress("Jet_btag",& Jet_btag )
   fChain->SetBranchAddress("Jet_ID",&Jet_ID )
   fChain->SetBranchAddress("NMuon",&NMuon )
   fChain->SetBranchAddress("Muon_Px",& Muon_Px		                         )
   fChain->SetBranchAddress("Muon_Py",& Muon_Py		                         )
   fChain->SetBranchAddress("Muon_Pz",& Muon_Pz		                         )
   fChain->SetBranchAddress("Muon_E",&Muon_E			                                 )
   fChain->SetBranchAddress("Muon_Charge",&Muon_Charge		                                 )
   fChain->SetBranchAddress("Muon_Iso",& Muon_Iso		                         )
   fChain->SetBranchAddress("NElectron",& NElectron) 
   fChain->SetBranchAddress("Electron_Px",&Electron_Px		                                 )
   fChain->SetBranchAddress("Electron_Py",&Electron_Py		                                 )
   fChain->SetBranchAddress("Electron_Pz",&Electron_Pz		                                 )
   fChain->SetBranchAddress("Electron_E",&Electron_E		                                 )
   fChain->SetBranchAddress("Electron_Charge",&        Electron_Charge	                         )
   fChain->SetBranchAddress("Electron_Iso",&Electron_Iso		                                 )
   fChain->SetBranchAddress("NPhoton",&        NPhoton		                         )
   fChain->SetBranchAddress("Photon_Px",&        Photon_Px		                         )
   fChain->SetBranchAddress("Photon_Py",&        Photon_Py		                         )
   fChain->SetBranchAddress("Photon_Pz",&        Photon_Pz		                         )
   fChain->SetBranchAddress("Photon_E",&        Photon_E		                         )
   fChain->SetBranchAddress("Photon_Charge",&Photon_Charge		                                 )
   fChain->SetBranchAddress("Photon_Iso",&Photon_Iso	                                 )
   fChain->SetBranchAddress("MET_px",&MET_px			                                 )
   fChain->SetBranchAddress("Met_pz",&Met_py			                                 )
   fChain->SetBranchAddress("MChadronicBottom_px",&MChadronicBottom_px	                                 )
   fChain->SetBranchAddress("MChadronicBottom_py",&MChadronicBottom_py	                                 )
   fChain->SetBranchAddress("MChadronicBottom_pz",&MChadronicBottom_pz	                                 )
   fChain->SetBranchAddress("MCleptonicBottom_px",&MCleptonicBottom_px	                                 )
   fChain->SetBranchAddress("MCleptonicBottom_py",&MCleptonicBottom_py	                                 )
   fChain->SetBranchAddress("MCleptonicBottom_pz",&MCleptonicBottom_pz	                                 )
   fChain->SetBranchAddress("MChadronicWDecayQuark_px",&   MChadronicWDecayQuark_px                             )
   fChain->SetBranchAddress("MChadronicWDecayQuark_py",&   MChadronicWDecayQuark_py                             )
   fChain->SetBranchAddress("MChadronicWDecayQuark_pz",&   MChadronicWDecayQuark_pz                             )
   fChain->SetBranchAddress("MChadronicWDecayQuarkBar_px",&   MChadronicWDecayQuarkBar_px                           )
   fChain->SetBranchAddress("MChadronicWDecayQuarkBar_py",&   MChadronicWDecayQuarkBar_py                           )  
   fChain->SetBranchAddress("MChadronicWDecayQuarkBar_pz",&   MChadronicWDecayQuarkBar_pz                           )
   fChain->SetBranchAddress("MClepton_px",&MClepton_px		                                 )
   fChain->SetBranchAddress("MClepton_py",&MClepton_py		                                 )
   fChain->SetBranchAddress("MClepton_pz",&MClepton_pz		                                 )
   fChain->SetBranchAddress("MClepton_PDGid",&MClepton_PDGid		                                 )
   fChain->SetBranchAddress("MCneutrino_px",&MCneutrino_px		                                 )
   fChain->SetBranchAddress("MCneutrino_py",&MCneutrino_py		                                 )
   fChain->SetBranchAddress("MCneutrino_pz",&MCneutrino_pz		                                 )
   fChain->SetBranchAddress("NPrimaryVertices",&        NPrimaryVertices	                         )
   fChain->SetBranchAddress("triggerIsoMu24",&triggerIsoMu24		                                 )
   fChain->SetBranchAddress("EventWeight",&   EventWeight) 

     }

}
