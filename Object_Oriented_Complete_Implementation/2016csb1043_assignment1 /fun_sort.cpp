#include "fun_sort.h"
#include <iostream>
using namespace std;

template<typename T>
linked_list<T>* func<T>::sort_func(linked_list<T>* head){

          linked_list<T>* ptr1=head;
          linked_list<T>* ptr2=head;
          linked_list<T> obj;
          T ob1,ob2;
    
          while(ptr1 != NULL){
                while(ptr2->node_next != NULL){
                      ob1=ptr2->get_obj(ptr2);
                      ob2=ptr2->node_next->get_obj(ptr2->node_next);
        
                      if(ob1.get_vol(ob1) < ob2.get_vol(ob2))
                         obj.swap(ptr2,ptr2->node_next);
                         ptr2=ptr2->node_next;
                }
                      ptr1=ptr1->node_next;
                      ptr2=head;
          }
      //    ob1=head->get_obj(head);
     //     ob1.print(ob1);

          return head;

}

template<typename T>
void func<T>::min_trucks(linked_list<T>* head,int n){
     linked_list<T>* ptr1=head;
     //linked_list<T>* ptr2=head;
     T ob1;
     int sum=0,count=0,i;
     vector<string> name;
     
         while(ptr1->node_next != NULL){
               ob1=ptr1->get_obj(ptr1);
               sum += ob1.get_vol(ob1);
               name.push_back(ob1.get_name(ob1));
               count++;
               if(sum > 30*n)
                  break;
               ptr1=ptr1->node_next;
         }
      cout<<"Min_truck available are : ";
      cout<<count<<"\n";
      cout<<"Names are : "<<"\n";
      for(i=0;i<count;i++)
          cout<<name.at(i)<<" ";

      cout<<"\n\n";

}

template<typename T>
int func<T>::min_vehicle(linked_list<T>* head,int n){
     linked_list<T>* ptr1=head;
     //linked_list<T>* ptr2=head;
     T ob1;
      int sum=0,count=0,i,set_flag=0,sum1=0;
     vector<string> name;
     
         while(ptr1->node_next != NULL){
               ob1=ptr1->get_obj(ptr1);
                if(sum > n ){
                   if(n+sum1-sum <=5){
                      name.pop_back();
                      set_flag=1;
                    }
                  break;
                }
               sum1=ob1.get_vol(ob1);
               sum += ob1.get_vol(ob1);
               name.push_back(ob1.get_name(ob1));
               count++;
              
               ptr1=ptr1->node_next;
         }
      cout<<"Min_vehicles available are : ";
      cout<<count<<"\n";
      cout<<"Names are : "<<"\n";
      for(i=0;i<name.size();i++)
          cout<<name.at(i)<<" ";
      if(set_flag == 0)
         cout<<"\n\n";
      
    
      return set_flag;

}


template class func<truck>;
template class func<bus>;
template class func<car>;


