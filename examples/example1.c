#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../pbkdf2.h"

int main() {
    char password[] = "Wb|1p9$ls#*iXJ7}gD";
    char pbkstr[512] = {0};
    int match;

    pbkdf2_encode(password, pbkstr);
    printf("Checking password [%s] for %s\n", password, pbkstr);
    match = pbkdf2_match(password, pbkstr);
    printf("match == %d\n", match);
    return match;
}
