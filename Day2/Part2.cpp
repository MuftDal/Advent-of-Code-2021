using namespace std;

int main()
{
    fstream fin;
    string str;
    int x, fwd = 0, depth = 0, aim = 0;
    fin.open("file.txt");
    while(!fin.eof())
    {
        fin>>str>>x;
        if(str == "forward")
        {
            fwd += x;
            depth += x*aim;
        }    
        else if(str == "down")
            aim += x;
        else 
            aim -= x;
    }
    cout<<fwd*depth;
    
    
    return 0;
}
