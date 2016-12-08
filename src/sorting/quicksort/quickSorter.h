/*******************************************************************************
 *
 * File:
 *   quickSorter.h
 *
 * Author:
 *   Zachary Weicken
 *
 * Description:
 *   Write a QuickSorter class that sorts an array of objects using the
 *   merge sort algorithm. The procedure follows the design given in
 *   "Introduction to Algorithms" textbook by Thomas H. Cormen, Charles
 *   E. Leiserson, Ronald L. Rivest, and Clifford Stein.
 *
 ******************************************************************************/

#ifndef QUICK_SORTER_H
#define QUICK_SORTER_H

#include "sorter.h"

template <typename T>
class QuickSorter: public Sorter<T>
{
public:
  void sort(T * array, const int size) const;
  void quicksort(T* array, int p, int r) const;

private:
  int partition(T* array, int p, int r) const;
  void swap_array(T* array, int p, int r) const;

};

#include "QuickSorter.hpp"
#endif
