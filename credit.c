#include <stdio.h>

int main(){
    int         check_sum,
                check_i = 0,
                check_p = 0,
                i,
                j;  

    char        card_number[16];

    printf("inform the Credit Card number:\n");
    scanf("%s", card_number);
    printf("%s\n",card_number);

    // the last digit of the check_sum must be 0,
    for(j = 1, i = 0; i < 16; i += 2, j += 2){

        int temp_1 = card_number[i] - '0';
        check_i += (temp_1 * 2);

        int temp_2 = card_number[j] - '0';
        check_p += temp_2;

        printf("%d - %d\n", temp_1, temp_2);
    }

    check_sum = check_i + check_p;

    printf("%d %d %d\n", check_i, check_p, check_sum);
}
