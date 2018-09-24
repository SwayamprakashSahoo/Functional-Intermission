//Program to find sum using call by reference
//including library
#include<iostream>
using namespace std;
 
//declaring call by reference
void sum(int p, int q, int &k)
{
  k= p+q;
}
//declaring the main function
int main()
{
  //variable declared 
  int i,j,x=0;
  //input by user
  cout<<"Enter the value of a:"<<endl;
  cin>>i;
  cout<<"Enter the value of b:"<<endl;
  cin>>j;
  sum(i,j,x);
  cout<<"The sum is "<<x<<endl;
  return 0;
}
