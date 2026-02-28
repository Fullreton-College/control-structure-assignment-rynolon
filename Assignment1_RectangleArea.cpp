#include <iostream>

using namespace std;

int main()
{
	int area1;
    int length1;
    int width1;

    int area2;
    int length2;
    int width2;

    cout<<"What is the length of the first rectangle?"<<endl;
    cin>> length1;
    cout<<"What is the width of the first rectangle?"<<endl;
    cin>> width1;

    area1 = length1*width1;

    cout<<"The first rectangle has a width of " << width1<< " and a length of "<<length1<<" meaning it has an area of " << area1 <<"." << endl;
    
    cout<<"What is the length of the second rectangle?"<<endl;
    cin>> length2;
    cout<<"What is the width of the second rectangle?"<<endl;
    cin>> width2;

    area2 = length2*width2;

    cout<<"The second rectangle has a width of " << width2<< " and a length of "<<length2<<" meaning it has an area of " << area2 <<"." << endl;

    if (area1 > area2)
    {
        cout<<"The 1st rectangle has the greater area."<<endl;
    }
    else if (area2 > area1)
    {
        cout<<"The 2nd rectangle has the greater area."<<endl;
    }
    else
        cout<<"The rectangles have the same area."<<endl;
    


    return 0;
}

