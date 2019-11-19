#include "queueobject.h"

QueueObject::QueueObject()
{
    class QueueObject {

        int iFilled;
        int iLength= 2;
        class QueueData {

        public:
            int iData;
            QueueData* pNext;
        };
        QueueData* pRoot;

        QueueObject() {
            pRoot = new QueueData[iLength];
        }

        int getNext() {
            int iNext = pRoot->iData;
            QueueData* temp = pRoot;
            pRoot = pRoot->pNext;
            iFilled--;
            delete temp;
            return iNext;
        }

        bool insert(int iData) {
            if(pRoot == nullptr)
                pRoot->iData = iData;
            else {
                QueueData* temp = pRoot;
                while(temp != nullptr) {
                    temp = temp->pNext;
                }
                temp->iData = iData;
            }
        }

        void extend() {
            if(iFilled * 0.9 > iLength) {
                iLength*=2;
                QueueData* pTemp = new QueueData[iLength];
                for (int i = 0; iLength >= i; ++i) {
                    pTemp[i].iData = pRoot[i].iData;
                    pTemp[i].pNext = pRoot[i].pNext;
                }
                pRoot = pTemp;
                delete[] pTemp;
            }
        }

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
                if (temp->iData == index) {
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
            QueueData* temp = pRoot;
            QueueData* temp2 = pRoot;

            temp = temp->pNext;

            for (int i = 0; i<= value; ++i) {
                temp = temp->pNext;
                temp2 = temp2->pNext;
            }
            temp2->pNext = temp->pNext;
            delete temp;
            return true;
        }

    };

}
