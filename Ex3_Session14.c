#include <stdio.h>

int main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);  

    size_t len = strlen(chuoi);
    if (chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
        len--;
    }

    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");

    return 0;
}                                                                                                                                                                                                        
