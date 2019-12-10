#include <iostream>

using namespace std;

class sorting {

protected:
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void print(int* arr, int len) {
        for(int l = 0; l <= len; ++l)
            cout << arr[l] << "\t";
        cout << endl;
    }

};


class bubblesort : sorting{
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
};

class selectionsort : sorting{
public:
    void sort(int* arr, int len) {
    print(arr, len);
    int print_len = len;

        for(int j = len; j > 0; --j) {
            int max = 0;
            for(int i = 0; i <= j; ++i) {
                if(arr[max] < arr[i]) {
                    max = i;
                    }
                }
        swap(arr[max], arr[len]);
        --len;
        }

        print(arr, print_len);
    }

};

class insertionsort : sorting {

};

class mergesort{

};

int main()
{
    int arr[] = {4,6,2,7,1,8,3,9,10};
    bubblesort bs;
    selectionsort ss;
    insertionsort is;
    ss.sort(arr, sizeof(arr)/sizeof(arr[1])-1);
    return 0;
}
