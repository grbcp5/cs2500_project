template <typename T>
void MergeSorter<T>::sort(T * array, const int size) const
{
  mergeSort(array, 0, size-1);

  return;
}

template <typename T>
void MergeSorter<T>::mergeSort(T * array, const int p, const int r) const
{
  int q;

  if(p < r)
  {
    #if DEBUG > 0
      printf("mergeSort(array, %d, %d)\n", p, r);
    #endif

    q = (p + r) / 2;
    mergeSort(array, p, q);
    mergeSort(array, q+1, r);
    merge(array, p, q, r);
    #if DEBUG > 0
    printf("\t\tAfter:\n");
    for(int i=p; i<=r; i++)
      printf("\t%d: %d\n", i, array[i]);
    #endif
  }

  return;
}

template <typename T>
void MergeSorter<T>::merge(T * A, const int p, const int q, const int r) const
{
  int i;
  int j;
  int k;
  int n1 = q - p + 1;
  int n2 = r - q;
  int * L = new int[n1];
  int * R = new int[n2];

  #if DEBUG > 0
    printf("\tmerge(array, %d, %d, %d)\n", p, q, r);
    printf("\t\tBefore:\n");
    for(int i=p; i<=r; i++)
      printf("\t%d: %d\n", i, A[i]);
    printf("q: %d\n", q);
  #endif

  for(i=0; i<n1; i++)
  {
    L[i] = A[p + i];
    #if DEBUG > 0
      printf("L[%d]: %d\n", i, L[i]);
    #endif
  }

  for(j=0; j<n2; j++)
  {
    R[j] = A[q + j + 1];
    #if DEBUG > 0
      printf("R[%d]: %d\n", j, R[j]);
    #endif
  }

  i = 0;
  j = 0;

  for(k=p; k<=r; k++)
  {
    if(i >= n1)
      A[k] = R[j++];
    else if (j >= n2)
      A[k] = L[i++];
    else if(L[i] < R[j])
      A[k] = L[i++];
    else
      A[k] = R[j++];
  }
}
