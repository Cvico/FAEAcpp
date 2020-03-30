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
#include "auxiliar.C"

class AnalysisFAEA {
  
  public:
      
  //================================ Histograms to be filled
  TH1F          *h_MuonPt;
  TH1F          *h_NJet;
  TH1F          *h_MET;
  TH1F          *h_MuonEta;
  //================================ Atributes for this class
  TFile         *fOut; //File to store histograms
  float			weight;
  float			MuonPt;
  float			MET;
  float			MuonEta;
  float			DiMuonMass;
  TTree			*Tree;
  //================================Declaration of leaves types
  int			NJet;			     
  float			Jet_Px;			     
  float			Jet_Py;			     
  float			Jet_Pz;			     
  float			Jet_E;			     
  float	        Jet_btag[20];		     
  float	        Jet_ID[20];			     
  int			        NMuon;			     
  float	                Muon_Px[20];		     
  float	                Muon_Py[20]; 		     
  float	                Muon_Pz[20]; 		     
  float   	            Muon_E[20]; 			     
  int			        Muon_Charge;		     
  float             	Muon_Iso[10];		     
  int			        NElectron;		     
  float                 Electron_Px[10];		     
  float	                Electron_Py[10];		     
  float	                Electron_Pz[10];		     
  float	                Electron_E[10];		     
  int			        Electron_Charge;	     
  float	                Electron_Iso[10];		     
  int			        NPhoton;		     
  float                 Photon_Px[10];		     
  float             	Photon_Py[10];		     
  float	                Photon_Pz[10];		     
  float             	Photon_E[10];		     
  float             	Photon_Iso[10];		     
  float	                MET_px;			     
  float	                MET_py;			     
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
  int			MCleptonPDGid;		     
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
  TBranch	       *b_Photon_Iso;		   	     //!
  TBranch	       *b_MET_px;			        //!
  TBranch	       *b_MET_py;			        //!
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
  TBranch	       *b_MCleptonPDGid;		        //!
  TBranch	       *b_MCneutrino_px;		        //!
  TBranch	       *b_MCneutrino_py;		        //!
  TBranch	       *b_MCneutrino_pz;		        //!
  TBranch	       *b_NPrimaryVertices;	        //!
  TBranch	       *b_triggerIsoMu24;		        //!
  TBranch	       *b_EventWeight;                      //!


  //================================ Method Declaration
  //Constructor
  AnalysisFAEA(const std::string Input); //Overloaded constructor
  //Destructor
  ~AnalysisFAEA();
  int cut(int entry);
  int GetEntry(int entry);
  int LoadTree(int entry);
  void WriteHistograms();
  void Init(TTree *tree);
  void InitHistos();
  void FillHistograms();
  void Loop(TString sample = "ttbar");
  void Loop(std::vector<TString> VectorSamples);
  Bool_t Notify();
  void Show(int entry = -1);


};
#endif
//====================== Method Implementation
#ifdef AnalysisFAEA_cxx

AnalysisFAEA::AnalysisFAEA(const std::string Input){
  std::vector<TString> Samples = TStringToVector(Input);
  TString datapath = "../files/"; 
  
  for (int sample = 0; sample < Samples.size(); sample++){
    std::cout << "Analysis for " << Samples.at(sample) << " MC sample..." << std::endl;
    //Open datapath and extract its tree
    TFile *f = new TFile(datapath + Samples.at(sample) + ".root", "read");
    Tree = (TTree*)gROOT->FindObject("events");
    Init(Tree);
    InitHistos();
    Loop(Samples.at(sample));
    delete f;
  }
 
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
  Tree = tree;
  Tree->SetMakeClass(1);
  Tree->SetBranchAddress("NJet",&NJet )                                                      ;
  Tree->SetBranchAddress("Jet_Px",&Jet_Px )							;
  Tree->SetBranchAddress("Jet_Py",&Jet_Py )							;
  Tree->SetBranchAddress("Jet_Pz",&Jet_Pz )							;
  Tree->SetBranchAddress("Jet_E",&Jet_E )							;
  Tree->SetBranchAddress("Jet_btag",& Jet_btag )						;
  Tree->SetBranchAddress("Jet_ID",&Jet_ID )							;
  Tree->SetBranchAddress("NMuon",&NMuon )							;
  Tree->SetBranchAddress("Muon_Px",& Muon_Px )						;
  Tree->SetBranchAddress("Muon_Py",& Muon_Py )						;
  Tree->SetBranchAddress("Muon_Pz",& Muon_Pz )						;
  Tree->SetBranchAddress("Muon_E",&Muon_E )							;
  Tree->SetBranchAddress("Muon_Charge",&Muon_Charge )					;
  Tree->SetBranchAddress("Muon_Iso",& Muon_Iso )						;
  Tree->SetBranchAddress("NElectron",& NElectron) 						;
  Tree->SetBranchAddress("Electron_Px",&Electron_Px )					;
  Tree->SetBranchAddress("Electron_Py",&Electron_Py )					;
  Tree->SetBranchAddress("Electron_Pz",&Electron_Pz )					;
  Tree->SetBranchAddress("Electron_E",&Electron_E )						;
  Tree->SetBranchAddress("Electron_Charge",& Electron_Charge )				;
  Tree->SetBranchAddress("Electron_Iso",&Electron_Iso )					;
  Tree->SetBranchAddress("NPhoton",& NPhoton )						;
  Tree->SetBranchAddress("Photon_Px",& Photon_Px )						;
  Tree->SetBranchAddress("Photon_Py",& Photon_Py )						;
  Tree->SetBranchAddress("Photon_Pz",& Photon_Pz )						;
  Tree->SetBranchAddress("Photon_E",& Photon_E )						;
  Tree->SetBranchAddress("Photon_Iso",&Photon_Iso )						;
  Tree->SetBranchAddress("MET_px",&MET_px )							;
  Tree->SetBranchAddress("MET_py",&MET_py )							;
  Tree->SetBranchAddress("MChadronicBottom_px",&MChadronicBottom_px )			;
  Tree->SetBranchAddress("MChadronicBottom_py",&MChadronicBottom_py )			;
  Tree->SetBranchAddress("MChadronicBottom_pz",&MChadronicBottom_pz )			;
  Tree->SetBranchAddress("MCleptonicBottom_px",&MCleptonicBottom_px )			;
  Tree->SetBranchAddress("MCleptonicBottom_py",&MCleptonicBottom_py )			;
  Tree->SetBranchAddress("MCleptonicBottom_pz",&MCleptonicBottom_pz )			;
  Tree->SetBranchAddress("MChadronicWDecayQuark_px",&   MChadronicWDecayQuark_px )		;
  Tree->SetBranchAddress("MChadronicWDecayQuark_py",&   MChadronicWDecayQuark_py )		;
  Tree->SetBranchAddress("MChadronicWDecayQuark_pz",&   MChadronicWDecayQuark_pz )		;
  Tree->SetBranchAddress("MChadronicWDecayQuarkBar_px",&   MChadronicWDecayQuarkBar_px )	;
  Tree->SetBranchAddress("MChadronicWDecayQuarkBar_py",&   MChadronicWDecayQuarkBar_py )	;
  Tree->SetBranchAddress("MChadronicWDecayQuarkBar_pz",& MChadronicWDecayQuarkBar_pz ) 	;
  Tree->SetBranchAddress("MClepton_px",&MClepton_px )					;
  Tree->SetBranchAddress("MClepton_py",&MClepton_py )					;
  Tree->SetBranchAddress("MClepton_pz",&MClepton_pz )					;
  Tree->SetBranchAddress("MCleptonPDGid",&MCleptonPDGid )					;
  Tree->SetBranchAddress("MCneutrino_px",&MCneutrino_px )					;
  Tree->SetBranchAddress("MCneutrino_py",&MCneutrino_py )					;
  Tree->SetBranchAddress("MCneutrino_pz",&MCneutrino_pz )					;
  Tree->SetBranchAddress("NPrimaryVertices",& NPrimaryVertices )				;
  Tree->SetBranchAddress("triggerIsoMu24",&triggerIsoMu24 )					;
  Tree->SetBranchAddress("EventWeight",& EventWeight)                                        ; 

  
}

bool AnalysisFAEA::Notify(){
  //Called when loading a new file.
  //Get branch pointers
  b_NJet			= Tree->GetBranch("NJet");	        
  b_Jet_Px     		      	= Tree->GetBranch("Jet_Px");	    	    
  b_Jet_Py     		      	= Tree->GetBranch("Jet_Py");	    	    
  b_Jet_Pz     		      	= Tree->GetBranch("Jet_Pz");	        
  b_Jet_E	     	      	= Tree->GetBranch("Jet_E");	        
  b_Jet_btag   		      	= Tree->GetBranch("Jet_btag");	    
  b_Jet_ID     		      	= Tree->GetBranch("Jet_ID");	    	    
  b_NMuon	     	      	= Tree->GetBranch("NMuon");	        
  b_Muon_Px    		      	= Tree->GetBranch("Muon_Px");	    
  b_Muon_Py    		      	= Tree->GetBranch("Muon_Py");	    
  b_Muon_Pz    		      	= Tree->GetBranch("Muon_Pz");	    
  b_Muon_E     		      	= Tree->GetBranch("Muon_E");	    	    
  b_Muon_Charge		      	= Tree->GetBranch("Muon_Charge");	    
  b_Muon_Iso   	              	= Tree->GetBranch("Muon_Iso");     
  b_NElectron     	      	= Tree->GetBranch("NElectron");
  b_Electron_Px		      	= Tree->GetBranch("Electron_Px");	    
  b_Electron_Py		      	= Tree->GetBranch("Electron_Py");	    
  b_Electron_Pz		      	= Tree->GetBranch("Electron_Pz");	    
  b_Electron_E 		      	= Tree->GetBranch("Electron_E");	    
  b_Electron_Charge	      	= Tree->GetBranch("Electron_Charge");
  b_Electron_Iso	      	= Tree->GetBranch("Electron_Iso");	        
  b_NPhoton    		      	= Tree->GetBranch("NPhoton");	    
  b_Photon_Px  		      	= Tree->GetBranch("Photon_Px");	    
  b_Photon_Py  		      	= Tree->GetBranch("Photon_Py");	    
  b_Photon_Pz  		      	= Tree->GetBranch("Photon_Pz");	    
  b_Photon_E   		      	= Tree->GetBranch("Photon_E");	    
  b_Photon_Iso 		      	= Tree->GetBranch("Photon_Iso");	    
  b_MET_px     		      	= Tree->GetBranch("MET_px");	    	    
  b_MET_py     		      	= Tree->GetBranch("MET_py");	    	    
  b_MChadronicBottom_px	      	= Tree->GetBranch("MChadronicBottom_px");	        
  b_MChadronicBottom_py	      	= Tree->GetBranch("MChadronicBottom_py");	        
  b_MChadronicBottom_pz	      	= Tree->GetBranch("MChadronicBottom_pz");	        
  b_MCleptonicBottom_px	      	= Tree->GetBranch("MCleptonicBottom_px");	        
  b_MCleptonicBottom_py	      	= Tree->GetBranch("MCleptonicBottom_py");	        
  b_MCleptonicBottom_pz	      	= Tree->GetBranch("MCleptonicBottom_pz");	        
  b_MChadronicWDecayQuark_px  	= Tree->GetBranch("MChadronicWDecayQuark_pz"); 
  b_MChadronicWDecayQuark_py  	= Tree->GetBranch("MChadronicWDecayQuark_py");
  b_MChadronicWDecayQuark_pz  	= Tree->GetBranch("MChadronicWDecayQuark_pz");
  b_MChadronicWDecayQuarkBar_px	= Tree->GetBranch("MChadronicWDecayQuarkBar_px");
  b_MChadronicWDecayQuarkBar_py	= Tree->GetBranch("MChadronicWDecayQuarkBar_py");
  b_MChadronicWDecayQuarkBar_pz	= Tree->GetBranch("MChadronicWDecayQuarkBar_pz");
  b_MClepton_px		      	= Tree->GetBranch("MClepton_px");	    
  b_MClepton_py		      	= Tree->GetBranch("MClepton_py");	    
  b_MClepton_pz		      	= Tree->GetBranch("MClepton_pz");	    
  b_MCleptonPDGid	      	= Tree->GetBranch("MCleptonPDGid");	    
  b_MCneutrino_px	      	= Tree->GetBranch("MCneutrino_px");	        
  b_MCneutrino_py	      	= Tree->GetBranch("MCneutrino_py");	        
  b_MCneutrino_pz	      	= Tree->GetBranch("MCneutrino_pz");	        
  b_NPrimaryVertices	      	= Tree->GetBranch("NPrimaryVertices");
  b_triggerIsoMu24	      	= Tree->GetBranch("triggerIsoMu24");	    
  b_EventWeight               	= Tree->GetBranch("EventWeight");

  return kTRUE;

}

void AnalysisFAEA::Show(int entry){
  //Print contents of entry.
  //If entry is not specified, princt current entry
  if (Tree) return;
  Tree->Show(entry);

}
int AnalysisFAEA::cut(int entry){
  //This function may be called from loop
  //returns 1 if entry is accepted
  //returns -1 otherwise.
  return 1;
}
#endif //ifdef AnalysisFAEA_cxx
