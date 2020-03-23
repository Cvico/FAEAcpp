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
  //================================ Atributes for this class
  std::vector<TString> Backgrounds{};
  float			weight;
  float			MuonPt;
  float			MET;
  float			MuonEta;
  float			DiMuonMass;
  TTree			*fChain;
  int			fCurrent;
  //================================Declaration of leaves types
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


  TBranch	       *b_NJet;			                  //!			    
  TBranch	       *b_Jet_Px;			   	     //!
  TBranch	       *b_Jet_Py;			   	     //!
  TBranch	       *b_Jet_Pz;			   	     //!
  TBranch	       *b_Jet_E;			   	     //!
  TBranch	       *b_Jet_btag;		   	     //!
  TBranch	       *b_Jet_ID;			   	     //!
  TBranch	       *b_NMuon;			   	     //!
  TBranch	       *b_Muon_Px;		   	     //!
  TBranch	       *b_Muon_Py;		   	     //!
  TBranch	       *b_Muon_Pz;		   	     //!
  TBranch	       *b_Muon_E;			   	     //!
  TBranch	       *b_Muon_Charge;		   	     //!
  TBranch	       *b_Muon_Iso;		   	     //!
  TBranch	       *b_NElectron;		   	     //!
  TBranch	       *b_Electron_Px;		   	     //!
  TBranch	       *b_Electron_Py;		   	     //!
  TBranch	       *b_Electron_Pz;		   	     //!
  TBranch	       *b_Electron_E;		   	     //!
  TBranch	       *b_Electron_Charge;	   	     //!
  TBranch	       *b_Electron_Iso;		   	     //!
  TBranch	       *b_NPhoton;		   	     //!
  TBranch	       *b_Photon_Px;		   	     //!
  TBranch	       *b_Photon_Py;		   	     //!
  TBranch	       *b_Photon_Pz;		   	     //!
  TBranch	       *b_Photon_E;		   	     //!
  TBranch	       *b_Photon_Charge;		   	     //!
  TBranch	       *b_Photon_Iso;		   	     //!
  TBranch	       *b_MET_px;			        //!
  TBranch	       *b_Met_py;			        //!
  TBranch	       *b_MChadronicBottom_px;	        //!
  TBranch	       *b_MChadronicBottom_py;	        //!
  TBranch	       *b_MChadronicBottom_pz;	        //!
  TBranch	       *b_MCleptonicBottom_px;	        //!
  TBranch	       *b_MCleptonicBottom_py;	        //!
  TBranch	       *b_MCleptonicBottom_pz;	        //!
  TBranch	       *b_MChadronicWDecayQuark_px;       //!
  TBranch	       *b_MChadronicWDecayQuark_py;       //!
  TBranch	       *b_MChadronicWDecayQuark_pz;       //!
  TBranch	       *b_MChadronicWDecayQuarkBar_px;     //!
  TBranch	       *b_MChadronicWDecayQuarkBar_py;     //!
  TBranch	       *b_MChadronicWDecayQuarkBar_pz;     //!
  TBranch	       *b_MClepton_px;		        //!
  TBranch	       *b_MClepton_py;		        //!
  TBranch	       *b_MClepton_pz;		        //!
  TBranch	       *b_MClepton_PDGid;		        //!
  TBranch	       *b_MCneutrino_px;		        //!
  TBranch	       *b_MCneutrino_py;		        //!
  TBranch	       *b_MCneutrino_pz;		        //!
  TBranch	       *b_NPrimaryVertices;	        //!
  TBranch	       *b_triggerIsoMu24;		        //!
  TBranch	       *b_EventWeight;                      //!


  //================================ Method Declaration
  //Constructor
  AnalysisFAEA(TString Sample); //Overloaded constructor
  AnalysisFAEA(TTree *Tree);
  //Destructor
  ~AnalysisFAEA();
  int cut(int entry);
  int GetEntry(int entry);
  int LoadTree(int entry);
  void Init(TTree *tree);
  void InitHistos();
  void FillHistograms();
  void Loop(TString sample);
  void Loop(std::vector<TString> VectorSamples);
  Bool_t Notify();
  void Show(int entry = -1);


};
#endif
//====================== Method Implementation
#ifdef AnalysisFAEA_cxx
AnalysisFAEA::AnalysisFAEA(TString Sample){
  //Open datapath and extract its tree
  TString datapath = "../files";
  TFile *f = new TFile(datapath + sample + ".root");
  TTree *T = (TTree*)gROOT->FindObject("events");
  //Give it to the second constructor
  AnalysisFAEA(T);
}
AnalysisFAEA::AnalysisFAEA(TTree *Tree){
  Init(Tree);
  InitHistos();
  Loop("dy");
}

AnalysisFAEA::~AnalysisFAEA(){
  if (!Tree) return;
  delete Tree->GetCurrentFile();
}

int AnalysisFAEA::GetEntry(int entry){
  if (!Tree) return 0;
  return Tree->GetEntry(entry);

}

int AnalysisFAEA::LoadTree(int entry){

  //Set the environment to read one entry
  if(!Tree) return -5;
  int centry = Tree->LoadTree(entry);
  if (centry < 0) return centry;
  return centry;
}

void AnalysisFAEA::Init(TTree *tree){
  //Set branch addresses
  if (tree == 0) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);
  fChain->SetBranchAddress("NJet",&NJet )                                                      ;
  fChain->SetBranchAddress("Jet_Px",&Jet_Px )							;
  fChain->SetBranchAddress("Jet_Py",&Jet_Py )							;
  fChain->SetBranchAddress("Jet_Pz",&Jet_Pz )							;
  fChain->SetBranchAddress("Jet_E",&Jet_E )							;
  fChain->SetBranchAddress("Jet_btag",& Jet_btag )						;
  fChain->SetBranchAddress("Jet_ID",&Jet_ID )							;
  fChain->SetBranchAddress("NMuon",&NMuon )							;
  fChain->SetBranchAddress("Muon_Px",& Muon_Px )						;
  fChain->SetBranchAddress("Muon_Py",& Muon_Py )						;
  fChain->SetBranchAddress("Muon_Pz",& Muon_Pz )						;
  fChain->SetBranchAddress("Muon_E",&Muon_E )							;
  fChain->SetBranchAddress("Muon_Charge",&Muon_Charge )					;
  fChain->SetBranchAddress("Muon_Iso",& Muon_Iso )						;
  fChain->SetBranchAddress("NElectron",& NElectron) 						;
  fChain->SetBranchAddress("Electron_Px",&Electron_Px )					;
  fChain->SetBranchAddress("Electron_Py",&Electron_Py )					;
  fChain->SetBranchAddress("Electron_Pz",&Electron_Pz )					;
  fChain->SetBranchAddress("Electron_E",&Electron_E )						;
  fChain->SetBranchAddress("Electron_Charge",& Electron_Charge )				;
  fChain->SetBranchAddress("Electron_Iso",&Electron_Iso )					;
  fChain->SetBranchAddress("NPhoton",& NPhoton )						;
  fChain->SetBranchAddress("Photon_Px",& Photon_Px )						;
  fChain->SetBranchAddress("Photon_Py",& Photon_Py )						;
  fChain->SetBranchAddress("Photon_Pz",& Photon_Pz )						;
  fChain->SetBranchAddress("Photon_E",& Photon_E )						;
  fChain->SetBranchAddress("Photon_Charge",&Photon_Charge )					;
  fChain->SetBranchAddress("Photon_Iso",&Photon_Iso )						;
  fChain->SetBranchAddress("MET_px",&MET_px )							;
  fChain->SetBranchAddress("Met_pz",&Met_py )							;
  fChain->SetBranchAddress("MChadronicBottom_px",&MChadronicBottom_px )			;
  fChain->SetBranchAddress("MChadronicBottom_py",&MChadronicBottom_py )			;
  fChain->SetBranchAddress("MChadronicBottom_pz",&MChadronicBottom_pz )			;
  fChain->SetBranchAddress("MCleptonicBottom_px",&MCleptonicBottom_px )			;
  fChain->SetBranchAddress("MCleptonicBottom_py",&MCleptonicBottom_py )			;
  fChain->SetBranchAddress("MCleptonicBottom_pz",&MCleptonicBottom_pz )			;
  fChain->SetBranchAddress("MChadronicWDecayQuark_px",&   MChadronicWDecayQuark_px )		;
  fChain->SetBranchAddress("MChadronicWDecayQuark_py",&   MChadronicWDecayQuark_py )		;
  fChain->SetBranchAddress("MChadronicWDecayQuark_pz",&   MChadronicWDecayQuark_pz )		;
  fChain->SetBranchAddress("MChadronicWDecayQuarkBar_px",&   MChadronicWDecayQuarkBar_px )	;
  fChain->SetBranchAddress("MChadronicWDecayQuarkBar_py",&   MChadronicWDecayQuarkBar_py )	;
  fChain->SetBranchAddress("MChadronicWDecayQuarkBar_pz",& MChadronicWDecayQuarkBar_pz ) 	;
  fChain->SetBranchAddress("MClepton_px",&MClepton_px )					;
  fChain->SetBranchAddress("MClepton_py",&MClepton_py )					;
  fChain->SetBranchAddress("MClepton_pz",&MClepton_pz )					;
  fChain->SetBranchAddress("MClepton_PDGid",&MClepton_PDGid )					;
  fChain->SetBranchAddress("MCneutrino_px",&MCneutrino_px )					;
  fChain->SetBranchAddress("MCneutrino_py",&MCneutrino_py )					;
  fChain->SetBranchAddress("MCneutrino_pz",&MCneutrino_pz )					;
  fChain->SetBranchAddress("NPrimaryVertices",& NPrimaryVertices )				;
  fChain->SetBranchAddress("triggerIsoMu24",&triggerIsoMu24 )					;
  fChain->SetBranchAddress("EventWeight",& EventWeight)                                        ; 

  
}

bool AnalysisFAEA::Notify(){
  //Called when loading a new file.
  //Get branch pointers
  b_NJet			= fChain->GetBranch("NJet");	        
  b_Jet_Px     		      	= fChain->GetBranch("Jet_Px");	    	    
  b_Jet_Py     		      	= fChain->GetBranch("Jet_Py");	    	    
  b_Jet_Pz     		      	= fChain->GetBranch("Jet_Pz");	        
  b_Jet_E	     	      	= fChain->GetBranch("Jet_E");	        
  b_Jet_btag   		      	= fChain->GetBranch("Jet_btag");	    
  b_Jet_ID     		      	= fChain->GetBranch("Jet_ID");	    	    
  b_NMuon	     	      	= fChain->GetBranch("NMuon");	        
  b_Muon_Px    		      	= fChain->GetBranch("Muon_Px");	    
  b_Muon_Py    		      	= fChain->GetBranch("Muon_Py");	    
  b_Muon_Pz    		      	= fChain->GetBranch("Muon_Pz");	    
  b_Muon_E     		      	= fChain->GetBranch("Muon_E");	    	    
  b_Muon_Charge		      	= fChain->GetBranch("Muon_Charge");	    
  b_Muon_Iso   	              	= fChain->GetBranch("Muon_Iso");     
  b_NElectron     	      	= fChain->GetBranch("NElectron");
  b_Electron_Px		      	= fChain->GetBranch("Electron_Px");	    
  b_Electron_Py		      	= fChain->GetBranch("Electron_Py");	    
  b_Electron_Pz		      	= fChain->GetBranch("Electron_Pz");	    
  b_Electron_E 		      	= fChain->GetBranch("Electron_E");	    
  b_Electron_Charge	      	= fChain->GetBranch("Electron_Charge");
  b_Electron_Iso	      	= fChain->GetBranch("Electron_Iso");	        
  b_NPhoton    		      	= fChain->GetBranch("NPhoton");	    
  b_Photon_Px  		      	= fChain->GetBranch("Photon_Px");	    
  b_Photon_Py  		      	= fChain->GetBranch("Photon_Py");	    
  b_Photon_Pz  		      	= fChain->GetBranch("Photon_Pz");	    
  b_Photon_E   		      	= fChain->GetBranch("Photon_E");	    
  b_Photon_Charge	      	= fChain->GetBranch("Photon_Charge");	        
  b_Photon_Iso 		      	= fChain->GetBranch("Photon_Iso");	    
  b_MET_px     		      	= fChain->GetBranch("MET_px");	    	    
  b_Met_py     		      	= fChain->GetBranch("Met_py");	    	    
  b_MChadronicBottom_px	      	= fChain->GetBranch("MChadronicBottom_px");	        
  b_MChadronicBottom_py	      	= fChain->GetBranch("MChadronicBottom_py");	        
  b_MChadronicBottom_pz	      	= fChain->GetBranch("MChadronicBottom_pz");	        
  b_MCleptonicBottom_px	      	= fChain->GetBranch("MCleptonicBottom_px");	        
  b_MCleptonicBottom_py	      	= fChain->GetBranch("MCleptonicBottom_py");	        
  b_MCleptonicBottom_pz	      	= fChain->GetBranch("MCleptonicBottom_pz");	        
  b_MChadronicWDecayQuark_px  	= fChain->GetBranch("MChadronicWDecayQuark_pz"); 
  b_MChadronicWDecayQuark_py  	= fChain->GetBranch("MChadronicWDecayQuark_py");
  b_MChadronicWDecayQuark_pz  	= fChain->GetBranch("MChadronicWDecayQuark_pz");
  b_MChadronicWDecayQuarkBar_px	= fChain->GetBranch("MChadronicWDecayQuarkBar_px");
  b_MChadronicWDecayQuarkBar_py	= fChain->GetBranch("MChadronicWDecayQuarkBar_py");
  b_MChadronicWDecayQuarkBar_pz	= fChain->GetBranch("MChadronicWDecayQuarkBar_pz");
  b_MClepton_px		      	= fChain->GetBranch("MClepton_px");	    
  b_MClepton_py		      	= fChain->GetBranch("MClepton_py");	    
  b_MClepton_pz		      	= fChain->GetBranch("MClepton_pz");	    
  b_MClepton_PDGid	      	= fChain->GetBranch("MClepton_PDGid");	    
  b_MCneutrino_px	      	= fChain->GetBranch("MCneutrino_px");	        
  b_MCneutrino_py	      	= fChain->GetBranch("MCneutrino_py");	        
  b_MCneutrino_pz	      	= fChain->GetBranch("MCneutrino_pz");	        
  b_NPrimaryVertices	      	= fChain->GetBranch("NPrimaryVertices");
  b_triggerIsoMu24	      	= fChain->GetBranch("triggerIsoMu24");	    
  b_EventWeight               	= fChain->GetBranch("EventWeight");

  return kTRUE;

}

void AnalysisFAEA::Show(int entry){
  //Print contents of entry.
  //If entry is not specified, princt current entry
  if (Tree) return;
  fChain->Show(entry);

}
int AnalysisFAEA::cut(int entry){
  //This function may be called from loop
  //returns 1 if entry is accepted
  //returns -1 otherwise.
  return 1;
}
#endif //ifdef AnalysisFAEA_cxx
