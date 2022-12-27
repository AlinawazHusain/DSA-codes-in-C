//linear search

#include <stdio.h>
int linearSearch(int arr[],int n , int num)
{
    for (int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }

    }
    return -1;
}
void main(){
    
    int num, result=0,arr[]={2,3,4,1,67,54,87,95,23,56};
    printf("enter a number to find in array : \n");
    scanf("%d",&num);
    result=linearSearch(arr,10,num);
    if(result!=-1){
        printf("%d is found in the fiven array at index %d",num,result);
    }
    else{
            printf("%d is not found in the given array",num);
        
    }

}





//Binary search 

#include <stdio.h>
int binarySearch(int arr[],int low,int high, int num){
    int mid;
    mid=(low+high)/2;

    if(low==high){
        if(arr[mid]==num){
            return mid;
        }
        else{
            return -1;
        }
    }

    if(arr[mid]==num){
        return mid;
    }

    if (arr[mid>num]){
        high=mid-1;
        return binarySearch(arr,low,high,num);
    }
    if(arr[mid]<num){
        low=mid+1;
        return binarySearch(arr,low,high,num);
    }
}

int main(){
    int result, num,arr[]={2,4,7,9,11,13,20,21};
    printf("enter a number to find in given array : \n");
    scanf("%d",&num);
    result=binarySearch(arr,0,7,num);
    if(result!=-1){
        printf("%d is found in the given array ar index %d",num,result);
    
    }
    else{
        printf("%d is not found in the given array",num);
    }
}




//Stack push pop

#include <stdio.h>
void push(int s[],int top){
printf("enter the element you want to enter in stack : ");
scanf("%d",&s[top]);
}
void pop(int s[], int top){
int x;
x=s[top];
printf("poped element is %d",x);
}
void display(int s[], int top){
printf("\n the stack is : \n");
for(int i=top;i>=0;i--){
printf("%d",s[i]);
}
}
int main(){
int n,i,choice,top=-1;
printf("enter the size of stack :");
scanf("%d",&n);
int s[n];
for(int j=1;j<=1;){
printf("\n enter 1 to push\n enter 2 to pop\n enter 3 to display\nenter 4 to exit\n");
scanf("%d",&choice);
switch (choice){
case 1:{
if(top==n-1){
printf("overflow");
}
else{
top++;
push(s,top);
}
break;
}
case 2: {
if(top==-1){
printf("underflow");
}
else{
pop(s,top);
top--;
}

break;
}
case 3:{
if(top==-1){
printf("stack is empty");
}
else{
display(s,top);
}
break;
}
case 4: break;
}
}
return 0;
}


//Queue enqueue and dequeue

#include <stdio.h>

void enqueue(int arr[], int front, int back, int n){

    if(back==n){
        printf("queue id full");

    }
    int num;
    printf("enter the number you want to add in queue : ");
    scanf("%d",&num);
    arr[back]=num;
    
}

void dequeue(int arr[], int front, int back){
    if(front==back){
        printf("queue id empty");
    }
    printf("dequeued element id %d",arr[front]);
    

}

void show(int arr[],int front, int back){
    if(front==back){
        printf("queue has no element to show");
    }
    for(int i=front;i<back;i++){
        printf("%d \n",arr[i]);
    }
}

void main(){
    int n=50; 
    int arr[n];
    int front=0;
    int back=0;
   

    for(;;){
         int c;

    printf("enter 1 to enqueue\n enter 2 to dequeue\n enter 3 to display queue\n enter 4 to exit");
    scanf("%d",&c);
        switch(c){
        case 1:{
            enqueue(arr,front,back,n);
            back=back+1;
            break;
        }
        case 2: {dequeue(arr,front,back);
        front=front+1;
                break;
        }

        case 3: {show(arr,front,back);
                break;
        }

        default: break;
    }
    if (c==4){
        break;
    }
    }
}


//Creating single linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
int age;
struct node *ptr;
};
int main(){
struct node *head=NULL;
struct node *one=NULL;
struct node *two=NULL;
struct node *three=NULL;
head=(struct node *)malloc(sizeof(struct node));
one=(struct node *)malloc(sizeof(struct node));
two=(struct node *)malloc(sizeof(struct node));
three=(struct node *)malloc(sizeof(struct node));
head->age=45;
head ->ptr=one;
one->age=56;
one->ptr=two;
two->age=32;
two->ptr=three;
three->age=33;
three->ptr=NULL;
printf("%d\n",head->age);
printf("%d\n",one->age);
printf("%d\n",two->age);
printf("%d",three->age);

}


//adding node at beginning in single link list

#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *ptr;
};
void main(){
struct node *head;
struct node *one;
struct node *two;
struct node *add_at_beginning;
head=(struct node *)malloc(sizeof(struct node));
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
add_at_beginning=malloc(sizeof(struct node));
head->data=54;
head->ptr=one;
one->data=45;
one->ptr=two;
two->data=78;
two->ptr=NULL;
//adding node at beginning
add_at_beginning->data=98;
add_at_beginning->ptr=head;
printf("%d\n",add_at_beginning->data);
printf("%d\n",head->data);
printf("%d\n",one->data);
printf("%d\n",two->data);
}



// inserting node at ending in single link list
#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *ptr;
};
void main(){
struct node *head;
struct node *one;
struct node *two;
struct node *add_at_end;
head=(struct node *)malloc(sizeof(struct node));
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
add_at_end=malloc(sizeof(struct node));
head->data=54;
head->ptr=one;
one->data=45;
one->ptr=two;
two->data=78;
two->ptr=NULL;
//adding node at end
two->ptr=add_at_end;
add_at_end->data=98;
add_at_end->ptr=NULL;
printf("%d\n",head->data);
printf("%d\n",one->data);
printf("%d\n",two->data);
printf("%d\n",add_at_end->data);
}


//Deleting first node of sigle link list

#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *ptr;
};
void main(){
struct node *head;
struct node *one;
struct node *two;
head=malloc(sizeof(struct node));
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
head->data=54;
head->ptr=one;
one->data=45;
one->ptr=two;
two->data=78;
two->ptr=NULL;
//deletion of first node
struct node *del=head;
head=head->ptr;
del->ptr=NULL;
//printing linked list
struct node *temp=head;
while (temp!=NULL){
printf("%d\n",temp->data);
temp=temp->ptr;
}
}

//deleting last node of single link list
#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *ptr;
};
void main(){
struct node *head;
struct node *one;
struct node *two;
head=malloc(sizeof(struct node));
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
head->data=54;
head->ptr=one;
one->data=45;
one->ptr=two;
two->data=78;
two->ptr=NULL;
//deletion of first node
struct node *del=head;
struct node *q;
while(del->ptr!=NULL){
q=del;
del=del->ptr;
}
q->ptr=NULL;
//printing linked list
struct node *temp=head;
while (temp!=NULL){
printf("%d\n",temp->data);
temp=temp->ptr;
}
}






//inserting a node in beginnig of doubly link list
#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *prev;
struct node *next;
};
void main(){
struct node *head;
struct node *one;
struct node *two;
head=(struct node *)malloc(sizeof(struct node));
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
head->data=67;
head->prev=NULL;
head->next=one;
one->data=89;
one->prev=head;
one->next=two;
two->data=21;
two->prev=one;
two->next=NULL;
// inserting node at beginning;
struct node*new;
new=malloc(sizeof(struct node));
new->data=88;
new->next=head;
new->prev=NULL;
head->prev=new;
struct node *temp=new;
// for counting nodes
int counter=0;
while(temp!=NULL){
printf("%d\n", temp->data);
temp=temp->next;
counter++;
}
printf("number of nodes are : %d",counter);
}


//deleting a node in between of doubly link list

#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *prev;
struct node *next;
};
void main(){
struct node *head;
struct node *one;
struct node *two;
struct node *three;
struct node *four;
head=malloc(sizeof(struct node));
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
three=malloc(sizeof(struct node));
four=malloc(sizeof(struct node));
head->data=8;
head->prev=NULL;
head->next=one;
one->data=9;
one->prev=head;
one->next=two;
two->data=3;
two->prev=one;
two->next=three;
three->data=99;
three->prev=two;
three->next=four;
four->data=44;
four->prev=three;
four->next=NULL;
//deleting third node;
int n;
printf("enter the number of node you want to delete :");
scanf("%d",&n);
if(n==1){
head=head->next;
}

else if(n==5){
struct node *pre=head;
struct node *q;
while(pre->next!=NULL){
q=pre;
pre=pre->next;
}
q->next=NULL;
pre->prev=NULL;
}

else{
struct node *pre=head;
struct node *next;
for(int i=1;i<n-1;i++){
pre=pre->next;
}
struct node *del=head;
for(int j=1; j<n;j++){
del=del->next;
}
struct node *end=head;
for(int k=1; k<n+1;k++){
end=end->next;
}
pre->next=end;
end->prev=pre;
del->prev=NULL;
del->next=NULL;
}

//printimg linked list
struct node *temp=head;
while(temp!=NULL){
printf("%d \n",temp->data);
temp=temp->next;
}

}

binary search tree
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node* left;
    struct node* right;
};
int maxDepth(struct node* node)
{
    if (node == NULL)
    return 0;
    else
    {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
struct node* newNode(int data)
{
    struct node* node= (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printf("Height of tree is %d", maxDepth(root));
    getchar();
    return 0;
}



//mirror image of binary tree
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void mirror(struct Node* node)
{
    if (node == NULL)
        return;
    else 
    {
        struct Node* temp;
        mirror(node->left);
        mirror(node->right);
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}
void inOrder(struct Node* node)
{
    if (node == NULL)
        return;
    inOrder(node->left);
    printf("%d ", node->data);
    inOrder(node->right);
}
int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printf("Inorder traversal of the constructed" " tree is \n");
    inOrder(root);
    mirror(root);
    printf("\nInorder traversal of the mirror tree" " is \n");
    inOrder(root);
    return 0;
}






practice apart from project


creating a singly linked list 


#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

void create(int n, struct node *head){
    struct node *temp;
    struct node *newNode;
    int i;
    int data;
    printf("enter the data in first node / head node :");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;

    temp=head;
    for (int i=2;i<=n;i++){
        newNode=malloc(sizeof(struct node));
        printf("enter the data in %d node : ",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;
    }

}


void transverse(struct node *head){
    struct node *temp;
    temp=head;
    printf("the data in list is: \n");
    while (temp!=NULL){
        printf("data is %d\n", temp->data);
        temp=temp->next;
    }
}

void main(){
    struct node *head=malloc(sizeof(struct node));
    int n;
    printf("enter the number of nodes in the list :");
    scanf("%d",&n);
    create(n,head);
    transverse(head);
}





//creating a binary tree and preorder traversal

#include <stdio.h>
#include <malloc.h>


struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data){
    struct node *n=malloc(sizeof(struct node));
    printf("enter the data in node: ");
    n->data=data;
    n->left=NULL;
    n->right=NULL;


    return n;
}

void preorder(struct node *root){
    if(root!=NULL){
        printf("\n %d\n",root->data);
        preorder(root->left);
        preorder(root->right);
        
    }

}


void main(){
    
    struct node *root= malloc (sizeof(struct node));
    int data;
    printf("enter the data in root :");
    scanf("%d",&data);
    root->data=data;
    root->left=NULL;
    root->right=NULL;

    struct node *p1=create(45);
    struct node *p2=create(99);
    struct node *p3=create(56);
    struct node *p4=create(22);

    root->left=p1;
    root->right=p2;
    p1->right=p4;
    p1->left=p3;

    preorder(root);

}






tree and post order

#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

};


struct node *create(int data){
    struct node *n=malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
}



void post(struct node *root){
    if (root !=NULL){
        post(root->left);
        post(root->right);
        printf("\n%d\n",root->data);
    }
}

void main(){
    
    struct node *root= malloc (sizeof(struct node));
    int data;
    printf("enter the data in root :");
    scanf("%d",&data);
    root->data=data;
    root->left=NULL;
    root->right=NULL;

    struct node *p1=create(45);
    struct node *p2=create(99);
    struct node *p3=create(56);
    struct node *p4=create(22);

    root->left=p1;
    root->right=p2;
    p1->right=p4;
    p1->left=p3;

    post(root);

}





tree and inorder

#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

};


struct node *create(int data){
    struct node *n=malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}


void inorder(struct node *root){
    if (root!=NULL){
    inorder(root->left);
    printf("\n%d\n",root->data);
    inorder(root->right);
    }


}

void main(){
    
    struct node *root= malloc (sizeof(struct node));
    int data;
    printf("enter the data in root :");
    scanf("%d",&data);
    root->data=data;
    root->left=NULL;
    root->right=NULL;

    struct node *p1=create(45);
    struct node *p2=create(99);
    struct node *p3=create(56);
    struct node *p4=create(22);

    root->left=p1;
    root->right=p2;
    p1->right=p4;
    p1->left=p3;

    inorder(root);

}



// binary search tree

#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};


//creating a node function
struct node *create (int data){

    struct node *n=malloc(sizeof(struct node));
    n->data=data;
    n->right=NULL;
    n->left=NULL;

    return n;
    
}

//inorder transversal in binary search tree

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("\n %d \n",root->data);
        inorder(root->right);
    }
}

// searching in binary search tree

void search(int data,struct node *root){
    if(root==NULL){
        printf("key not found");
        exit(0);
    }

    while(root!=NULL){
        if(data==root->data){
            printf("key found ");
            exit(0);
        }
        else if (data>root->data){
            search(data,root->right);
        }
        else if(data<root->data){
            search(data,root->left);
        }

    }
}




//-----****---****----****-----
// insertion code
//-----****---****---***------

void insertion(struct node *root, int data){
    if(root!=NULL){
        struct node *temp=root;
        if(data==root->data){
            printf("value already exist");
        }
        if(data > root->data){
            if(root->right==NULL){
                struct node *newNode=create(data);
                root->right=newNode;
            }
            else{
                insertion(root->right,data);
            }

        }
        else if(data< root->data){
            if(root->left==NULL){
                struct node *newNode=create(data);
                root->left=newNode;
            }
            else{
                insertion(root->left,data);
            }

        }
    } 

}



//main function


void main(){
    struct node *root= malloc(sizeof(struct node));
    root->data=5;
    struct node *p1=create(2);
    struct node *p2=create(4);
    struct node *p3=create(6);
    struct node *p4=create(8);
    struct node *p5=create(1);
    struct node *p6=create(9);


    root->left=p2;
    root->right=p4;
    p2->left=p5;
    p5->right=p1;
    p4->right=p6;
    p4->left=p3;
    

    //traversal before
    inorder(root);

    // calling insertion
    insertion(root,3);

    //traversal after
    inorder(root);


    
}




reverse array using recursion

#include <stdio.h>

void swap(int arr[], int i, int n){
    int temp=arr[i];
    arr[i]=arr[n];
    arr[n]=temp;
}

void reverse(int arr[],int i,int n){

    if (i>=n) {
        return;
    }
    
    swap(arr,i,n);
    reverse(arr,i+1,n-1);
        
   
}


void main(){
    int arr[]={1,2,3,4,5,6};
    int n=5;
    reverse(arr,0,n);
    for (int i=0; i<=n;i++){
        printf("%d \n",arr[i]);
    }

}