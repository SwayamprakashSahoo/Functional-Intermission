//Program to convert lowercase character to uppercase character and vice versa
//including library
#include<iostream>
using namespace std;

// declaring call by value function1
char toUpper(char p)
{
  return p-32;             //returns uppercase character as per ASCII
}

// declaring call by value function2
char toLower(char p)
{
  return p+32;             //returns lowercase character as per ASCII
}

//declaring main function
int main()
{
  //declaring required variables
  char i;
  //assigning values to variables
  cout<<"Enter a character: "<<endl;
  cin>>i;
  if(i>='A' && i<='Z')    //checks if 'i' is uppercase
    cout<<toLower(i)<<endl;

  else if(i>='a' && i<='z')    //checks if 'i' is lowercase
    cout<<toUpper(i)<<endl;
     
  else
    cout<<"Not an alphabet"<<endl;
  return 0;
}
