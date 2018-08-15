#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
    if (size==0)
        return 0;

    return *arr + sumatoria(arr, size-1);
}