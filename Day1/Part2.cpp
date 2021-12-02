#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fin;
    int arr[2000],i = 0,sum1 = 0,sum2 = 0,count = 0;
    fin.open("file.txt");
    while(fin)
    {
        fin>>arr[i];
        i++;
    }
    for(i=0;i<1997;i++)
    {
        sum1 = arr[i] + arr[i+1] + arr[i+2];
        sum2 = arr[i+1] + arr[i+2] + arr[i+3];
        if(sum2 > sum1)
            count++;
    }
    cout<<count;
    return 0;
}
