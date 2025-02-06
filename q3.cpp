#include<iostream>
using namespace std;

int main()
{
    string name;
    string newstr ="";
    int flag=0;
    cout<<"Enter a string: ";
    cin>>name;
    int length = name.length();

    for(int i=0;i<length;i++)
    {
        if(name[i]!=32)
        {
            newstr += tolower(name[i]);
        }
    }
    for(int i=0;i<length;i++)
    {
        if(newstr[i]!=newstr[length - i - 1])
        {
            flag==1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"String is not palindrome!!";
    }
    else
    {
        cout<<"String is palindrome!!";
    }
    

    return 0;
}
