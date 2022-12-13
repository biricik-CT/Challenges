// your name surname and age from user
#include <stdio.h>

int main(){
	char name[35];
	char surname[25];
	
	printf("Enter your name: ");
	scanf("%s",name);
	printf("\nEnter your surname : ");
	scanf("%s",&surname);
	
	printf("%s %s",name,surname);
return 0;
}
