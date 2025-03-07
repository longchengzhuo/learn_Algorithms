#include <cstdio>
#include <cstdlib>
#include <print>

struct node {
    int data;
    node *next;
};
node *head = nullptr;
void print(node *head) {
    if (head != nullptr) {
        printf("%d ", head->data);
        print(head->next);
    }
}
void reverse_print(node *head) {
    if (head != nullptr) {
        reverse_print(head->next);
        printf("%d ", head->data);
    }
}
void insert(int num) {
    node *temp = new node();
    temp->data = num;
    temp->next = nullptr;
    if (head == nullptr) {
        head = temp;
    }else {
        temp->next = head;
        head = temp;
    }
}
int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print(head);
    reverse_print(head);
    return 0;
}