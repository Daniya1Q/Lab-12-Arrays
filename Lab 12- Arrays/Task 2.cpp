//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int array[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter value " << i + 1 << " : ";
//		cin >> array[i];
//	}
//
//	cout << "\n\nUn-Sorted List: ";
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << array[i] << "\t";
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = i + 1; j < 10; j++)
//		{
//			if (array[j] < array[i])
//			{
//				int temp = array[i];
//				array[i] = array[j];
//				array[j] = temp;
//			}
//		}
//	}
//
//	cout << "\n\nSorted List: ";
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "\t" << array[i];
//	}
//
//
//	cout << endl << endl;
//	return 0;
//}