#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[10], sm[3];
    scanf("%s", s);

    if (s[0] == '1' && s[1] == '2' && s[8] == 'A') {
        s[0] = '0';
        s[1] = '0';
    } 

    else if (s[8] == 'P') {
        sm[0] = s[0];
        sm[1] = s[1];
        sm[2] = '\0';
        int n = atoi(sm);
        if (n != 12) {
            n += 12;
        }
        printf("%02d", n);  
        for (int i = 2; i < 8; i++) {
            printf("%c", s[i]);
        }
        return 0;
    }

    s[8] = 0;  
    s[9] = 0;

    printf("%s\n", s);
    return 0;
}
