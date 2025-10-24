#include "Array.h"
int main(){
    Array a;
    initArray(&a, 5, "3,75,74,2,5");
    printArray(&a);
    insertArray(&a, 8, 0);
    insertArray(&a, 100, 0);
    insertArray(&a, 44, 0);
    insertArray(&a, 9, 0);
    printArray(&a);
    quickSort(&a, 0, 8);
    printArray(&a);
    freeArray(&a);
}