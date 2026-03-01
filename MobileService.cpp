#include <iostream>
#include <string>
using namespace std;
int main()

{
    const double Aprice = 39.99;
    const double Bprice = 59.99;
    const double Cprice = 79.99;
    const int AGb = 2;
    const int BGb = 8;

    string name;
    char plan;
    int gigs;
    int extragigs = 0;
    double cost = 0.00;
    double savingsB;
    double savingsC;

    

    cout<<"To calculate your monthly bill please enter your name."<<endl;
    cin>> name;

    cout<<"What plan are you subscribed to (A, B, or C)?"<<endl;
    cin>>plan;

    cout<<"How many gigabytes of data did you use this month?"<<endl;
    cin>>gigs;

    if (plan == 'A')
    {
        cost = Aprice;
       if (gigs > 4.5 && gigs < 7 )
       {
        extragigs = gigs - AGb;
        cost += Aprice + (extragigs*8);
        savingsB = cost - Bprice;

        cout<<"Your monthly bill comes out to $"<<cost<<"."<<endl;
        cout<<"If you switch to Plan B, you would save $" <<savingsB<<" every month."<<endl;
       }
       else if (gigs > 7)
       {
        extragigs = gigs - 2;
        cost = Aprice + (extragigs*8);
        savingsB = cost - Bprice;
        savingsC = cost - Aprice;
        cout<<"Your monthly bill comes out to $"<<cost<<"."<<endl;
        cout<<"If you switch to Plan B, you would save $" <<savingsB<<" every month."<<endl;
        cout<<"Or if you switch to Plan C, you would save $" <<savingsC<<" every month."<<endl;
       }
       else
       {
        extragigs = gigs - AGb;
        cost = Aprice + extragigs;
        cout<<"Your monthly bill comes out to $"<<cost<<"."<<endl;
        }
    }
    else if (plan == 'B')
    {
        if (gigs > 10.5)
        {
            extragigs = gigs - BGb;
            cost += Bprice + (extragigs*8);
            savingsC = cost - Cprice;
            cout<<" Your monthly bill is $" <<cost<<"."<<endl;
            cout<<"If you switch to Plan C, you would save $" <<savingsC<<" every month."<<endl;
        }
        else
        {
            extragigs = gigs - BGb;
            cost = Bprice + extragigs;
            cout<<"Your monthly bill comes out to $"<<cost<<"."<<endl;
        }
    }
    else
    {
        cost = Cprice;
        cout<<" Your monthly bill is $" <<cost<<"."<<endl;
    }

    
    return 0;
}