#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;


    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<< temp -> data;
        head = temp -> next;
        if(temp != NULL)
            cout<<" -> ";
    }
}

int main()
{
     //Statical Creation:
    // Node n1(1);
    // Node *heads = &n1;
    // Node n2(2);
    // n1.next = &n2;
    // cout<<heads->data;

    //Dynamical Creation:
    // Node *ni = new Node(10);
    // Node *headd = ni;
    // Node *nl = new Node(20);
    // ni->next = nl;


    //Testing Linked List:
    Node n1(1);
    Node *heads = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(heads);
}
