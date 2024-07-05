#include<bits/stdc++.h>
using namespace std;
class myStack//This type known as camel case
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);//O(1)
    }
    void pop()
    {
        l.pop_back();//O(1)
    }
    int top()
    {
        return l.back();//O(1)
    }
    int size()
    {
        return l.size();//O(1)
        //for size loop is not needed
        //cz, int list size is always tracked internally
    }
    bool empty()//O(1)
    {
        if(l.size()==0) return true;
        else return false;
    }
};
int main() 
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())//!st.empty() means false
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}