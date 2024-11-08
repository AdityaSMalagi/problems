#include<stdio.h>
int main(){
    float miles, kilometer;
    printf("Enter the distance that you want: ");
    scanf("%f",&miles);

    kilometer = miles * 1.60;
    printf("%.2f of miles is equal to %.2f of killometer\n",miles , kilometer);
    return 0;
}