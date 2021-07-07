#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<< temp -> data;
        temp = temp -> next;
        if(temp != NULL)
            cout<<" -> ";
    }
}

Node* userInput(){  //O(n)
    int data;
    cin>>data;
    Node *head = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp -> next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin>>data;
    }
    return head;
}

Node* userInput_Optimized(){ //O(1)
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

Node* insertNodeat(Node *head, int i, int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(i == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    while(temp!=NULL && count < i-1){
        temp = temp->next;
        count++;
    }
    //Creating a Temp2 pointer
    // Node *temp2 = temp->next;
    // temp->next = newNode;
    // newNode->next = temp2;

    //Alter w/o Temp2
    newNode->next = temp->next;
    temp->next=newNode;
    return head;
}

Node* deleteNodeat(Node *head, int i){
    int count = 0;
    Node *temp = head;
    if(i == 0){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    while(temp!=NULL && count < i-1){
        temp = temp->next;
        count++;
    }
    //Creating a Temp2 pointer
    Node *temp2 = temp->next;
    Node *temp3 = temp2->next;
    temp->next = temp3;
    delete temp2;
    return head;
}

int main()
{
//  Manual Creation:
    // Statical Creation:
    // Node s1(1);
    // Node *heads = &s1;
    // Node s2(2);
    // s1.next = &s2;
    // cout<<heads->data;

    //Dynamical Creation:
    // Node *d1 = new Node(10);
    // Node *headd = d1;
    // Node *d2 = new Node(20);
    // d1->next = d2;


    //Testing Linked List:
    // Node t1(1);
    // Node *headt1 = &t1;
    // Node t2(2);
    // Node t3(3);
    // Node t4(4);
    // Node t5(5);
    // t1.next = &t2;
    // t2.next = &t3;
    // t3.next = &t4;
    // t4.next = &t5;
    // print(headt1);

    //User Input:
    //Node *head = userInput();
    //print(head);

    //User Input Optimized:
    Node *head = userInput_Optimized();
    print(head);
    head = insertNodeat(head, 0, 15);
    cout<<"\n";
    print(head);
    head = deleteNodeat(head, 0);
    cout<<"\n";
    print(head);
}
