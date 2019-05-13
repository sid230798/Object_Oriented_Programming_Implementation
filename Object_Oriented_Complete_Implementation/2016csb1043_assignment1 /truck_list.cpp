#include <cstdlib>
#include <string>
#include "truck_func.h"
//#include "list_func.h"
#include <iostream>
using namespace std;


truck::truck(){}

truck::truck(string nm,string color,int mileage,int topSpeed,int gears,int load,int vol)
       :car(nm,color,mileage,topSpeed,gears)
      {
         max_load_capacity=load;
         max_vol_capacity=vol;
           
      }

void truck::print(truck obj){

     cout<<"The truck name is : "<<vehicle_name<<endl;
     cout<<"The color of truck is :"<<vehicle_color<<endl;
     cout<<"Mileage of truck is :"<<vehicle_mileage<<"Km/li"<<endl;
     cout<<"Top_speed of truck :"<<vehicle_topSpeed<<"Km/hr"<<endl;
     cout<<"No. of gears in truck :"<<vehicle_gears<<endl;
     cout<<"Maximum load capacity :"<<max_load_capacity<<"Kg"<<endl;
     cout<<"Maximum volume capacity :"<<max_vol_capacity<<"li"<<endl;
     cout<<"\n\n"; 
}

void truck::set_head(linked_list<truck>* obj){
     head_truck=obj;
}

int truck::compare(truck obj1,truck obj2){

     return obj1.vehicle_name.compare(obj2.vehicle_name);

}

void truck::get_details(string nm,truck& ob1){
    string color;
    int mileage,topSpeed,gears,load,vol;
    cout<<"Please enter details of car : \n";
    cout<<"Enter color : ";
    cin>>color;
    cout<<"Enter mileage,topspeed,gears,max_load and max_vol : \n";
    cin>>mileage>>topSpeed>>gears>>load>>vol;
    truck obj(nm,color,mileage,topSpeed,gears,load,vol);
    ob1=obj; 
}


int truck::get_vol(truck k){
    return k.max_vol_capacity;
}

string truck::get_name(truck k){
       return k.vehicle_name;

}

truck::~truck(){}


