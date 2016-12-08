template <typename T>
void QuickSorter<T>::sort(T * array, const int size) const
{
  quicksort(array, 0, size-1);

  return;
}


template <typename T>
void QuickSorter<T>::swap_array(T* array, int p, int r) const
{
	T temp = array[p];
	array[p] = array[r];
	array[r] = temp;

  return;
}

template <typename T>
int QuickSorter<T>::partition(T* array, int p, int r) const
{
	T x = array[r];
	int i = p-1;

	for (int j = p; j < r-1; ++j)
	{
		if (array[j] <= x)
		{
			i = i+1;
			swap_array(array,i,j);
		}
	}
	swap_array(array,i+1,r);

	return i+1;
}

template <typename T>
void QuickSorter<T>::quicksort(T* array, int p, int r) const
{
	int q;

	if (p<r)
	{
		q = partition(array, p, r);
		quicksort(array, p, q-1);
		quicksort(array, q+1, r);
	}

  return;
}
