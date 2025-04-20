#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_KEY 3

struct BNode{
    int key_count;
    int keys[MAX_KEY];
    struct BNode *children[MAX_KEY];
    bool isLeaf;
};
//need to modify this,expecially the memory allocation issue
struct BNode *createNode(bool isLeaf){
    struct BNode *newNode = (struct BNode*)malloc(sizeof(struct BNode));
    if(newNode == NULL){
        perror("Unable to allocate");
        exit(EXIT_FAILURE);
    }
    newNode->key_count=0;
    newNode->isLeaf=isLeaf;
    for(int i=0; i< MAX_KEY;i++){
        newNode->children[i]=NULL;
    }
    return newNode;
}

