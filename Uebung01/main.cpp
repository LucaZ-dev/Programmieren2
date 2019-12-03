#include <iostream>
#include <string>

using namespace std;

class rectangle {
public:
    void print(int len) {
        for(int i = 1; i <= len; ++i) {
            for(int j = 0; j < i; ++j)
            cout << "*";
            cout << endl;
        }
    }
};

class primenumber {
public:
    void print(int n) {
        for(int i = 2; i <= n; ++i) {
            bool test = false;
            for(int j = 2; j <= i/2; ++j) {
                if(i%j == 0)
                    test = true;
                }
            if(!test)
                cout << i << endl;
        }

    }
};

class numberone {
    int dec2bin(int dec) {
    int temp = dec;
    int count = 0;
    string bin = "";
    while(temp > 1) {
    if(temp % 2 == 1) {
        count++;
    }
    bin = to_string(temp%2) + bin;
//    cout << "Bin: " << bin << endl;
    temp = temp / 2;
    }

    bin =  to_string(temp) + bin;
    cout << "Bin: " << bin << endl;

    if(temp == 1)
        ++count;
//    cout << count << endl;
    return count;
}



public:
    void run(int a, int b) {
        int num1 = dec2bin(a);
        int num2 = dec2bin(b);
        if(num1 != num2)
        cout << a << " has " << num1 << " zeroes and " << b << " has " << num2 << " zeroes, therefore " << ((num1 > num2) ? a : (num2 > num1 ? b : a)) << " has more zeroes." << endl;
        else
        cout << a << " has " << num1 << " zeroes and " << b << " has " << num2 << " zeroes, therefore " << a << " and " << b << " have the same amount of zeroes." << endl;

    }

};


int main()
{
//    rectangle rec;
//    rec.print(5);
//    cout << endl;
//    primenumber prime;
//    prime.print(100);
    numberone n1;
    n1.run(14, 13);



    return 0;
}
