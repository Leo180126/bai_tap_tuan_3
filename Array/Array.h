#ifndef ARRAY_H
#define ARRAY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int *p;
    int size;
}Array;
void initArray(Array *a, int size, const char *data);
void insertArray(Array *a, int var, int index);
void deleteEle(Array *p, int index);
void selectionSort(Array *p);
void insertSort(Array *p);
void bubbleSort(Array *p);
void quickSort(Array *p, int left, int right);
void printArray(Array *a);
void freeArray(Array *a);
#endif