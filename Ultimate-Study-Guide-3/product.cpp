#include <iostream>

using namespace std;

class product {
  public:
    void calc(int* arr, int len) {

    if(len < 3)
        cout << "You are the big bad, your array is less than 3" << endl;
      int max = arr[0] * arr[1] * arr[2];
    for(int i = 0; i < len; ++i) {
        for(int j = i+1; j < len; ++j) {
            for(int k = j+1; k < len; ++k) {
                if(max < arr[i] * arr[j] * arr[k])
                    max = arr[i] * arr[j] * arr[k];
                cout << arr[i] << " * " << arr[j] << " * " << arr[k] << " = " << arr[i] * arr[j] * arr[k] << endl;
                }
            }
        }
    cout << max << endl;
  }

    void everyvalue(int* arr, int len) {
        long result[len];
        for(int i = 0; i < len; ++i) {
            result[i] = 1;
            for(int j = 0; j < len; ++j) {
                if(j != i) {
                    result[i] = result[i]*arr[j];
                }
            }
        }
        for(int i = 0; i < len; ++i) {
            cout << result[i] << endl;
        }


    }

};
