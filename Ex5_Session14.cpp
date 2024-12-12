#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[100];
    int i, a = 0;

    printf("Nhap chuoi: ");
    gets(chuoi);

    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ' ' || chuoi[i+1] == '\0') {
            a++;
        }
    }
    printf("So tu trong chuoi la: %d\n", a);

    return 0;
}
