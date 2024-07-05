#include<bits/stdc++.h>
using namespace std;
class myStack//This type known as camel case
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);//O(1)
    }
    void pop()
    {
        v.pop_back();//O(1)
    }
    int top()
    {
        return v.back();//O(1)
    }
    int size()
    {
        return v.size();//O(1)
    }
    bool empty()//O(1)
    {
        if(v.size()==0) return true;
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
    // st.push(10);
    // st.push(20);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // if(st.empty()== true)
    // {
    //     cout<<"Empty"<<endl;
    // }
    // if(st.empty()== false)
    // {
    //     cout<<st.top()<<endl;
    // }
    //cout<<st.top()<<endl;//it returns a gurvage value;
    //cz, it is empty; which is known a segmentation fault or runtime error

    return 0;
}