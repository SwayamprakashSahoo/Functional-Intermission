
//Program to calculate sum, maximum or minimum as per the user's choice
//uses call by value method
//including library 
#include<iostream>
using namespace std;

//pass by value
int sum(int p,int q)
{
	int k;
	k=p+q;     //adding the numbers
	return k;
}

//pass by value
int max(int p,int q)
{
  if(p>q)        //condition to check for maximum
    return p;
  else
    return q;
}

//pass by value
int min(int p,int q)
{
  if(p<q)       //condition to check for minimum
    return p;
  else
    return q;
}
// declaring main function
int main()
{
  //declaring variables
  int i,j,ch;
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
      case 1:cout<<"The sum is "<<sum(i,j)<<endl;
      break;

      case 2:cout<<"The maximum among the two is "<<max(i,j)<<endl;
      break;

      case 3:cout<<"The minimum among the two is "<<min(i,j)<<endl;
      break;

      default:cout<<"Invalid choice"<<endl;
      break;
    }
    cout<<"Do you want to continue?"<<endl;
    cin>>a;
  }
  return 0;
}
