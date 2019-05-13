#include "bus_func.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

bus::bus(){}

bus::bus(string nm,string color,int mileage,int topSpeed,int gears,int No_ofSeats)
     :car(nm,color,mileage,topSpeed,gears)
     {
      seats=No_ofSeats;
}

void bus::print(bus obj){

     cout<<"The bus name is : "<<vehicle_name<<endl;
     cout<<"The color of bus is :"<<vehicle_color<<endl;
     cout<<"Mileage of bus is :"<<vehicle_mileage<<"Km/li"<<endl;
     cout<<"Top_speed of bus :"<<vehicle_topSpeed<<"Km/hr"<<endl;
     cout<<"No. of gears in bus :"<<vehicle_gears<<endl; 
     cout<<"Total no of seats in bus :"<<seats<<endl;
     cout<<"\n\n";

}

void bus::set_head(linked_list<bus>* obj){
     head_bus=obj;
}

int bus::compare(bus obj1,bus obj2){
    return obj1.vehicle_name.compare(obj2.vehicle_name);

}

void bus::get_details(string nm,bus& ob){
    string color;
    int mileage,topSpeed,gears,max_seats;
    cout<<"Please enter details of car : \n";
    cout<<"Enter color : ";
    cin>>color;
    cout<<"Enter mileage,topspeed,gears and max_seats : ";
    cin>>mileage>>topSpeed>>gears>>max_seats;
    bus obj(nm,color,mileage,topSpeed,gears,max_seats);
    ob=obj;
}




int bus::get_vol(bus k){
    return k.seats;
}

string bus::get_name(bus k){
       return k.vehicle_name;

}


bus::~bus(){}
