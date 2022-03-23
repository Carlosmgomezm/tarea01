#include <iostream>
#include <cmath>
#include <stdio.h>
int main(void){
    double result = 0;
    int NMAX = 100;
    int n = 0;
    for(n = 1; n <= NMAX ; n = n+2){
    if(n>=10 & n<=100)
        if(n%2==1)
        result = result + 1.0/n;
    }
    std::cout << "\t" << result << "\n";
    return 0;
}
