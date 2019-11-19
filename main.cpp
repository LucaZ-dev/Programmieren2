#include <iostream>
#include <queueobject.cpp>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Queue Q;
    Q.insert(100);
    cout << Q.getNext() << endl;

}
