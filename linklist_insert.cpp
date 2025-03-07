#include <cstdio>
#include <cstdlib>

struct node {
    int data;
    node *next;
};
node *head = nullptr;
void insert(int data,int n) {
    node *temp1 = new node();
    temp1->data = data;
    temp1->next = nullptr;
    if (n == 1) {
        temp1->next = head;
        head = temp1;
        return;
    }
    node *temp2 = head;
    for (int i = 0; i < n-2; i++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void print() {
    node *temp = head;
    while (temp != nullptr) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
};

int main(){
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
    return 0;
}
