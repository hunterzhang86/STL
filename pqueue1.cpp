#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

struct myComp
{
    bool operator() (const int &a,const int &b)
    {
        return a<b;
    }
};

int main()
{
    priority_queue<int,vector<int>,myComp> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(8);
    while(pq.empty()!=true)
    {
        cout<<pq.top()<<' ';
        pq.pop();
    }
    cout<<endl;
    return 0;
}


