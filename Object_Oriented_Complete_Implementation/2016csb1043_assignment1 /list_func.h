#ifndef list_func_H
#define list_func_H
  

#include "car_func.h"
#include <cstdlib>
#include <string>

template<typename T>
class linked_list{

      private:
            T a;
            
      public:
             int book_status;
             linked_list<T>* node_next;
             linked_list();
             T get_obj(linked_list<T>* node);
             linked_list<T>* add_node(T obj);
             linked_list<T>* add_front(T obj,linked_list<T>* head);
             void remove_node(linked_list<T>*& head,linked_list<T>*& node,linked_list<T>*& prev);
             void swap(linked_list<T>* ptr1,linked_list<T>* ptr2);
             void book(linked_list<T>*& k);
             int status(linked_list<T>*& k);
             linked_list<T>* search(linked_list<T>* head,std::string name,int& s);
             bool isEmpty(linked_list<T>* head);

};

//#include "list.cpp"
#endif
