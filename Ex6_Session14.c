#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    int i, a = 0;

    
    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);

    
    chuoi[strcspn(chuoi, "\n")] = '\0';

    for (i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            a++;
        }
    }

   
    printf("So ki tu la chu cai trong chuoi la: %d\n", a);

    return 0;
}
