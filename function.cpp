#include<iostream>
using namespace std;

void sum(int fn,int ln)
{
    cout<<"the sum of given number is"<<(fn+ln)<<endl;
}
int main()
{
    int a,b;
    cout<<"please enter the number"<<endl;
    cin>>a;
    cin>>b;
    sum(a,b);
    return 0;
}
