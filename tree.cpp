#include "tree.h"

adrNode newNode_1301213346(infotype x){
    adrNode P = new node;
    info(P) = x;
    right(P) = nil;
    left(P) = nil;
    return P;
}

adrNode findNode_1301213346(adrNode root, infotype x){
    if(root != nil){
        if(x < info(root)){
            return findNode_1301213346(left(root),x);
        }else if(x > info(root)){
            return findNode_1301213346(right(root),x);
        }else{
            return root;
        }
    }else{
        return nil;
    }
}

void insertNode_1301213346(adrNode &root, adrNode p){
    if(root != nil){
        if(info(p) < info(root)){
            insertNode_1301213346(left(root),p);
        }else if(info(p) > info(root)){
            insertNode_1301213346(right(root),p);
        }
    }else{
        root = p;
    }
}

void printPreOrder_1301213346(adrNode root){
    if(root != nil){
        cout << info(root) << " ";
        printPreOrder_1301213346(left(root));
        printPreOrder_1301213346(right(root));
    }
}

void printDescendant_1301213346(adrNode root, infotype x){
    adrNode P = findNode_1301213346(root,x);
    if(P != nil){
        adrNode N1 = left(P);
        adrNode N2 = right(P);
        printPreOrder_1301213346(N1);
        printPreOrder_1301213346(N2);
    }else{
        cout << "Node NULL" << endl;
    }
}

int sumNode_1301213346(adrNode root){
    if(root != nil){
        return info(root) + sumNode_1301213346(left(root)) + sumNode_1301213346(right(root));
    }else{
        return 0;
    }
}
int countLeaves_1301213346(adrNode root){
    if(root == nil){
        return 0;
    }else if(left(root) == nil && right(root) == nil){
        return 1;
    }else{
        return countLeaves_1301213346(left(root)) + countLeaves_1301213346(right(root));
    }
}
int heightTree_1301213346(adrNode root){
    if(root != nil){
        int Left = heightTree_1301213346(left(root));
        int Right = heightTree_1301213346(right(root));
        return max(Left,Right) + 1;
    }
}
