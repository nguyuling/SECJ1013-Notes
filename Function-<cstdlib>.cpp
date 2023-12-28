#include<iostream>
#include<cstdlib> // need to include <cstdlib>
#include<conio.h>
using namespace std;
int main(){
    // 1. rand; random number
    int num1 = rand();
    cout << num1;

    // 2. srand; seed random number
    srand(static_cast<unsigned int>(time(nullptr)));
    cout << rand();

    getch();
    return 0;
}
