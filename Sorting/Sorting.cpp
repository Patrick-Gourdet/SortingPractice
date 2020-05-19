#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& vec)
{
	int value = 0;
	int spot = 0;
	for(auto j = 1;j<vec.size();j++)
	{
		value = vec[j];
		auto i = j;
		while(i>0 && vec[i- 1]>value )
		{
			vec[i] = vec[i - 1];
			i = i - 1;
		}
		vec[i] = value;
	}
}
void merg(std::vector<int>& v1, int min,int mid,int max)
{
	int low = min;
	int m = mid + 1;
	std::vector<int> t(max - min +1,0);
	int k = 0;
	for(int i = min;i <= max;i++)
	{
		if (low > mid)
			t[k++] = v1[m++];
		else if (m > max)
			t[k++] = v1[m++];
		else
			t[low++] = v1[min];

	}
	for(int p = 0;p < k;p++)
	{
		v1[min++] = t[p];
	}
	
}
void merge_sort(std::vector<int>& vec,int beg, int end)
{
	if(beg < end)
	{
		int mid = (beg + end) / 2;
		merge_sort(vec, beg, mid);
		merge_sort(vec, mid + 1, end);
	
	merg(vec, beg, mid, end);
	}
}
void quick_sort(std::vector<int>& vec)
{
	
}

int main()
{
	std::vector<int> vec = { 66,4,333,32,85,2,4,77,5,36,78,489,9 };
	insertion_sort(vec);
	
}
