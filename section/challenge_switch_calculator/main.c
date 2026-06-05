#include <stdio.h>

int switchCalculator(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            if (b==0) {
                printf("zero");
                return 0;
            } else {
                return a / b;
            };
            break;
        default:
            printf("zero");
            return 0;
    }
}

int main() {
    // Example usage
    switchCalculator(8, 2, '+');
    switchCalculator(8, 2, '-');
    switchCalculator(8, 2, '*');
    switchCalculator(8, 2, '/');
    switchCalculator(8, 0, '/');
    return 0;
}
