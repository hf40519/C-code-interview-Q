#include <stdio.h>
#include <stdlib.h>

// 定義鏈表的節點結構
struct Node
{
    int data;
    struct Node *next;
};

// 函數原型
void insert(struct Node **head_ref, int new_data);
void deleteNode(struct Node **head_ref, int key);
void printList(struct Node *node);

// 插入新節點到鏈表的開頭
void insert(struct Node **head_ref, int new_data)
{
    // 分配新節點的內存空間
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    // 將資料存入新節點
    new_node->data = new_data;
    // 將新節點的 next 指向目前的鏈表頭部
    new_node->next = *head_ref;
    // 更新鏈表的頭部為新節點
    *head_ref = new_node;
}

// 從鏈表中刪除指定元素
void deleteNode(struct Node **head_ref, int key)
{
    // 暫存目前的節點與前一個節點
    struct Node *temp = *head_ref, *prev = NULL;
    // 如果目前節點不是空的且目前節點的資料不是要刪除的元素，繼續找下一個節點
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    // 如果找到了要刪除的節點
    if (temp != NULL)
    {
        // 將前一個節點的 next 指向目前節點的下一個節點
        if (prev != NULL)
        {
            prev->next = temp->next;
        }
        // 釋放目前節點的內存空間
        free(temp);
    }
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
    // 定義鏈表頭部指針
    struct Node *head = NULL;

    // 插入節點
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);

    printf("Link list: ");
    printList(head);

    // 刪除節點
    deleteNode(&head, 2);

    printf("Link list (delete 2): ");
    printList(head);

    return 0;
}