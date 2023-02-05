#include <Module2.2.hpp>

double ownSin(const double &num) {
    const double eps = 0.0001;
    int i{1};
    double result = num;
    double acc = 1;
    double fact = 1;
    double pow = num;
    while (fabs(acc) > eps) {
        result += acc;
        fact *= ((2 * i) * (2 * i + 1));
        pow *= -1 * num * num;
        acc = pow / fact;
        // std::cout << i << " " << acc << '\n';
        i++;
    }
    return result;
}
double ownCos(const double &num) {
    const int prec = 0.001;
    int p = 0;
    double temp = 1.0;
    double result = 1.0;
    while(fabs(temp/result) > prec) {
        p++;
        temp = (-temp * num * num) / ((2 * p - 1) * (2 * p));
        result += temp;
    }
    return result;

}
double ownExp(const double &num) {
    const double eps = 0.00000001;
    int i{1};
    double result = num,s;
    while (fabs(result) > eps) {
        s = 1 + result;
        i++;
        result *= num / i;
    }

    return result;
}
double ownTan(const double &num) {
    return ownSin(num) / ownCos(num);
}
double ownSqrt(const int &num) {
    if (num < 0) {
        std::cout << "Negative numbers do not have real square roots." << std::endl;
        return NAN;
    }
    const double eps = 0.001;
    double x0 = 1;
    double x1 = 0.5 * (x0 + num / x0);
    while(fabs(x1-x0) > eps) {
        x0 = x1;
        x1 = 0.5 * (x0 + num / x0);
    }

    return x1;
}
long long factorial(int num) {
    if(num == 0) return 0;
    if(num == 1) return 1;

    else return num * factorial(num-1);
}
double ownCtan(const double &num) {
    return 1. / ownTan(num);
}