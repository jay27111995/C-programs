#include <iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,temp;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++)
    {
        temp=a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
    }
    return 0;
}
