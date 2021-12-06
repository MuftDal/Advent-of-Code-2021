#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream fin;
    fin.open("file.txt");
    
    vector<int> lfish;
    string n;
    
    while(getline(fin, n, ','))
    {
        lfish.push_back(stoi(n));
    }
    
    int size = lfish.size();
    
    for(int i = 0; i<80; i++)
    {
        for(int j = 0; j<size; j++)
        {
            if(lfish[j] == 0)
            {
                lfish[j] = 6;
                lfish.push_back(9);
                size += 1;
            }
            else
                lfish[j] -= 1;
        }
    }    
    
    cout<<lfish.size();
    return 0;
}
