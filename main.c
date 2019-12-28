#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
    int num, i;
    scanf("%d", &num);                 
    for (i = 1; i <= num; i++) {
        if (i%3 == 0 && i%5 == 0){           //if num is the multiples of 3 and also the multiples of 5, print "FizzBuzz"
            printf("\"FizzBuzz\",\n");
        }
        else if (i%3 == 0) {
            printf("\"Fizz\",\n");           //if num is the multiples of 3, print "Fizz"
        }
        else if (i%5 == 0){
            printf("\"Buzz\",\n");           //if num is the multiples of 5, print "Buzz"
        }
        else {
            printf("\"%d\",\n", i);          //if nothing happens above, just print the integer itself out
        }    
    }
    return 0;
}