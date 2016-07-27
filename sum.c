/*Mariposa Lee, returning a user-input array with cumulative sums of its elements*/
#include <stdio.h>
#include <math.h>
int main () {
	char s[50];
	int n, i, sum, length, bruh;
printf("Enter a number for your array length.\n");
scanf("%d", &length);
int str[length];

for (n=0; n!=length; n++) {   /*if user inputs 5 for length, code will ask for 5 numbers*/
	printf("Enter a number to put into your array.\n");
	scanf("%d", &str[n]);
}

bruh=0;
sum=str[bruh];


printf("Here is your input array:\n");
for (n=0; n!=length; n++){        /*prints the numbers acquired from the first for loop*/
	printf("%d\n", str[n]);}


printf("Here is the output array:\n");
for (i=0; i!=(length); i++){
printf("%d\n", sum);
sum+=str[bruh+=1]; /*bruh increases and adds to sum, resulting in cumulative sum*/
}


return 0;
}
