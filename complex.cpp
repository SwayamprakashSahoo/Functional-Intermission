/*Program to find the sum of even numbers, sum of odd numbers, sum of squares of even numbers and sum of squares of odd numbers 
between two numbers  as input by the user*/
//including library
#include<iostream>
using namespace std;

// declaring call by value #function 1
int sumEvenNumbers(int firstNum,int secondNum)
{
  int sum=0;
  for(int i=firstNum;i<=secondNum;i++)    //loop to add even numbers between first and second Num
  {
    if(i%2==0)    //checks even numbers
      sum=sum+i;
  }
  return sum;
}

//declaring call by value #function 2
int sumOddNumbers(int firstNum,int secondNum)
{
  int sum=0;
  for(int j=firstNum;j<=secondNum;j++)
  {
    if(j%2!=0)    //condition to check if the number is odd
      sum=sum+j;
  }
  return sum;
}

//declaring call by value #function 3
int sumSquareOddNumbers(int firstNum,int secondNum)
{
  int sum=0;
  int k=firstNum;
  while(k<=secondNum)
  {
    if(k%2!=0)             //condition to check if the number is odd
      sum=sum+(k*k);
    k++;
  }
  return sum;
}

//declaring call by value #function 4
int sumSquareEvenNumbers(int firstNum,int secondNum)
{
  int sum=0;
  int l=firstNum;
  while(l<=secondNum)
  {
    if(l%2==0)
      sum=sum+(l*l);
    l++;
  }
  return sum;
}

//declaring main function
int main()                  //driver function
{
  //declaring appropriate variables
  int firstNum,secondNum;
  int sumEven,sumOdd,sumSquareEven,sumSquareOdd;
  //assigning values to respective integers
  cout<<"Enter the value of first integer"<<endl;
  cin>>firstNum;
  cout<<"Enter the value of second integer"<<endl;
  cin>>secondNum;
  //using call by value functions
  sumEven=sumEvenNumbers(firstNum,secondNum);
  sumOdd=sumOddNumbers(firstNum,secondNum);
  sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum);
  sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum);
  //displaying output
  cout<<"Result:"<<endl;
  cout<<"The sum of even numbers is: "<<sumEven<<endl;
  cout<<"The sum of odd numbers is: "<<sumOdd<<endl;
  cout<<"The sum of squares of even numbers is: "<<sumSquareEven<<endl;
  cout<<"The sum of squares of odd numbers is: "<<sumSquareOdd<<endl;
  return 0;
}
