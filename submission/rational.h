#pragma once

#include <numeric>
#include <cstdlib>
#include <iostream>

class Rational{
public:

    Rational() = default;

    Rational(int numerator, int denominator) : numerator_(numerator), denominator_(denominator){
        if(denominator_ == 0){
            std::abort();
        }
        if(denominator_ < 0){
            denominator_ = -denominator_;
            numerator_ = -numerator_;
            Reduction();
        }
        Reduction();
    }

    Rational(int numerator) : numerator_(numerator){}

    Rational(const Rational& r) : numerator_(r.numerator_), denominator_(r.denominator_){
        if(denominator_ == 0){
            std::abort();
        }
        if(denominator_ < 0){
            denominator_ = -denominator_;
            numerator_ = -numerator_;
            Reduction();
        }
        Reduction();
    }

    Rational Inv() const{
        return {denominator_, numerator_};
    }

    int GetNumerator() const{
        return numerator_;
    }

    int GetDenominator() const{
        return denominator_;
    }

    Rational operator-() const {
        return {-numerator_, denominator_};
    }

    Rational operator+() const {
        return *this;
    }

    Rational& operator=(const Rational& r){
        numerator_ = r.numerator_;
        denominator_ = r.denominator_;
        return *this;
    }

    Rational operator+(const Rational& r2) const {
        int a = numerator_ * r2.denominator_ + denominator_ * r2.numerator_;
        int b = denominator_ * r2.denominator_;
        Rational result = *this;
        result.numerator_ = a;
        result.denominator_ = b;
        result.Reduction();
        return result;
    }

    Rational operator-(const Rational& num) const {
        int a = numerator_ * num.denominator_ - denominator_ * num.numerator_;
        int b = denominator_ * num.denominator_;
        Rational result = *this;
        result.numerator_ = a;
        result.denominator_ = b;
        result.Reduction();
        return result;
    }

    Rational operator*(const Rational& num) const {
        int a = numerator_ * num.numerator_;
        int b = denominator_ * num.denominator_;
        Rational result = *this;
        result.numerator_ = a;
        result.denominator_ = b;
        result.Reduction();
        return result;
    }

    Rational operator/(const Rational& num) const {
        int a = numerator_ * num.denominator_;
        int b = denominator_ * num.numerator_;
        Rational result = *this;
        result.numerator_ = a;
        result.denominator_ = b;
        result.Reduction();
        return result;
    }

    Rational& operator+=(const Rational& second){
        int a = numerator_ * second.denominator_ + denominator_ * second.numerator_;
        int b = denominator_ * second.denominator_;
        numerator_ = a;
        denominator_ = b;
        Reduction();
        return *this;
    }

    Rational& operator-=(const Rational& second){
        int a = numerator_ * second.denominator_ - denominator_ * second.numerator_;
        int b = denominator_ * second.denominator_;
        numerator_ = a;
        denominator_ = b;
        Reduction();
        return *this;
    }

    Rational& operator*=(const Rational& second){
        int a = numerator_ * second.numerator_;
        int b = denominator_ * second.denominator_;
        numerator_ = a;
        denominator_ = b;
        Reduction();
        return *this;
    }

    Rational& operator/=(const Rational& second){
        int a = numerator_ * second.denominator_;
        int b = denominator_ * second.numerator_;
        numerator_ = a;
        denominator_ = b;
        Reduction();
        return *this;
    }

private:
    int numerator_ = 0;
    int denominator_ = 1;
    void Reduction();
    Rational Reduction(int num, int den);
    inline friend std::ostream& operator<<(std::ostream& os, const Rational& r);
    inline friend std::istream& operator>>(std::istream& os, Rational& r);
};

inline std::ostream& operator<<(std::ostream& os, const Rational& r){
    if(r.GetDenominator() == 1){
        os << r.GetNumerator();
        return os;
    }
    os << r.GetNumerator() << " / " << r.GetDenominator();
    return os;
}

inline std::istream& operator>>(std::istream& in, Rational& r){
    int num, den;
    char operation;
    if(!(in >> num)){
        return in;
    }
    if(!(in >> std::ws >> operation)){
        r.numerator_ = num;
        r.denominator_ = 1;
        in.clear();
        return in;
    }
    if (operation != '/') {
        r.numerator_ = num;
        r.denominator_ = 1;
        in.unget();
        return in;
    }
    if (!(in >> den) || (den == 0)) {
        in.setstate(std::ios::failbit);
        return in;
    }
    r = Rational(num, den);
    return in;
}

inline void Rational::Reduction() {
    if (denominator_ < 0) {
        numerator_ = -numerator_;
        denominator_ = -denominator_;
    }
    const int divisor = std::gcd(numerator_, denominator_);
    numerator_ /= divisor;
    denominator_ /= divisor;
}

inline auto operator<=>(const Rational& r1, const Rational& r2){
    return (r1.GetNumerator() * r2.GetDenominator()) <=> (r1.GetDenominator() * r2.GetNumerator());
}

inline auto operator==(const Rational& r1, const Rational& r2){
    return (r1.GetNumerator() * r2.GetDenominator()) == (r1.GetDenominator() * r2.GetNumerator());
}




