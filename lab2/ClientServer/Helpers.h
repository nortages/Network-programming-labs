#pragma once

#include <vector>
#include <iterator>
#include <string>
#include <ws2tcpip.h>

using namespace std;

struct SocketData
{
    SOCKET socket;
    string ip;
    string port;
};

template<class T>
ostream& operator<<(ostream& os, const vector<T>& v);

void CorrectClosing(SOCKET socket);
void getIP(sockaddr socketInfo, char* ip);