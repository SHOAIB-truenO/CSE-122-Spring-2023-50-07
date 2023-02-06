//Problem Number:Codeforces 339A.
//Problem Name:Helpful Maths


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,r;
    for(i=0;i<str.size();i+=2)
    {
        for(r=0;r<str.size()-1;r+=2)
        {
            if(str[r]>str[r+2])
            {
                swap(str[r],str[r+2]);
            }
        }
    }
    cout<<str<<endl;
    return 0;
}

