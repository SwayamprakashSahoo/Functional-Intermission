//Program to find maximum of two numbers using call by reference method
//including library
#include<iostream>
using namespace std;

//declaring call by reference
void max(int p,int q,int &k)
{
  if(p>q)   //condition to find maximum between two numbers
    k=p;
  else
    k=q;
}
//declaring main function
int main()
{
  //declaring variables
  int i,j,x;
  //asks user for input
  cout<<"Enter the value of i:"<<endl;
  cin>>i;
  cout<<"Enter the value of j:"<<endl;
  cin>>j;
  //using call by reference
  max(i,j,x);
  cout<<"The maximum among the two is: "<<x<<endl;
  return 0;
}
