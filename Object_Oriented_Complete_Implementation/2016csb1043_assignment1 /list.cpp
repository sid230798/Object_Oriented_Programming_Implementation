#include "bus_func.h"
#include "truck_func.h"
#include <iostream>
#include <cstdlib>
using namespace std;


template<typename T>
linked_list<T>::linked_list(){
                book_status=0;
}


template<typename T>
linked_list<T>* linked_list<T>::add_node(T obj){

       linked_list<T>* node=new linked_list<T>;           //Dynamically allocating memory for each object of car
       node->a=obj;
       node->node_next=NULL;
       return node;

}

template<typename T>
T linked_list<T>::get_obj(linked_list<T>* node){
     return node->a;       
}

template<typename T>
linked_list<T>* linked_list<T>::add_front(T obj,linked_list<T>* head){
       linked_list<T>* element = new linked_list<T>;
       element->a = obj;
       element->node_next = head;
       head=element;
       return element;
       
} 

template<typename T>
void linked_list<T>::remove_node(linked_list<T>*& head,linked_list<T>*& prev,linked_list<T>*& node){
       if(prev == head && node == head){
           linked_list<T>* temp =head;
           head=head->node_next;
           
           delete(temp);
           
         
       }
      else{
       prev->node_next=node->node_next;
       delete(node);
      
     }

}
template<typename T>
void linked_list<T>::swap(linked_list<T>* ptr1,linked_list<T>* ptr2){
     T k=ptr1->a;
     ptr1->a=ptr2->a;
     ptr2->a=k;
}
template<typename T>
void linked_list<T>::book(linked_list<T>*& k){
     k->book_status=1;
}
template<typename T>
int linked_list<T>::status(linked_list<T>*& k){
    return k->book_status;
}


template<typename T>
linked_list<T>* linked_list<T>::search(linked_list<T>* head,string name,int& s){
        linked_list<T>* ptr=head;
        
        //linked_list<T>* ptr1=head;
        T obj=ptr->get_obj(ptr);
        
        string n=obj.get_name(obj);
        if(n.compare(name) == 0){
           s=1;
           return ptr;
        }
     
        while(ptr->node_next != NULL){
               obj=(ptr->node_next)->get_obj(ptr->node_next);
               n=obj.get_name(obj);
             
               if(n.compare(name) == 0){
                     
                  return ptr;
               }
              ptr=ptr->node_next;
               

        }        
       return NULL;
        

}

template<typename T>
bool linked_list<T>::isEmpty(linked_list<T>* head){      //Operator overloading "==" sign for checking linked list is empty or not
       return head == NULL;

}





template class linked_list<car>;
template class linked_list<bus>;
template class linked_list<truck>;


