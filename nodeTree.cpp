#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
struct TreeNode{
	int data;
	struct node *next;
};
typedef struct  TreeNode;
int main(){
 int  search(int KEY){
    TreeNode *current = root;               
    while (current != NULL && KEY != current->key) {                                                     
        if (KEY < current->key){                      
            current = current->leftchild;   
        }
        else {
            current = current->rightchild;  
        }
    }
    return current;
}
}

