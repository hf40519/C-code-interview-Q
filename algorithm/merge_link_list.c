#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0]))

// 定義鏈表的節點結構
struct Node
{
    int data;
    struct Node *next;
};

// 打印鏈表的所有節點
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    // link list head pointer
    struct Node *l1_head = NULL, *l2_head = NULL;
    int l1_val[] = {1, 7, 8}, l2_val[] = {2, 4, 6};

    // create link list 1
    struct Node *curr = NULL;
    for (int i = 0; i < SIZEOF(l1_val); i++)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = l1_val[i];
        new_node->next = NULL;
        if (l1_head == NULL)
            l1_head = new_node;
        else
            curr->next = new_node;
        curr = new_node;
    }
    printf("Link list 1: ");
    printList(l1_head);

    // create link list 2
    curr = NULL;
    for (int i = 0; i < SIZEOF(l2_val); i++)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = l2_val[i];
        new_node->next = NULL;
        if (l2_head == NULL)
            l2_head = new_node;
        else
            curr->next = new_node;
        curr = new_node;
    }
    printf("Link list 2: ");
    printList(l2_head);

    // merge 2 link list
    struct Node *new_head = NULL;
    curr = NULL;
    while (l1_head != NULL && l2_head != NULL)
    {
        if (l1_head->data < l2_head->data)
        {
            if (new_head == NULL)
                new_head = l1_head;
            else
                curr->next = l1_head;
            curr = l1_head;
            l1_head = l1_head->next;
        }
        else
        {
            if (new_head == NULL)
                new_head = l2_head;
            else
                curr->next = l2_head;
            curr = l2_head;
            l2_head = l2_head->next;
        }
    }
    // append residual link list
    if (l1_head != NULL)
        curr->next = l1_head;
    else if (l2_head != NULL)
        curr->next = l2_head;

    printf("Merge link: ");
    printList(new_head);

    return 0;
}