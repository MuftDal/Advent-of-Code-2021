#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream fin;
    fin.open("file.txt");
    vector<int> crabs;
    string crab;
    while (getline(fin, crab, ','))
    {
        crabs.push_back(stoi(crab));
    }
    
    int s = crabs.size();
    
    int mean = round((float)accumulate(crabs.begin(), crabs.end(), 0) / (float)s);
    
    int sum = 0;
    for(int i = 0; i<crabs.size(); i++)
    {
        int diff = abs(crabs[i] - mean + 1);
        sum += diff*(diff+1)/2;
    }
    cout<<sum;

    return 0;
}
