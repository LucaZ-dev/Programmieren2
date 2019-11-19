#include <iostream>

using namespace std;

    class Queue {
        class QueueData {

        public:
            int iData = 0;
            QueueData* pNext;

            QueueData(int data = 0) {
                iData = data;
            }


        };
        QueueData* pRoot;

    public:
        Queue() {
            pRoot = new QueueData();
        }


        int getNext() {
            int iNext = pRoot->iData;
            QueueData* temp;
            temp = pRoot->pNext;
            delete pRoot;
            pRoot = temp;
            return iNext;
        }

        bool insert(int iData) {
            if(pRoot->iData == 0) {
                pRoot->iData = iData;
                return true;
            } else {
                QueueData* temp = pRoot;
                while(temp->pNext != nullptr) {
                    temp = temp->pNext;
                }
                temp->pNext = new QueueData(iData);
                return true;
            }
        }
    private:
//        void extend() {
//            if(iFilled * 0.9 > iLength) {
  //              cout << "extending" << endl;
  //              iLength*=2;
    //            QueueData* pTemp = new QueueData[iLength];
      //          for (int i = 0; iLength >= i; ++i) {
        //            pTemp[i].iData = pRoot[i].iData;
          //          pTemp[i].pNext = pRoot[i].pNext;
            //    }
              //  pRoot = pTemp;
                //delete[] pTemp;
            //}
        //}
public:
        int operator[] (int index) const {
            QueueData* temp = pRoot;
            for(int i = 1; i<=index; ++i) {
                temp = temp->pNext;
            }

            return temp->iData;
        }

        int search (int index) {
            QueueData* temp = pRoot;
            int searchcounter = 0;
            while(true) {
                if (temp->iData != index) {
                    ++searchcounter;
                    temp = temp->pNext;
                    if (temp == nullptr) {
                        return -1;
                    }
                } else {
                    return searchcounter+1;
                }
            }
        }
        bool deletion(int index) {
            int value = search(index);
            if (value == -1) {
                return false;
            }
            --value;
            QueueData* temp = pRoot;
            QueueData* temp2 = pRoot->pNext;
            if(value == 0){
                delete pRoot;
                pRoot = temp2;
            }

            for(int i = 1; i<value; ++i){
                temp = temp->pNext;
                temp2 = temp2->pNext;
            }
            cout << "OwO" << endl;
            delete temp->pNext;
            temp->pNext = temp2->pNext;
            return true;
        }

    };
