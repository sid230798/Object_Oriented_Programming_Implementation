#ifndef fun_sort_H
#define fun_sort_H


#include "car_func.h"
#include "bus_func.h"
#include "truck_func.h"
#include <vector>

template<typename T>
class func{

      public:
           linked_list<T>* sort_func(linked_list<T>* head);
           void min_trucks(linked_list<T>* head,int n);
           int min_vehicle(linked_list<T>* head,int n);
};


#endif
