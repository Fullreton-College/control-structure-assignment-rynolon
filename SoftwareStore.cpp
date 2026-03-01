#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int quantity;
  int price;
  double finalprice;
  price = 199;

  cout<<"How many packages would you like to purchase? Each package is $199 and we offer discounts for bulk purchases!"<<endl;
  cin>> quantity;

  while (quantity <= 0)
  {
    cout<<"Please enter a value greater than 0."<<endl;
  }
  

  if (quantity < 10)
  {
    finalprice = (quantity*price);    
  }
  else if (quantity >=10 && quantity <= 19)
  {
    finalprice = (quantity*price)*.8;
  }
  else if (quantity >=20 && quantity <= 49)
  {
    finalprice = (quantity*price)*.7;
  }
  else if (quantity >= 50 && quantity <= 99)
  {
    finalprice = (quantity*price)*.6;
  }
  else
  {
    finalprice = (quantity*price)*.5;
  }

  cout<<"Your total is $" << finalprice <<"."<<endl; 

  return 0;
}
