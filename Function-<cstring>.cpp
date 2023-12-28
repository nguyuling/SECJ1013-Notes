#include<iostream>
#include<cstring> // need to include <cstring>
#include<cstdlib> // for 
#include<conio.h>
using namespace std;
int main(){
    const int size = 20;
    // 1. strlen; string length
    char str1[7] = "yuling";
    cout << strlen(str1) << "\n\n"; //6

    // 2. strcat; string concatenate
    char str2[4] = "yu ";
    char str3[5] = "ling";
    cout << strcat(str2, str3) << "\n\n"; //yu ling

    // 3. strcpy; string copy
    char str5[8] = "yu ling";
    char str6[7] = "yuling";
    cout << strcpy(str5, str6) << "\n\n"; //yuling

    // 4. strstr; string string
    char str7[size] = "yuling";
    char str8[size] = "l";
    cout << strstr(str7, str8) << "\n\n"; //ling

    // 5. strcmp; string compare
    char str9[size] = "y";
    char str10[size] = "ling";
    cout << strcmp(str9, str10) << "\n\n"; //1

    // 6. atoi; ASCII to integer
    char str11[size] = "710710.710";
    cout << atoi(str11) << "\n\n"; //710710

    // 7. atol; ASCII to long
    char str12[size] = "710710.710";
    cout << atol(str12) << "\n\n"; //710710
    
    // 8. atoll; ASCII to long long
    char str13[size] = "710710710710710.710";
    cout << atoll(str13) << "\n\n"; //710710710710710

    // 9. atof; ASCII to float
    char str14[size] = "710710710710710.710";
    cout << atof(str14) << "\n\n"; //7.10711e+14
    
    getch();
    return 0;
}
