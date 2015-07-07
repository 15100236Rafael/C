//Fatorial Program
#include <stdio.h>
int fat,num,i;

int main (void){
    printf("Type a whole number: ");
    scanf("%i/n", &num);
    i = 0;
    fat = 1;
    for (i=1; i<=num; i++){
        fat = fat*i;
    }
    printf("%i\n", fat );
}