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

#include <iostream>
#include "mergeSort/mergeSorter.h"

using namespace std;

int main()
{
  int a[] = {1, 2, 3};
  const int size = 3;
  Sorter<int> * sorter = new MergeSorter<int>();

  sorter->(a, size);

  for(int i=0; i<size; i++)
    cout << a[i] << ", ";
  cout << endl;

  return 0;
}
