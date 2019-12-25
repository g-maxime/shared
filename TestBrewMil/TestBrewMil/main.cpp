//
//  main.cpp
//  TestBrewMil
//

#include <iostream>
#include "MediaInfoDLL_Static.h"

using namespace MediaInfoDLL;
using namespace std;
int main(int argc, const char * argv[]) {
    MediaInfo MI;

    MI.Open("/Users/jerome/Downloads/1sec_10bit.mkv");

    cout << MI.Get(Stream_General, 0, "FileSize") << endl;

    return 0;
}
