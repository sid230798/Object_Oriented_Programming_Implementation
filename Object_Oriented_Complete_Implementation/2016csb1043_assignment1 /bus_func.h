#ifndef bus_func_H
#define bus_func_H

#include "car_func.h"
#include <string>

class bus: public car{

      private:
            int seats;
            linked_list<bus>* head_bus;
      public:
           bus();
           bus(std::string nm,std::string color,int mileage,int topSpeed,int gears,int No_ofSeats);    //Constructor declarartion with 6 attributes
           virtual void print(bus obj);
           virtual void set_head(linked_list<bus>* obj);
           virtual int compare(bus obj1,bus obj2);
           virtual void get_details(std::string nm,bus& ob);
        
           int get_vol(bus k);
           std::string get_name(bus k);
           virtual ~bus();

};


#endif
