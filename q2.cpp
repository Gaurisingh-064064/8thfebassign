#include <iostream>
using namespace std;
int main(){
    int n,i,max;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for ( i = 0; i < n ; i++)
    {
        cout<<"enter the array element "<<i <<":";
        cin>>arr[i];
    }
    max=arr[0];
    int s=arr[0];
    for ( int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            s=max;
            max=arr[i];
        }
    }
    cout<<"the second max number is"<<s;
    //reverse the array
    for ( i = 0; i < n ; i++)
    {
        arr[i]=arr[n-i-1];
        cout<<"\n the reversed number is";
        cout<<arr[i];
        
    }
    
    
    
    return 0;
}