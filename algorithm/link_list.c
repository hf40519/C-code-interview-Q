#include <stdio.h>
#include <stdlib.h>

// 定義鏈表的節點結構
struct Node
{
    int data;
    struct Node *next;
};

void append(struct Node **head_ptr, int data)
{
    // create new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    // append new node to tail
    if (*head_ptr == NULL)
    {
        *head_ptr = new_node;
        return;
    }

    struct Node *last = *head_ptr;
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
}

void insert(struct Node **head_ptr, int position, int data)
{
    // create new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (position == 0)
    {
        new_node->next = *head_ptr;
        *head_ptr = new_node;
        return;
    }

    struct Node *curr = *head_ptr, *prev = NULL;
    int index = 0;
    while (index < position && curr != NULL)
    {
        prev = curr;
        curr = curr->next;
        index++;
    }
    if (index != position)
    {
        printf("Invalid insert position: %d \n", position);
        return;
    }
    prev->next = new_node;
    new_node->next = curr;
}

void delete(struct Node **head_ptr, int position)
{
    if (position == 0 && *head_ptr != NULL)
    {
        struct Node *next = (*head_ptr)->next;
        free(*head_ptr);  // free malloc
        *head_ptr = next; // new head
        return;
    }

    struct Node *curr = *head_ptr, *prev = NULL;
    int index = 0;
    while (index < position && curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
        index++;
    }
    if (index != position)
    {
        printf("Invalid delete position: %d \n", position);
        return;
    }
    prev->next = curr->next;
    free(curr); // free malloc
}

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

// 測試主函數
int main()
{
    // link list head pointer
    struct Node *head = NULL;
    // 插入節點
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    printf("Link list after append: ");
    printList(head);

    insert(&head, 1, -1);
    printf("Link list after insert: ");
    printList(head);

    // 刪除節點
    delete (&head, 1);
    printf("Link list after delete: ");
    printList(head);

    return 0;
}