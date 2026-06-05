#include <stdio.h>

char getDayType(int day) {
    switch (day) {
        case 1:
            return 'W';
            break;
        case 2:
            return 'W';
            break;
        case 3:
            return 'W';
            break;
        case 4:
            return 'W';
            break;
        case 5:
            return 'W';
            break;
        case 6: 
            return 'H';
            break;
        case 7: 
            return 'H';
            break;
        default: return '?';
    }
}

int main() {
    printf("%c\n", getDayType(1));
    printf("%c\n", getDayType(6));
    printf("%c\n", getDayType(8));
    return 0;
}