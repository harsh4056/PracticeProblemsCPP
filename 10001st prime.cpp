#include <iostream>
#include <cstring>
#include <limits>
#include <math.h>
using namespace std ;
 int isPrime(long n);
 int main(){
 	
 	 int count = 0;
        int prime = 0;
        while (prime <= 10001) {
            if (isPrime(count) == 1) {
                prime++;
                if (prime == 10001) {
                    cout<<count;
                }
            }
            count++;
        }
 	
 	
 	
 }
 int isPrime(long n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    if (n < 9) return 1;
    if (n % 3 == 0) return 0;
    long max = (long)(sqrt(n))+ 1;
    for (int i = 5; i <= max; i += 6) {
        if (n % i == 0) return 0;
        if (n % (i + 2) == 0) return 0;
    }
    return 1;
}
