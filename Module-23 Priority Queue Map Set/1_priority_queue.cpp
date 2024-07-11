/*
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    //it works like max heap
    priority_queue<int> pq;
    while(true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq.push(x);//O(logN)
        }
        else if(c==1)
        {
            pq.pop();//O(logN)
        }
        else if(c==2)
        {
            cout<<pq.top()<<endl;//O(1)
        }
        else
        {
            break;
        }
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    //it works like max heap
    priority_queue<int, vector<int>, greater<int>> pq;//it is not function; rather it is a class; that's why we do not use first bracket here
    while(true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq.push(x);//O(logN)
        }
        else if(c==1)
        {
            pq.pop();//O(logN)
        }
        else if(c==2)
        {
            cout<<pq.top()<<endl;//O(1)
        }
        else
        {
            break;
        }
    }
    return 0;
}