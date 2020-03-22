//========================================
//Method implementation used for the
//analysis.
//=========================================

#define AnalysisFAEA_cxx
#include "AnalysisFAEA.h"


void AnalysisFAEA::Loop(){
  //Main method for AnalysisFAEA
  //First we set the path where to read the rootfiles
  TString Datapath = "../files/";

  for(int i = 0; i < Backgrounds.size(); i++){
     std::cout << "Background: " << Backgrounds.at(i) << std::endl;
  }
  
    
}

