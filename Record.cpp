//
// Created by ericc on 5/21/2021.
//
#include "Record.h"

void Record::setSeat(const string &valueType, any value) {
    carrierRec[valueType] = value; // todo Test this and see if it actually sets the map's value properly
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
any Record::getSeat(const string &valueType, const any&value) {
    //This should find the specific Map value via the key and then return "second" which is its value
    return carrierRec.find(valueType)->second;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void Record::coreParse() {
    //Ask what file going to parse -> open function for that file-type
    string fileType;

    cout << "File Types: billgen, cargodesc, cosignee, container, hazmat, hazmatclass, header, marksnumbers, notifyingparty, shipper, tariff" << endl;
    cout << "Enter which file you want to read: ";
    cin >> fileType;

    if (fileType == "billgen"){
        billgenParse();
    } else if (fileType == "cargodesc"){
        cargodescParse();
    } else if (fileType == "cosignee"){
        cosigneeParse();
    } else if (fileType == "container"){
        containerParse();
    } else if (fileType == "hazmat"){
        hazmatParse();
    } else if (fileType == "hazmatclass"){
        hazmatclassParse();
    } else if (fileType == "header"){
        headerParse();
    } else if (fileType == "marksnumber"){
        marksnumberParse();
    } else if (fileType == "notifyingparty"){
        notifyingpartyParse();
    } else if (fileType == "shipper"){
        shipperParse();
    } else if (fileType == "tariff"){
        tariffParse();
    } else {
        error("fileType entered did not match any of the presented opens");
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
void Record::billgenParse() {

}
void Record::cargodescParse() {

}
void Record::cosigneeParse() {

}
void Record::containerParse() {

}
void Record::hazmatParse() {

}
void Record::hazmatclassParse() {

}
void Record::headerParse() {

}
void Record::marksnumberParse() {

}
void Record::notifyingpartyParse() {

}
void Record::shipperParse() {

}
void Record::tariffParse() {

}
