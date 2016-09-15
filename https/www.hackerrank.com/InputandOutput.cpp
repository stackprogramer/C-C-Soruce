#include <iostream>

using namespace std;


int main() {
    int a,b,c;
   
    while((a>1000 || a<1) || (b>1000 || b<1) ||(c>1000 || c<1))
    {    
    cout<<"Enter a,b,c";
    cin>>a>>b>>c;
    }
    cout<<a+b+c;
    
    return 0;
}
