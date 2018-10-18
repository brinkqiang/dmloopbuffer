
#include "dmloopbuffer.h"
#include "dmos.h"
#include "dmformat.h"
#include <iostream>

int main( int argc, char* argv[] ) {
    CDMLoopBuffer oBuffer;
    oBuffer.Init(1024 * 512);
    
    std::string strData = "hello world";

    while (!oBuffer.PushBack(strData.c_str(), strData.size()))
    {
        SleepMs(1);
    }
    while (!oBuffer.PushBack(strData.c_str(), strData.size()))
    {
        SleepMs(1);
    }
    std::string strData2;
    strData2.resize(strData.size());

    while (!oBuffer.PopFront(strData2.data(), strData2.size()))
    {
        SleepMs(1);
    }
    return 0;
}
