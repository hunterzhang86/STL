#include <iostream>
#include <vector>
using namespace std;

bool Comp(const int &a,const int &b)
{
    if(a!=b)    return a>b;
    else return a>b;
}

int main()
{
    vector<int> v(3);
    v[0]=2;
    v[1]=7;
    v[2]=9;
    v.insert(v.begin(),8);
    v.insert(v.begin()+2,1);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}


