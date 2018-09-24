//Program to find the minimum of two values using call by value
//including library
#include<iostream>
using namespace std;

//declaring call by value
int min(int p,int q)
{
  if(p<q)    //condition to check the minimum betweem two numbers
    return p;
  else
    return q;
}
//declaring main function
int main()
{
  //declaring variables
  int i,j;
  //user input
  cout<<"Enter the value of i:"<<endl;
  cin>>i;
  cout<<"Enter the value of j:"<<endl;
  cin>>j;
  cout<<"The minimum number among the two is: "<<min(i,j)<<endl;
  return 0;
}
