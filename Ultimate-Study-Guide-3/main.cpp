#include <iostream>
#include "product.cpp"
#include "stockprices.cpp"

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    product p;
    p.calc(arr, sizeof(arr)/sizeof(*arr));
    return 0;
}
