#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Func Return 1 or 0
bool is_leap_year(int N){
    bool test = false;
    if((N%4 == 0 && N%100 != 0) || N%400 == 0){
        test = true;
    }
    return test;
}
int main()
{
    //For User
    int N;
    printf("Donnez Annes: ");
    scanf("%d",&N);

    //Check lannes!
    if(is_leap_year(N) == true){
        printf("La annes bissextile");
    }else{
        printf("La annes non bissextile");
    }


    return 0;
}
