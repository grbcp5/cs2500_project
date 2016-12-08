#include <iostream>

using namespace std;


//---------------------------------------------------------------Quicksort and the what nots
template <typename T>
T swap_array(T* array, int p, int r)
{
	T temp = array[p];
	array[p] = array[r];
	array[r] = temp;
}

template <typename T>
int partition(T* array, int p, int r)
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
T quicksort(T* array, int p, int r)
{
	int q;

	if (p<r)
	{
		q = partition(array, p, r);
		quicksort(array, p, q-1);
		quicksort(array, q+1, r);
	}

}


//------------------------------------------------------------Print Array
template <typename T>
T print_array(T array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << ", ";
	}

}




//*********************************** MAIN **************************************************
int main()
{
	//cout << "Hello World" << endl;
	//Print Intital Array
	int data[]={1,4,7,2,5,8,3,6,9,0};
	print_array(data, 10);
	cout << endl;


	//Print sorted array
	quicksort(data, 0, 9);
	print_array(data, 10);
	cout << endl;


	return 0;
}
