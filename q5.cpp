#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int i,j;
    int arr[3][3];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
           cout<<"enter the element";
           cin>>arr[i][j];
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
          cout<<left<<setw(5)<<arr[i][3-j-1];//180 degree rotation 
        }
        cout<<endl;
    }
    return 0;
}