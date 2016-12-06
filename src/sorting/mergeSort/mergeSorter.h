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

#include "sorter.h"

template <typename T>
class MergeSorter: public Sorter<T>
{
public:
  void sort(T * array, const int size) const;
};

#include "mergeSorter.hpp"
#endif
