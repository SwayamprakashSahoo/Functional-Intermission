//Program to calculate the sales tax and total amount due for the user
//including library
#include<iostream>
using namespace std;

//function that obtains user data and returns the corresponding value
void input(string name,float& value)
{ 
  cout<<"Please input "<<name<<endl;
  cin>>value;
}

//function that calculates the sales tax and total amount due
void calculate(float unitCst,float units,float taxRt,float &salesTx,float &totDue)
{
  salesTx=(unitCst*units*taxRt)/100;   //calculates sales tax
  totDue=salesTx+(unitCst*units);    //calculates total amount
}


//function that displays the input, sales tax and the total amount due
void display(float unitCst,float units,float taxRt,float salesTx,float totDue)
{
  //calling function 'calculate' to calculate the sales tax and total amount due
  calculate(unitCst,units,taxRt,salesTx,totDue);   
  cout<<"The net bill includes:"<<endl;
  cout<<"Unit cost: "<<unitCst<<endl;
  cout<<"No. of units: "<<units<<endl;
  cout<<"Tax rate: "<<taxRt<<endl;
  cout<<"Sales tax: "<<salesTx<<endl;
  cout<<"Total amount due: "<<totDue<<endl;
}

int main()
{
  //declaring required variables
  float unitCost,unitsPurch,taxRate;
  float salesTax,totalDue;
  //input by user 
  input("Cost per unit:",unitCost);         
  input("No. of units purchased:",unitsPurch);
  input("Tax rate:",taxRate);
  //calling function 'display' to display the results in a systematic manner
  display(unitCost,unitsPurch,taxRate,salesTax,totalDue);          
  return 0;
}


