#include <stdio.h>
#define SIZE 4

void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
    int list[SIZE] = {1,2,3,4};

    print_array(list, SIZE);
    square_array(list, SIZE);
    print_array(list, SIZE);

    return 0;
}