#include <iostream>
using namespace std;
int main(){
    int num,flag=0;
    cout<<"enter the number";
    cin>>num;
    for (int  i = 2; i < num/2 ; i++)
    {
        if (num%i==0)
        {
            flag=1;
        }
        
    }
    if (flag>0)
    {
        cout<<"it is not a prime number \n";
        cout<<"its factors are: ";
        for (int i = 2; i < num/2 ; i++)
        {
            if (num%i==0)
            {
                cout<<i<<"\n";
            }
            
        }
        
    }
    else{
        cout<<"it is a prime number";
        
        
        
    }
    
    return 0;
}