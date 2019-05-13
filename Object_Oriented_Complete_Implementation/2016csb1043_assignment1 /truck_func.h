#ifndef  truck_func_H
#define  truck_func_H


#include "car_func.h"

class truck : public car{

      private:
            int max_load_capacity;
            int max_vol_capacity;
            linked_list<truck>* head_truck;
   
      public:
            truck();
            truck(std::string nm,std::string color,int mileage,int topSpeed,int gears,int load,int vol);
            virtual void print(truck obj);
            virtual void set_head(linked_list<truck>* obj);
            virtual int compare(truck obj1,truck obj2);
            virtual void get_details(std::string nm,truck& ob);
      
            int get_vol(truck k);
            std::string get_name(truck k);
            //int min_trucks(int n,linked_list<truck>* head);
           // virtual void swap(linked_list<truck>* obj1,linked_list<truck>* obj2);
            virtual ~truck();


};

#endif


