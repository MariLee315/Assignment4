/*Mariposa Lee, supposed to check if a string has all unique characters, but not working. Only prints one or the other*/

#include <stdio.h>
#include <string.h>
int main(){
	char str[50];
	int a,b,c,works;

printf("Please enter a string.\n");
fgets(str, sizeof(str), stdin);

for(a=0; a!='\0'; a++){
	for (a+1==b; b!='\0'; b++){
		if (a[str]!=b[str]){
			c=works;} }}
		/*
		else {
			printf("Characters are unique.\n");
	}*/       /* <---- Did not work, so omitted*/

if (c=works){
	printf("Characters aren't unique.\n");
}
else{
	printf("Characters are unique.\n");  /*Code only prints either "Characters aren't unique" or "Characters are unique" every time it is compiled."*/
return 0;
}

}
