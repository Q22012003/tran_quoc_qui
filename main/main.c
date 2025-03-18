#include <stdio.h>

int main() {
    char str[100000];
    int inWord = 0;

  
    printf("Nhap chuoi: ");
    gets(str);

   
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v') {
            inWord = 0; 
        }
        else if (inWord == 0) { 
            if (str[i] >= 'a' && str[i] <= 'z') { 
                str[i] = str[i] - ('a' - 'A'); 
            }
            inWord = 1; 
        }
    }

    printf("Chuoi sau khi chinh sua: %s\n", str);
    return 0;
}
