#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; 
    n = (struct node *) malloc(sizeof(struct node)); 
    n->data = data; 
    n->left = NULL; 
    n->right = NULL;
    return n; 
}


struct node * search(struct node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}


int main(){
     
    struct node *p = createNode(5);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(3);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(1);
    
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    int a;
    printf("enter the element you want to serch:");
    scanf("%d",&a);

    struct node* n = search(p, a);
    if(n!=NULL){
    printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
