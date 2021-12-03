#include <bits/stdc++.h>

using namespace std;

int most_common(string *str, int x)
{
    int z = 0,o = 0;
    for(int i = 0;i<1000;i++)
    {
        if(str[i].at(x) == '0')
            z++;
        else
            o++;
    }
    if(z>o)
        return 0;
    else
        return 1;
}

int ones_comp(int a, int size)
{
    return ((1<<size)-1)^a;
}

int main()
{
    fstream fin;
    string str[1000];
    int i = 0;
    fin.open("file.txt");
    
    while(!fin.eof())
    {
        fin>>str[i];
        i++;
    }
    int len = str[0].length();
    int temp = len-1;
    int gamma = 0, epsilon = 0;
    
    for(i=0;i<len;i++)
    {
        gamma = gamma + most_common(str,i)*pow(2,temp--);
    }
    epsilon = ones_comp(gamma,len);
    cout<<gamma*epsilon;

    return 0;
}
