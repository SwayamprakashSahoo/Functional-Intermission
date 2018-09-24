//Program to calculate sum using call by value method
//including library
#include<iostream>
using namespace std;

//call by value function
int sum(int i,int j)
{
  int k;
  k=i+j;//adding
  return k;
} 
//declaring main function
int main()
{
  //declaring variables
  int p, q;
  //ask user
  cout<<"Enter the value of p:"<<endl;
  cin>>p;
  cout<<"Enter the value of q:"<<endl;
  cin>>q;
  cout<<"The sum is "<<sum(p,q)<<endl;
  return 0;
}
