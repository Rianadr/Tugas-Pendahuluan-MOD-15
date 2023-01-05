#include "tree.h"

#include <iostream>
using namespace std;

int main()
{
    cout << "================================================================================" << endl;

    int x[9] = {5,3,9,10,4,7,1,8,6};
    for(int i=0;i<9;i++){
        cout << x[i] << " ";
    }
    cout << endl << endl;

    Tree T = nil;

    for(int i=0;i<9;i++){
        adrNode P = newNode_1301213346(x[i]);
        insertNode_1301213346(T,P);
    }

    cout << "Pre Order\t\t: ";
    printPreOrder_1301213346(T);
    cout << endl << endl;

    cout << "Descendant of Node 9 \t: ";
    printDescendant_1301213346(T,9);
    cout << endl <<endl;

    cout << "Sum of BST Info\t\t: " << sumNode_1301213346(T) << endl;
    cout << "Number of Leaves\t: " << countLeaves_1301213346(T) << endl;
    cout << "Height of Tree\t\t: " << heightTree_1301213346(T) -1 << endl;

    cout << "================================================================================";
}
