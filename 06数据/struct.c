
#include <stdio.h>
#include <stdlib.h>

// 可以使用（.）来调用结构体元素 eg. struct student {  int class  } a; printf("%d",a.class)
// 定义链表节点的结构体
struct Node {
    int data; // 数据域，用于存储节点的数据
    struct Node* next; // 指针域，用于指向链表中的下一个节点
};

// 创建一个新的节点，并初始化其数据
struct Node* createNode(int data) {
    // 动态分配内存空间给新的节点
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // 如果内存分配失败，则打印错误信息并退出程序
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    // 初始化新节点的数据
    newNode->data = data;
    // 初始化新节点的指针域为NULL，表示当前节点是链表的末尾
    newNode->next = NULL;
    // 返回新创建的节点
    return newNode;
}

// 在链表的末尾添加一个新节点
void appendNode(struct Node** head, int data) {
    // 创建一个新节点
    struct Node* newNode = createNode(data);
    // 如果链表为空，则新节点即为链表的头节点
    if (*head == NULL) {
        *head = newNode;
    } else {
        // 如果链表不为空，则遍历链表直到找到最后一个节点
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // 将最后一个节点的next指针指向新节点，完成添加操作
        temp->next = newNode;
    }
}

// 打印链表中的所有元素
void printList(struct Node* head) {
    // 声明一个临时节点指针，用于遍历链表
    struct Node* temp = head;
    // 遍历链表，直到到达链表末尾（即节点指针为NULL）
    while (temp != NULL) {
        // 打印当前节点的数据
        printf("%d -> ", temp->data);
        // 移动临时节点指针到下一个节点
        temp = temp->next;
    }
    // 打印链表末尾标识
    printf("NULL\n");
}

// 释放链表占用的内存
void freeList(struct Node* head) {
    // 声明一个临时节点指针，用于在释放内存时暂存节点指针
    struct Node* temp;
    // 遍历链表，直到链表为空
    while (head != NULL) {
        // 暂存当前节点的指针
        temp = head;
        // 移动头指针到下一个节点
        head = head->next;
        // 释放当前节点占用的内存
        free(temp);
    }
}

int main() {
    // 初始化链表头指针为NULL，表示链表为空
    struct Node* head = NULL;

    // 向链表中添加元素
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);

    // 打印链表
    printList(head);

    // 释放链表占用的内存
    freeList(head);

    // 程序结束
    return 0;
}



