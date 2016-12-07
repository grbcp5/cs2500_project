/*******************************************************************************
 *
 * File:
 *   mergeSorter.h
 *
 * Author:
 *   Grant Broadwater
 *
 * Description:
 *   Write a MergeSorter class that sorts an array of objects using the
 *   merge sort algorithm. The procedure follows the design given in
 *   "Introduction to Algorithms" textbook by Thomas H. Cormen, Charles
 *   E. Leiserson, Ronald L. Rivest, and Clifford Stein.
 *
 ******************************************************************************/

#ifndef MERGE_SORTER_H
#define MERGE_SORTER_H

#if DEBUG > 0
  #include <stdio.h>
#endif
#include "sorter.h"

template <typename T>
class MergeSorter: public Sorter<T>
{
public:
  void sort(T * array, const int size) const;
  void mergeSort(T * array, const int p, const int r) const;

private:
  void merge(T * A, const int p, const int q, const int r) const;
};

#include "mergeSorter.hpp"
#endif
