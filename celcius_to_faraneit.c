#include<stdio.h>
int main(){
    float celsius, farahneit;
    printf("Enter the thing that you want: ");
    scanf("%f",&celsius);

   farahneit = (9/5 * celsius) + 32;
    printf("%.2f of celsius is equal to %.2f of farahneit\n", celsius, farahneit);

    return 0;
}