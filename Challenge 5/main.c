#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("###############################\n");
    printf("\tChallenge 5\n");
    printf("###############################\n");
    printf("\n");

    int i;
    for(i=1; i<=100; i++){
        if(i%3 == 0 && i%5 != 0){
            printf("Fizz\n");
        }else if(i%5 == 0 && i%3 != 0){
            printf("Buzz\n");
        }else if(i%3 == 0 && i%5 == 0){
            printf("FizzBuzz\n");
        }else{
            printf("%d\n",i);
        }
    }

    return 0;
}
