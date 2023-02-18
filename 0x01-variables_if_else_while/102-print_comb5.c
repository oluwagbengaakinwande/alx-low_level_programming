#include <stdio.h>
/**
 * main - program that prints all possible combinations of two two-digit numbers.
 * Return: Always 0
 */
int main() {
    int i, j;
    for (i = 0; i < 100; i++) {
        for (j = i; j < 100; j++) {
            int first_i = i / 10;
            int second_i = i % 10;
            int first_j = j / 10;
            int second_j = j % 10;
            if (i != j) {
                putchar(first_i + '0');
                putchar(second_i + '0');
                putchar(' ');
                putchar(first_j + '0');
                putchar(second_j + '0');
                if (i != 98 || j != 99) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}

