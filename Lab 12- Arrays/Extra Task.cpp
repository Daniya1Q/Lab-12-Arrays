//#include <iostream>
//using namespace std;
//
//int count_evens(int numbers[], int size);
//
//int main() {
//    const int max_size = 100;
//    int numbers[max_size];
//    int size;
//
//    cout << "Enter the number of elements (up to 100): ";
//    cin >> size;
//
//    if (size <= 0 || size > max_size) {
//        cout << "Invalid size. Exiting program." << endl;
//        return 1;
//    }
//
//    cout << "Enter the elements separated by spaces: ";
//    for (int i = 0; i < size; ++i) {
//        cin >> numbers[i];
//    }
//
//    int result = count_evens(numbers, size);
//
//    cout << "The number of even numbers in the list is: " << result << endl;
//
//    return 0;
//}
//
//int count_evens(int numbers[], int size)
//{
//    int even_count = 0;
//
//    for (int i = 0; i < size; ++i) {
//        if (numbers[i] % 2 == 0) {
//            even_count++;
//        }
//    }
//
//    return even_count;
//}