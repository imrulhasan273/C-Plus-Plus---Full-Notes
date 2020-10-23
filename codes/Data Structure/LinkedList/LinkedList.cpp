// Insertion Operation
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

/*** -------============INSERT OPERATION STARTS===========------------- ***/
//Insert at start...
void insertStart(int newData)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

//Insert at end...
void insertEnd(int newData)
{
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    temp = head;

    while (temp != NULL && temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

//Insert at Indexed (Middle)...
void insertIndex(int newData, int pos)
{
    int i;
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode != NULL)
    {
        newNode->data = newData; // Link data part
        newNode->next = NULL;
        temp = head;

        for (i = 1; i <= pos - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
                break;
        }
        if (temp != NULL)
        {
            /* Link address part of new node */
            newNode->next = temp->next;
            /* Link address part of n-1 node */
            temp->next = newNode;
        }
    }
}

/*** -------============INSERT OPERATION ENDS===========------------- ***/

/*** -------============DELETE OPERATION STARTS===========------------- ***/
void deleteFirstNode()
{
    struct Node *toDelete;
    if (head != NULL)
    {
        toDelete = head;
        head = head->next;
        free(toDelete);
    }
}
/*** -------============DELETE OPERATION ENDS===========------------- ***/

void display()
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    insertStart(3);
    insertStart(1);
    insertStart(7);
    insertStart(2);
    insertStart(9);
    insertEnd(22);
    insertEnd(91);
    insertIndex(30, 1);
    insertIndex(44, 2);

    cout << "The linked list is: ";
    display();

    cout << endl
         << "The linked list is: ";
    deleteFirstNode();
    display();

    cout << endl
         << "The linked list is: ";
    deleteFirstNode();
    display();

    return 0;
}