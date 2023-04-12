#include<bits/stdc++.h>
using namespace std;

int main()
{
//Stack _____________Builtin Function use korbo
    stack<int>st;
//push
    st.push(10);
    st.push(20);
    st.push(30);
//pop
//st.pop();//ata 30 delete kore dibe
//st.pop();//ata 20 delete kore dibe
//st.pop();//ata 10 delete kore dibe
cout<<"Stack Size ::"<<st.size()<<"\n";


//top______top a je value ace oi value ta print kore dea
cout<<st.top()<<"\n";
st.pop();
cout<<st.top()<<"\n";
st.pop();
cout<<st.top()<<"\n";
st.pop();
cout<<"Stack Size ::"<<st.size()<<"\n";

    return 0;
}


