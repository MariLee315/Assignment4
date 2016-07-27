/* Mariposa Lee, removes vowels from a string. Researched a bit*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
	char wvow[50]; /*with vowels*/
	char wovow[50]; /*without vowels*/
	int a;
	int b=0;

printf("Enter a string.\n");
fgets(wvow, sizeof(wvow), stdin);

for (a=0; wvow[a]!='\0'; a++) { /*until it gets to terminator*/
	if(wvow[a]=='A'||
	   wvow[a]=='a'||
	   wvow[a]=='E'||
	   wvow[a]=='e'||
	   wvow[a]=='I'||
	   wvow[a]=='i'||
	   wvow[a]=='O'||
	   wvow[a]=='o'||
	   wvow[a]=='U'||
	   wvow[a]=='u'){
		continue;} /*repeats checking*/
else{
	wovow[b] = wvow[a]; 
	b++;}
}

printf("\n%s\n", wovow);

return 0;
}

	
