#ifndef __UTIL_H__
#define __UTIL_H__

#include "mypair.h"

void productMod(fmpz_t res, ulong *a, ulong k, const fmpz_t n);
void freeArrayOfFmpz(fmpz_t *array, ulong size);
double doublesum(double array[], ulong l, ulong r);
void printListOfNumbers(slong *A, ulong s, ulong N);
void printListOfPairs(MyPair *A, ulong s, ulong N);
void select(MyPair *pairs, int *vec, ulong I, ulong &n);

#endif