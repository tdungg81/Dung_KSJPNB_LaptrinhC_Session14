#include<stdio.h>
#include<string.h>

int main(){
	char c[1000]; 
	printf("Moi ban nhap chuoi ky tu: ");
	fgets(c, 1000, stdin);
	c[strcspn(c, "\n")] = '\0';
	printf("Chuoi ky tu la: %s\n",c); 
	printf("So luong ki tu trong chuoi la: %d",strlen(c)); 
	return 0; 
} 
 
