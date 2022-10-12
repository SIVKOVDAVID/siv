#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
	using namespace std;
	cout<<""<<endl;
	
	cout<<"Rand_max = "<<RAND_MAX<<endl;
	
	int indexValue = 0;
	int array_size = 10;
	int LOW_LIMIT = -10;
	int HIGH_LIMIT = 10;
	int x;
	int counter;
	double r;

	int V[array_size] = {};
	cout<<"time = "<<time(NULL)<<endl;
	srand(time(NULL));
	for (int i=0; i<HIGH_LIMIT; i++)
	{
		V[i] = rand() % (HIGH_LIMIT - LOW_LIMIT + 1) + LOW_LIMIT;
		x = rand() % (HIGH_LIMIT - LOW_LIMIT + 1) + LOW_LIMIT;
		//r = 20 *(double)rand() / RAND_MAX - 10;
		cout<<"r = "<<x<<endl;
		counter++;
	}
	
	for (int i = 0; i < array_size; i++)
	{
		cout<<"V["<<i<<"] = "<<V[i]<<endl;
	}
	
	int max_value;
	int minValue;
	minValue = V[indexValue];
	max_value = V[indexValue]
	for (int i = 0; i < array_size; i++)
	{
		if (minValue > V[i])
		{
			minValue = V[i];
			indexValue = i;
		}
		if(max_value < V[i])
		{
			max_value = V[i];
			indexValue = i;
		}
		else
		{
			cout<<"nah"<<endl;
		}
	}
	
	cout<<"Min value of array: V["<<indexValue<<"]"<<endl;
	cout<<"Max value of array: V["<<max_value<<"]"<<endl;
	
	return 0;
}