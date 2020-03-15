
#include "datahandler.h"
#include <cstring>

using namespace std;

DataHandler::DataHandler()
{

}

string DataHandler::getData(string request) {
    char requestHandler[40];
    char reqClass[20];
    char reqVar[20];
    for(int i = 0; i < 20; i++){
        reqClass[i] = NULL;
        reqVar[i] = NULL;
        requestHandler[i] = NULL;
        requestHandler[i + 20] = NULL;
    }

    strcpy(requestHandler, request.c_str());
    strcpy(reqClass, strtok(requestHandler, ":\0"));
    strcpy(reqVar, strtok(requestHandler, "\0"));



    return NULL;
}

string DataHandler::setData(string request) {
    char requestHandler[40];
    char reqClass[20];
    char reqVar[20];
    for(int i = 0; i < 20; i++){
        reqClass[i] = NULL;
        reqVar[i] = NULL;
        requestHandler[i] = NULL;
        requestHandler[i + 20] = NULL;
    }

    strcpy(requestHandler, request.c_str());
    strcpy(reqClass, strtok(requestHandler, ":\0"));
    strcpy(reqVar, strtok(requestHandler, "\0"));

    return NULL;

}

