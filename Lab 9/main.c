#include <stdio.h>

int main() {
    // 3 задание
    int num;
    printf("3. ");
    scanf("%d", &num);

    char* str[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("%s\n", str[num]);


    // 5 задание
    double initial_amount, rate;
    unsigned kol_of_months;

    printf("5. Enter the initial amount of money: ");
    scanf("%lf", &initial_amount);
    printf("Enter the interest rate (in percents): ");
    scanf("%lf", &rate);
    printf("Enter the number of months: ");
    scanf("%u", &kol_of_months);

    rate /= 100;
    for (int i = 1; i <= kol_of_months; i++) {
        initial_amount += initial_amount * rate / 12;
        printf("The amount on the month %u is %f\n", i, initial_amount);
    }
    return 0;
}
