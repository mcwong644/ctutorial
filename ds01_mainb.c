// https://youtu.be/B31LgI4Y4DQ?si=j7b9GX6_61yDtcqO
// Data Structures - Full Course Using C and C++
// freeCodeCamp.org stop: 01:14:48
// Linked List

#include <stdio.h>
#include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// use typedef
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

struct Node* head; //global var
void Insert(Node** ptr, int x);
void Print();

int main()
{
    //add by wmc to test declare newNode and pointer instead of using malloc()
    // and pointer *nptr assign to newNode
    struct Node newNode;
    newNode.data=66;
    newNode.next=NULL;
    Node* nptr = &newNode;
    // nptr=&newNode;
    printf("nptr.data : %d\n", nptr->data);
    //end add by wmc

    head = NULL;
    printf("How many numbers: \n");
    int n,i,x;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter the number x: \n");
        scanf("%d", &x);
        Insert(&head, x);
        Print(head);

    }
}
void Insert(struct Node** head, int x)
{
    // code 1:08:14 excluded struct Node and cannot compile. must use "struct Node" to reference Node
    // c++ can use New and not use malloc() ie 
    // struct Node* temp = New Node;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp->data = x;
    temp->next = NULL;
    if(*head !=NULL) temp->next=*head;
    *head=temp;
}
void Print(struct Node* head)
{
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL)
    {
        printf(" %d", temp->data);
        temp= temp->next;
    }
    printf("\n");
}
