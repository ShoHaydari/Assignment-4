#include <iostream>

using namespace std;

#include "RationalNumber.hpp"

RationalNumber::RationalNumber(int num, int den){
    numerator=num;
    denominator=den;
    reduce();
}

RationalNumber RationalNumber::operator+(const RationalNumber& r){
    return RationalNumber (numerator*r.denominator+denominator*r.numerator, denominator*r.denominator);
}

RationalNumber RationalNumber::operator-(const RationalNumber& r){
    return RationalNumber (numerator*r.denominator-denominator*r.numerator, denominator*r.denominator);
}

RationalNumber RationalNumber::operator*(const RationalNumber& r){
    return RationalNumber (numerator*r.numerator, denominator*r.denominator);
}

RationalNumber RationalNumber::operator/(const RationalNumber& r){
   
    if (r.numerator!=0) {
        return RationalNumber (numerator*r.denominator, denominator*r.numerator);
    }
    
    else {
        throw invalid_argument("Cannot divide by 0");
    }
    
}

void RationalNumber:: returnRational() const{
    
    cout<<to_string(numerator)<<"/"<<to_string(denominator);
}

void RationalNumber::reduce(){
    
    int max;
    int GCD=0;
    
    max=std::max(numerator,denominator);
    
    for (int i=2; i<max; i++) {
        if (numerator%i==0 && denominator%i==0) {
            GCD=i;
        }
    }
    if (GCD!=0) {
        numerator=numerator/GCD;
        denominator=denominator/GCD;
        
    }
}

bool RationalNumber:: operator<(const RationalNumber& r){
    if(static_cast<double>(numerator)/denominator<static_cast<double>(r.numerator)/r.denominator)
    {
        return true;
    }
    else{
        return false;
    }
}

bool RationalNumber:: operator>(const RationalNumber& r){
    if( static_cast<double>(numerator)/denominator > static_cast<double>(r.numerator)/r.denominator)
    {
        return true;
    }
    else{
        return false;
    }
}


bool RationalNumber:: operator==(const RationalNumber& r){
    if(static_cast<double>(numerator)/denominator == static_cast<double>(r.numerator)/r.denominator)
    {
        return true;
    }
    else{
        return false;
    }
}

bool RationalNumber:: operator>=(const RationalNumber& r){
    if(static_cast<double>(numerator)/denominator >= static_cast<double>(r.numerator)/r.denominator)
    {
        return true;
    }
    else{
        return false;
    }
}

bool RationalNumber:: operator<=(const RationalNumber& r){
    if(static_cast<double>(numerator)/denominator <= static_cast<double>(r.numerator)/r.denominator)
    {
        return true;
    }
    else{
        return false;
    }
}

bool RationalNumber:: operator!=(const RationalNumber& r){
    if(static_cast<double>(numerator)/denominator != static_cast<double>(r.numerator)/r.denominator)
    {
        return true;
    }
    else{
        return false;
    }
}

