#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string str;
    int int_str,arr[100];
    
    cout<<"Enter the string\n";
    cin>>str;
    
    //Conversion of String into integer
    
    stringstream convert(str);
    convert >> int_str;
    cout<<"The integer conversion of the number\n"<<int_str;
    
    //Conersion of string to an array
    
    for(int i =str.length(); i>0; i--)
    {
        int n = int_str % 10;
        arr[i] = n;
        int_str = int_str / 10;
    }
    //Display
    
    for(int j=0; j<str.length(); j++)
    {
        cout<<"\nThe elements of array:"<<arr[j];    
    }
    
    return 0;    
}
