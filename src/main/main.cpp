/*******************************************************************************
 *
 * File:
 *   main.cpp
 *
 * Author:
 *   Grant Broadwater
 *   Zachary Weicken
 *
 * Description:
 *
 ******************************************************************************/

#include <iostream>
#include "quicksort/quickSorter.h"

using namespace std;

int main()
{
  int a[] = {4, 1, 3, 2};
  const int size = 4;
  Sorter<int> * sorter = new QuickSorter<int>();

  sorter->sort(a, size);

  for(int i=0; i<size; i++)
    cout << a[i] << ", ";
  cout << endl;

  return 0;
}
