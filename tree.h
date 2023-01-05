#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include<iostream>
using namespace std;

#define right(P) (P)->right
#define left(P) (P)->left
#define info(P) (P)->info
#define nil NULL

typedef int infotype;
typedef struct node *adrNode;

struct node{
    infotype info;
    adrNode right;
    adrNode left;
};

typedef adrNode Tree;

adrNode newNode_1301213346(infotype x);
adrNode findNode_1301213346(adrNode root, infotype x);
void insertNode_1301213346(adrNode &root, adrNode p);
void printPreOrder_1301213346(adrNode root);
void printDescendant_1301213346(adrNode root, infotype x);
int sumNode_1301213346(adrNode root);
int countLeaves_1301213346(adrNode root);
int heightTree_1301213346(adrNode root);

#endif // TREE_H_INCLUDED
