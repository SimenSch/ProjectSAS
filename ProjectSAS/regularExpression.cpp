#include "regularExpression.h"
bool regularExpression::regexAddress(string stringInput){
    regex addresscheck("^[a-zæøåÆØÅA-Z+0-9]{2,20}$");
    if(regex_match(stringInput,addresscheck)){
        return true;
    }
    else{
        return false;
}

}
bool regularExpression::regexDate(string stringInput){
    regex datecheck("^[0-9]{2}[0-9]{2}[0-9]{4}$");
    if(regex_match(stringInput,datecheck)){
        return true;
    }
    else{
        return false;
}
}
bool regularExpression::regexEmail(string stringInput){
    regex emailcheck("^(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*)@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\\])$");
    if(regex_match(stringInput,emailcheck)){
        return true;
    }
    else{
        return false;
}
}
bool regularExpression::regexName(string stringInput){
    regex onlyalphabeticcheck("^[a-zæøåÆØÅA-Z\\.]$");
        if(regex_match(stringInput,onlyalphabeticcheck)){
            return true;
        }
        else{
            return false;
    }
}
bool regularExpression::zipcheck(string stringInput){
    regex zipcheck("^[0-9]{4}$");
    if(regex_match(stringInput,zipcheck)){
        return true;
    }
    else{
        return false;
}
}
