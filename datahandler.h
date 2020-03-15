#ifndef DATAHANDLER_H
#define DATAHANDLER_H
#include <string>

using namespace std;


class DataHandler
{
public:
    DataHandler();
    string getData(string request);
    string setData(string request);
};

#endif // DATAHANDLER_H
