//========================================================================
//
// This file contains several auxiliar functions used in the main macro
//
//======================================================================== 

std::vector<TString> TStringToVector(const std::string string){
    std::vector<TString>    words;
    TString delim = ",";
    TString space = " ";
    TString word = "";
    for (char const &c: string){
        if (c == delim){
            words.push_back(word);
            word = "";
        }
        if (c != delim & c != space){
            word += c;
        }
    }
    //Add the last word before ending the line
    words.push_back(word);
    return words;
}
