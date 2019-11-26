#include <string>
#include <iostream>
#include <math.h>

using namespace std;

class frame_usage {
public:

    struct frame{
        int id;
        long usage;
        string name;
        frame* next = nullptr;

        frame(int id, long usage, string name) {
            this->id = id;
            this->name = name;
            this->usage = usage;
        }
    };

    void run() {
        frame* temp = nullptr;
        long reference;
        int i = 0;
        cout << "Enter Frame Name of whom you know the usage in seconds" << endl;
        string temp_name;
        cin >> temp_name;
        cout << "Enter usage in seconds" << endl;
        long temp_usage;
        cin >> temp_usage;

        frame* root;
        root = new frame(i, temp_usage, temp_name);
        temp = root;
        ++i;

        cout << "Enter frame usage in percent, without percent symbol" << endl;
        double d;
        cin >> d;
        reference =  temp_usage / lround((d));
        reference *= 100;
        cout << reference;

        bool b = true;
        while(b) {
        cout << "Name" << endl;
        cin >> temp_name;
        cout << "usage in percent" << endl;
        cin >> d;
        temp_usage = lround(reference*d);
        temp->next = new frame(i, temp_usage, temp_name);
        cout << "Amother One? 1 -> yes | 0 -> no" << endl;
        cin >> b;
        }

    }

};
