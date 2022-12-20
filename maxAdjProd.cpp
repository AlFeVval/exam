#include <iostream> 

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head, int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = (*head);
    (*head) = newNode;
}

void printList(struct Node* head){
    while(head != NULL){
        printf("%d, ",head->data);
        head = head->next;
    }
    cout << "null" << endl;
}

int maxAdjacentProduct(struct Node* head){
    int max = head-> data;
    while(head != NULL){
        if(max < head->data) max = head->data;
        head = head->next;
    }
    return max;
}

int main(){
    int mult;
    // int list[] = {3,6,-2,5};
    // int list[] = {3,6,-2,-5,7,3};
    // int list[] = {5,1,2,3,1,4};
    int list[] = {-23,4,-3,8,-12};
    struct Node* result = NULL;
    // cout << sizeof(list)/sizeof(int) << endl;
    for (int i = 0; i < sizeof(list)/sizeof(int) - 1; i++)
    {
        mult = list[i] * list[i+1];
        push(&result, mult);
        // cout << mult << endl;
    }
    printList(result);
    cout << "Maximun values is: " << maxAdjacentProduct(result) << endl;
    return 0;
}