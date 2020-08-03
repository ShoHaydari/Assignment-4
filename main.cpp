#include "RationalNumber.hpp"
#include <iostream>
using namespace std;

int main(){
    
    RationalNumber a(7,3);
    RationalNumber b(1,3);
    RationalNumber c;
    
    c=a+b;
    a.returnRational();
    cout<<" + ";
    b.returnRational();
    cout<<" = ";
    c.returnRational();
    cout<<endl;
    
    c=a-b;
    a.returnRational();
    cout<<" - ";
    b.returnRational();
    cout<<" = ";
    c.returnRational();
    cout<<endl;
    
    c=a*b;
    a.returnRational();
    cout<<" * ";
    b.returnRational();
    cout<<" = ";
    c.returnRational();
    cout<<endl;
    
    c=a/b;
    a.returnRational();
    cout<<" / ";
    b.returnRational();
    cout<<" = ";
    c.returnRational();
    cout<<endl;
    cout<<endl;
    
    a.returnRational();
    cout<<" > ";
    b.returnRational();
    cout<<( (a>b) ? " is true" : " is false");
    cout<<endl;
    
    a.returnRational();
       cout<<" < ";
       b.returnRational();
       cout<<( (a<b) ? " is true" : " is false");
    cout<<endl;
    a.returnRational();
       cout<<" >= ";
       b.returnRational();
       cout<<( (a>=b) ? " is true" : " is false");
    cout<<endl;
    
    a.returnRational();
       cout<<" <= ";
       b.returnRational();
       cout<<( (a<=b) ? " is true" : " is false");
    cout<<endl;
    
    a.returnRational();
       cout<<" == ";
       b.returnRational();
       cout<<( (a==b) ? " is true" : " is false");
    cout<<endl;
    
    a.returnRational();
       cout<<" != ";
       b.returnRational();
       cout<<( (a!=b) ? " is true" : " is false");
    cout<<endl;
}
