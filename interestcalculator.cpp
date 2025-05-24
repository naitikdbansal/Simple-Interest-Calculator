#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double P;
double R;
double T;
double SimpleInterest;

cout<<"Enter the Principle Amount (in Rs/-) : ";
cin>>P;
cout<<"Enter the Current Rate of Interest (in Rupees per year) : ";
cin>>R;
cout<<"Enter the Total Time (in Years) : ";
cin>>T;

SimpleInterest=(P*R*T) / 100;
cout<<setprecision(15)<<"Your Simple interest for amount "<<P<<" Rs/- "<<"Over Time period of "<<T<<" Years "<<" at rate of "<<R<<" Rs per year, Sums out to be a total of"<<endl<<SimpleInterest<<" Rs/-"<<endl;
return 0;
}