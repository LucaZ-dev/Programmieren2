#include <iostream>

using namespace std;

class stockprices {
public:
    void calc()
    {
        // int stock[] = {4, 6, 4, 8, 4};
        int stock[100];
        for(int i = 0; i < 100; ++i) {
            stock[i] = rand() % 1000;
            cout << i << " -> " <<  stock[i]  << endl;
        }

        int len = (sizeof(stock) / sizeof(*stock));
        int max_total, max_time, max_total_var0, max_time_var0, max_total_var1, max_time_var1;


        max_total = stock[1]-stock[0];
        max_total_var0 = 0;
        max_total_var1 = 1;
        max_time = (stock[1]-stock[0]);
        max_time_var0 = 0;
        max_time_var1 = 1;

        for(int i = 0; i < len; ++i) {
            for(int j = i+1; j < len; ++j) {
                cout << "Buy for " << stock[i] << " & sell for " << stock[j] << "\t";
                cout << "Profit: " << stock[j]-stock[i] << "\t";
                cout << "Profit per time unit " << (stock[j]-stock[i]) / (j-i)  << endl;

                if(max_total < stock[j]-stock[i]) {
                    max_total = stock[j] - stock[i];
                    max_total_var0 = i;
                    max_total_var1 = j;
                }
                if(max_time < (stock[j]-stock[i]) / (j-i)) {
                    max_time = stock[j] - stock[i];
                    max_time_var0 = i;
                    max_time_var1 = j;
                }
            }
        }

        cout << "Maximum Profit is: " << max_total << " by selling at " << max_total_var1 << " while buying at " << max_total_var0 << endl;
        cout << "Maximum Profit per time unit is: " << max_time << " by selling at " << max_time_var1 << " while buying at " << max_time_var0 << endl;
    }
};
