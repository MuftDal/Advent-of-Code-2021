#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fin;
    int arr[2000],i = 0,count = 0;
    fin.open("file.txt");
    while(fin)
    {
        fin>>arr[i];
        i++;
    }
    for(i=0;i<1999;i++)
    {
        if(arr[i]<arr[i+1])
            count++;
    }
    cout<<count;
    return 0;
}
