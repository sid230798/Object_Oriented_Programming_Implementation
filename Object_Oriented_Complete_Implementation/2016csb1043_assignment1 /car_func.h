#ifndef car_func_H
#define car_func_H
  
#include "list_func.h"
#include <string>


class car{
      
      private:
            const static int no_seats=5;
            linked_list<car>* head_car;   //Defined private because its not required to get access this 
      protected:                   //Defined protected so that this could be used in inherited class 
            std::string vehicle_name;
            std::string vehicle_color; 
            int vehicle_mileage;
            int vehicle_topSpeed;
            int vehicle_gears;
           
           // linked_list<car>* head;
           // linked_list<car>* tail;
      
      public:
          
            car();
            car(std::string nm,std::string color,int mileage,int topSpeed,int gears);    //Constructor declarartion with 5 attributes
           // void add_vehicle(car obj);
           //  void remove(car obj);
            virtual void print(car obj);
            virtual void set_head(linked_list<car>* obj);
            virtual int compare(car obj1,car obj2);
            virtual void get_details(std::string nm,car& ob);
           
            int get_vol(car k);
            std::string get_name(car k);
            virtual ~car();
};


#endif
