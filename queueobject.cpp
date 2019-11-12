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
            pRoot = pRoot->pNext;
            iFilled--;
            return iNext;
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
                delete pTemp;
            }
        }
    };

}
