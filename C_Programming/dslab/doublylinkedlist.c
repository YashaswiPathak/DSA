#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int data)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    if (*head != NULL)
    {
        newNode->next = *head;
        (*head)->prev = newNode;
    }

    *head = newNode;
}

// Insert at end
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    struct Node *temp;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(struct Node **head, int data)
{
    struct Node *temp = *head;

    while (temp != NULL && temp->data != data)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Node not found\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    printf("Node deleted successfully\n");
}

void displayForward(struct Node *head)
{
    struct Node *temp = head;

    printf("Forward: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
void displayBackward(struct Node *head)
{
    struct Node *temp = head;

    if (temp == NULL)
        return;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    printf("Backward: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    printf("\n");
}
int main()
{
    struct Node *head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    displayForward(head);
    displayBackward(head);

    insertAtBeginning(&head, 5);

    printf("\nAfter inserting 5 at beginning:\n");
    displayForward(head);

    deleteNode(&head, 20);

    printf("\nAfter deleting 20:\n");
    displayForward(head);
    displayBackward(head);

    return 0;
}