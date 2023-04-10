#include "header1.h"
#include <iostream>
class Node{
public:
    Producto* prod;
    Node* next = NULL;
Node(Producto* prod_){
    prod = prod_;
}
};
class LinkedList{
public:
    Node* head = NULL;
void agregarAlFinal(Producto* prod){
        Node* last = head;
        Node* node = new Node(prod);
        // en caso de lista vacia
        if(head == NULL){
            node->next = NULL;
            head = node;
        }
        else{
            while(last->next != NULL){
                last = last->next;
            }
            node->next = NULL;
            last->next = node;
            
        }
    }

void eliminarNodo(string id){
        if(head == NULL){
            cout<<"La lista esta vacia"<<endl;
            return;
        }
        Node* node = head;
        Node* anterior = head;
        if(node->prod->getId() == id){
            head = node->next;
            free(node);
            return;
        }
        while (node->prod->getId() != id)
        {
            node = node->next;
        }
        while (anterior->next != node)
        {
            anterior = anterior->next;
        }
        anterior->next = node->next;
        free(node);
    }
void printList(){
    Node* node = head;
    while (node != NULL)
    {
        cout<<node->prod->getInfoProducto();
        node = node->next;
    }
    
}
};