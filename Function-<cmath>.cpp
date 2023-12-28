#include<iostream>
#include<cmath> // need to include <cmath>
#include<conio.h>
using namespace std;
int main(){
    // 1. sin; sine
    double rad1 = 1.5708; //90 deg
    cout << sin(rad1) << "\n\n"; //1

    // 2. cos; cosine
    double rad2 = 3.14159; //180 deg
    cout << cos(rad2) << "\n\n"; //-1

    // 3. tan; tangent
    double rad3 = 0.0; //0 deg
    cout << tan(rad3) << "\n\n"; //0

    // 4. log; ln, natural logarithm
    double x1 = 2.71828;
    cout << log(x1) << "\n\n"; //0.999999
    
    // 5. log10; log10, logarithm base 10
    double x2 = 10; 
    cout << log10(x2) << "\n\n"; //1

    // 6. exp; exponential
    double x3 = 1;
    cout << exp(x3) << "\n\n"; // 2.71828

    // 8. pow; power to
    double x4 = 2;
    cout << pow(x2, x4) << "\n\n"; //100

    // 9. sqrt; square root
    double x5 = 100;
    cout << sqrt(x5) << "\n\n"; //10

    // 10. abs; integer absolute value
    int x6 = -7.0;
    cout << abs(x6) << "\n\n"; //7
    
    // 11. fabs; floating point absolute value
    double x7 = -7.710710;
    cout << fabs(x7) << "\n\n"; //7.710710

    // 12. ceil; ceiling value
    double x8 = 7.10;
    cout << ceil(x8) << "\n\n"; //8

    // 13. floor; floor value
    double x9 = 7.10;
    cout << floor(x9) << "\n\n"; //7

    getch();
    return 0;
}
