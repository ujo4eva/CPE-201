#include <stdio.h>

int main() {

    char name[] = "Tomi";

    printf("%s\n", name);

    name[1] = 'o';
    name[2] = 'l';
    name[3] = 'u';

    printf("%s\n", name);

    return 0;

}