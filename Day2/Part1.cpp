#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    fstream fin;
    string str;
    int x, fwd = 0, depth = 0;
    fin.open("file.txt");
    while(!fin.eof())
    {
        fin>>str>>x;
        if(str == "forward")
            fwd += x;
        else if(str == "down")
            depth += x;
        else 
            depth -= x;
    }
    cout<<fwd*depth;
    
    
    return 0;
}
