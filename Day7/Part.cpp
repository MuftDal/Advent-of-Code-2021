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
    
    sort(crabs.begin(),crabs.end());
    int s = crabs.size();
    //copy(crabs.begin(), crabs.end(),ostream_iterator<int>(cout, " "));
    
    int median = (crabs[s/2 - 1] + crabs[s/2])/2;
    int sum = 0;
    for(int i = 0; i<crabs.size(); i++)
    {
        sum += abs(crabs[i] - median);
    }
    cout<<sum;

    return 0;
}
