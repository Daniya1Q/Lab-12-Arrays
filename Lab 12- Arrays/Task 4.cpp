//#include <iostream>
//using namespace std;
//
//int maxNum(const int* arr, int& size);
//
//
//int main()
//{
//    int n;
//
//
//    cout << "\n\nEnter the number of integers: ";
//    cin >> n;
//
//
//    int* numbers = new int[n];
//
//
//    cout << "\n\nEnter " << n << " integers:\n" << endl;
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Enter integer " << i + 1 << ": ";
//        cin >> numbers[i];
//    }
//
//
//    int largestIndex = maxNum(numbers, n);
//
//
//    cout << "\nThe largest number is: " << numbers[largestIndex] << " at index " << largestIndex + 1 << endl;
//
//
//    delete[] numbers;
//
//    return 0;
//}
//
//int maxNum(const int* array, int& size)
//{
//    int maxIndex = 0;
//
//    for (int i = 1; i < size; i++)
//    {
//        if (array[i] > array[maxIndex])
//        {
//            maxIndex = i;
//        }
//    }
//
//    return maxIndex;
//}