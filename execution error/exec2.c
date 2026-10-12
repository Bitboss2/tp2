#include <stdio.h>

int main() {
    int tab[5];
    
    for (int i = 0; i < 5; i++) {
        tab[i] =i;  
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
