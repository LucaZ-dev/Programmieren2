#include <iostream>
#include <iomanip>      // std::setw

using namespace std;

class binarytree
{
    struct tree
    {
     int iData;
     tree* left;
     tree* right;

     tree(int i) : iData(i), left(nullptr), right(nullptr) {
     }
    };

public:
    void add(int i) {
        tree* temp = mRoot;
        if(mRoot == nullptr) {
            cout << "Insert new tree with value " << i << endl;
            mRoot = new tree(i);
            return;
        }

        while(true) {
            if(temp->iData <= i) {
//            while(true) {
                if(temp->right == nullptr) {
                    temp->right = new tree(i);
                    cout << "Insert new tree right with value " << i << endl;
                    return;
                }
                else {
                    temp = temp->right;
                    cout << "Going right" << endl;
                    cout << temp->iData << endl;
            }
//                }
        }
        else if(temp->iData > i) {
//            while(true) {
                if(temp->left == nullptr) {
                    temp->left = new tree(i);
                cout << "Insert new tree left with value " << i << endl;
                return;
                } else {
                    temp = temp->left;
                    cout << "Going left" << endl;
                    cout << temp->iData << endl;
                }
             }
//        }

        }

//        else {
//            cout << "Int already in use, good luck." << endl;
//            return;
//        }

    }

    void print(int i) {
        postorder(mRoot, i);
    }

    void postorder(tree* p, int indent = 4)
    {
        if(p != nullptr) {
            if(p->right) {
                postorder(p->right, indent+4);
            }
            if (indent) {
                std::cout << std::setw(indent) << ' ';
            }
            if (p->right) std::cout<<" /\n" << std::setw(indent) << ' ';
            std::cout<< p->iData << "\n ";
            if(p->left) {
                std::cout << std::setw(indent) << ' ' <<" \\\n";
                postorder(p->left, indent+4);
            }
        }
    }

    tree* mRoot = nullptr;
};


