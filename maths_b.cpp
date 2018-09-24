//Program to calculate sum, maximum or minimum as per the user's choice
//including library
#include<iostream>
using namespace std;

//pass by reference
void sum(int p,int q,int &add)
{
  add=p+q;
}

//pass by reference
void max(int p,int q,int &high)
{
  if(p>q)        //condition to check for maximum between two numbers
    high=p;
  else
    high=q;
}

//pass by reference
void min(int p,int q,int &low)
{
  if(p<q)       //condition to check for minimum between two numbers
    low=p;
  else
    low=q;
}
//declaring main function
int main()
{
  //declaring variables
  int i,j,retsum,retmax,retmin,ch;
  char a='y';
  while(a=='y')
  {
    //user input
    cout<<"Enter the value of i:"<<endl;
    cin>>i;
    cout<<"Enter the value of j:"<<endl;
    cin>>j;
    cout<<"Please choose the function you need: "<<endl;
    cout<<"1.Sum"<<endl<<"2.Maximum"<<endl<<"3.Minimum"<<endl;
    cin>>ch;
    switch(ch)
    {
      case 1:sum(i,j,retsum);
        cout<<"The sum is "<<retsum<<endl;
      break;

      case 2:max(i,j,retmax);
        cout<<"The maximum among the two numbers is "<<retmax<<endl;
      break;
			  
      case 3:min(i,j,retmin);
        cout<<"The minimum among the two numbers is "<<retmin<<endl;
      break;
			  
      default:cout<<"Invalid choice"<<endl;
      break;
    }
    cout<<"Do you want to continue?"<<endl;
    cin>>a;
  }
  return 0;
}

