/*******************************************************************************
 *
 * File:
 *   main.cpp
 *
 * Author:
 *   Grant Broadwater
 *
 * Description:
 *
 ******************************************************************************/

#define DEBUG 0

#include <iostream>
#include <stdio.h>
#include "mergeSort/mergeSorter.h"

using namespace std;

int main()
{
  int a[] = {8, -11, 15, 9, 4, 122, 95};
  const int size = 7;
  Sorter<int> * sorter = new MergeSorter<int>();

  sorter->sort(a, size);

  for(int i=0; i<size; i++)
    printf("%d: %d\n", i, a[i]);
  cout << endl;

  return 0;
}
