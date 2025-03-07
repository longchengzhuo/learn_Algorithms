#include <cstdio>
#include <cstdlib>

struct node {
    int data;
    node *next;
};
node *head = nullptr;
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
void print() {
    node* current_position = head;
    while (current_position != nullptr) {
        printf("%d ", current_position->data);
        current_position = current_position->next;
    }
    printf("\n");
}
void del(const int &position) {
    node* current_position = head;
    int position_num = position;

    if (position_num == 1) {
        current_position = head -> next;
        delete(head);
        head = current_position;
    }else {
        while (position_num - 2 > 0) {
            current_position = current_position -> next;
            --position_num;
        }
        node* temp = (current_position -> next) -> next;
        delete(current_position -> next);
        current_position -> next = temp;
    }
}

int main(){
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    int position;
    printf("Enter the position to be deleted: ");
    scanf("%d", &position);
    del(position);
    print();
    return 0;
}