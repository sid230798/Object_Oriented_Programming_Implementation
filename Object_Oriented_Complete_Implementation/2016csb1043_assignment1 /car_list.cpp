#include <cstdlib>
#include <string>
#include "car_func.h"
//#include "list_func.h"
#include <iostream>
using namespace std;


car::car(){}

car::car(string nm,string color,int mileage,int topSpeed,int gears){

            vehicle_name=nm;
            vehicle_color=color;
            vehicle_mileage=mileage;
            vehicle_topSpeed=topSpeed;
            vehicle_gears=gears;
           
           // no_seats=5;

}

void car::print(car obj){

     cout<<"The car name is : "<<vehicle_name<<endl;
     cout<<"The color of car is :"<<vehicle_color<<endl;
     cout<<"Mileage of car is :"<<vehicle_mileage<<"Km/li"<<endl;
     cout<<"Top_speed of car :"<<vehicle_topSpeed<<"Km/hr"<<endl;
     cout<<"No. of gears in car :"<<vehicle_gears<<endl;
     cout<<"\n\n"; 
}

void car::set_head(linked_list<car>* obj){
     head_car=obj;
}

int car::compare(car obj1,car obj2){

     return obj1.vehicle_name.compare(obj2.vehicle_name);

}

void car::get_details(string nm,car& ob){
    string color;
    int mileage,topSpeed,gears;
    cout<<"Please enter details of car : \n";
    cout<<"Enter color : ";
    cin>>color;
    cout<<"Enter mileage,topspeed and gears : ";
    cin>>mileage>>topSpeed>>gears;
    car obj(nm,color,mileage,topSpeed,gears);
    ob=obj;
}



int car::get_vol(car k){
    return 0;
}

string car::get_name(car k){
       return k.vehicle_name;

}


car::~car(){}
