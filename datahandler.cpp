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
    string ansHandler;
    for(int i = 0; i < 20; i++){
        reqClass[i] = NULL;
        reqVar[i] = NULL;
        requestHandler[i] = NULL;
        requestHandler[i + 20] = NULL;
    }

    strcpy(requestHandler, request.c_str());
    strcpy(reqClass, strtok(requestHandler, ":\0"));
    strcpy(reqVar, strtok(requestHandler, "\0"));

    //code to select between different functions for retrieval. switch statement.
    //there will be a series of private DataHandler functions
    //that retrieve data from each other class.
    //Each will return strings, placed in ansHandler.


    return ansHandler;
}

string DataHandler::setData(string request) {
    char requestHandler[40];
    char reqClass[20];
    char reqVar[20];
    string ansHandler;
    for(int i = 0; i < 20; i++){
        reqClass[i] = NULL;
        reqVar[i] = NULL;
        requestHandler[i] = NULL;
        requestHandler[i + 20] = NULL;
    }

    strcpy(requestHandler, request.c_str());
    strcpy(reqClass, strtok(requestHandler, ":\0"));
    strcpy(reqVar, strtok(requestHandler, "\0"));

    //code to select between different functions for setting. switch statement.
    //there will be a series of private DataHandler functions
    //that send data to each other class.
    //Each will return a confirmation of success or failure, placed in ansHandler.


    return ansHandler;

}

