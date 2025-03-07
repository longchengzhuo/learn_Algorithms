#include <cstdio>
#include <cstdlib>

struct node {
    int data;
    node *next;
};
void insert(node** head,int x) {
    node *temp = new node();
    temp->data = x;
    temp->next = nullptr;
    if (*head != nullptr) {temp->next = *head;}
    *head = temp;
}
void Print(node *head) {
    printf("list is:");
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int main(){
    node *head = nullptr;
    printf("Enter the number of nodes: \n");
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        printf("Enter the data: \n");
        scanf("%d",&x);
        insert(&head,x);
        Print(head);
    }

    return 0;
}
