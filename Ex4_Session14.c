#include <stdio.h>

int main() {
    char chuoi[100] = "Xin chao tat ca moi nguoi";
    char s;
    int a = 0;

    printf("Chuoi da khai bao: %s\n", chuoi);

    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &s);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == s) {
            a++;
        }
    }

    printf("So lan xuat hien cua ky tu '%c' trong chuoi la: %d\n", s, a);

    return 0;
}


