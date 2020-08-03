

#ifndef RationalNumber_hpp
#define RationalNumber_hpp

class RationalNumber{
    
public:
    RationalNumber(int num=0, int den=1);
    
     void returnRational() const;
    
    
    RationalNumber operator+(const RationalNumber&);
    
    RationalNumber operator-(const RationalNumber&);
    
    RationalNumber operator*(const RationalNumber&);
    
    RationalNumber operator/(const RationalNumber&);
    
    bool operator<(const RationalNumber&);
    
    bool operator>(const RationalNumber&);
    
    bool operator<=(const RationalNumber&);
    
    bool operator>=(const RationalNumber&);
    
    bool operator==(const RationalNumber&);
    
    bool operator!=(const RationalNumber&);
    
   
    
private:
    int numerator;
    int denominator;
    void reduce();
    
};

#endif /* RationalNumber_hpp */
