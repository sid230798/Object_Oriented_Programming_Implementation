#ifndef file_add_H
#define file_add_H

#include <fstream>
#include <iostream>
#include <cstdlib>
#include "bus_func.h"
#include "truck_func.h"
#include "list_func.h"




template <typename T>
class add_files{

      private:
            std::ifstream fi;
            linked_list<T>* head;
            linked_list<T>* ptr;
            linked_list<T> app;
            std::string vehicle_name;
            std::string color;
            int mileage,topSpeed,gears;
            int load,vol,seats; 
      public:
            add_files();
            add_files(char* file_name);
            linked_list<T>* read();
            //linked_list<T>* add_To_list(T obj,int count);


};

#endif
