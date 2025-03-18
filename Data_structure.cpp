#include <iostream>
using namespace std;

struct node
{
  int value;
  node *next;   
};
node *head =NULL;
void insert_node(int data)
{
    node *Nnode;
    node *last;
    Nnode = new node;
    Nnode -> value = data;

    if (head == NULL)
    {
        head = Nnode;
        Nnode ->next = NULL;
    }
    else 
    {
        last = head;
        while(last->next != NULL)
        {
            last = last -> next;
        }
        last ->next = Nnode;
        Nnode -> next = NULL;
    }
}
void display()
{
    static int cntr =1;
    node *current;
    current = head;
    while(current != NULL)
    {
        cout <<"Value of node number "<<cntr<<" is :"<<current -> value<<endl;
        current = current -> next;
        cntr++;
    }
}
void add_beginning_node(int data)
{
    node *beginning;
    beginning = new node;

    beginning -> next = head;
    beginning -> value = data;
    head = beginning;
}
void delete_beginning_node()
{
    node *firstN;
    firstN = head;
    head = firstN -> next;
    firstN -> next =NULL;
    delete(firstN);
}
int main()
{
    insert_node(1);
    insert_node(12);
    insert_node(123);
    insert_node(1234);

    cout <<"Linked list before editing $"<<endl;
    display();
    cout <<"\n============================"<<endl;

    delete_beginning_node();
    add_beginning_node(111);

    cout <<"Linked list after editing $"<<endl;
    display();
    cout <<"\n============================"<<endl;
}

