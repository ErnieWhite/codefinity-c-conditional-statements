#include <stdio.h>

char getTimeCategory(int hour) {
    if (hour >= 5 && hour <= 11) {
        return 'm';
    }
    if (hour >= 12 && hour <= 16) {
        return 'a';
    }
    if (hour>= 17 && hour <= 20) {
        return 'e';
    }
    if ((hour>=21 && hour<=23) || (hour >= 0 && hour <= 4)) {
        return 'n';
    }
    return 'x';
}

int main() {
    printf("%c\n", getTimeCategory(22));
    return 0;
}