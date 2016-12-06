/*******************************************************************************
 *
 * File:
 *   sorter.h
 *
 * Author:
 *   Grant Broadwater
 *
 * Description:
 *   Create a pure abstract "Sorter" class that will require child classes to
 *   implement the "sort(T * array, const int size)" function that sorts the
 *   given array.
 *
 ******************************************************************************/

#ifndef SORTER_H
#define SORTER_H

template <typename T>
class Sorter {
public:
  virtual void sort(T * array, const int size) const = 0;

  void operator()(T * array, const int size) const
  {
    sort(array, size);

    return;
  }
};

#endif
