void bubble_sort_asc(int* array, int size) {
	for (int j = 0; j < size - 1; j++)
	{
		bool flag;
		for (int i= 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1]) {
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}
		
	}
}