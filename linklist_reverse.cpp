#include <cstdio>
#include <cstdlib>
#include <print>

struct node {
    int data;
    node *next;
};
node *head = nullptr;
void insert(int data) {
    node *temp = new node();
    temp->data = data;
    temp->next = nullptr;
    if (head == nullptr) {
        head = temp;
    }
    else {temp->next = head; head = temp;}
}
void print() {
    node *current_position = head;
    while (current_position != nullptr) {
        printf("%d ", current_position->data);
        current_position = current_position->next;
    }
    printf("\n");
}
void reverse() {
    node *next_next = head->next->next;
    node *next = head->next;
    node *current = head;
    while (next_next != nullptr) {
        next->next = current;
        current = next;
        next = next_next;
        next_next = next_next->next;
    }
    next->next = current;
    head->next = nullptr;
    head = next;
}
void recursion_reverse(node *position) {
    if (position->next == nullptr) {
        head = position;
        return;
    }
    recursion_reverse(position->next);
    position->next->next = position;
    position->next = nullptr;
}
int main() {
    insert(2);
    insert(4);
    insert(6);
    insert(9);
    print();
    recursion_reverse(head);
    print();
    return 0;
}