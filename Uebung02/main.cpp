#include <iostream>

using namespace std;


class bubblesort{
public:
    void sort(int* arr, int len) {
       bool swapped = true;

       while(swapped) {
           swapped = false;
           for(int i = 1; i < len; ++i) {
               if(arr[i-1] > arr[i]) {
                   print(arr, len);
                   cout << ">>> Swapping " << arr[i-1] << " and " << arr[i] << endl;
                   swap(arr[i-1], arr[i]);
                   swapped = true;
                }
            }
        }
    }




    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void print(int* arr, int len) {
        for(int l = 0; l < len; ++l)
            cout << arr[l] << "\t";
        cout << endl;
    }

};

class selectionsort{

};

class isnertionsort{

};

class mergesort{

};

int main()
{
    int arr[] = {4,6,2,7,1,8,3,9,10};
    bubblesort bs;
    bs.test(arr, sizeof(arr)/sizeof(arr[1]));
    return 0;
}
