#include <bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;     
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for (int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head -> next;
    }
    cout << endl;
}

Node* deleteHead(Node*head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

int main() {
    vector<int> arr = {12,4,5,7};
    Node* head = convertArr2LL(arr);
    head = deleteTail(head);
    print(head);
}