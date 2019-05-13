#include <iostream>
#include <ctype.h>
#include <cstring>
#include <math.h>
#include <fstream>
#include <cstdio>
#include "fun_sort.h"
#include "file_add.h"
#include "bus_func.h"
/*#include "car_func.h"
#include "list_func.h"
#include "truck_func.h"
*/

using namespace std;


int main(){

     char n;
     char f_truck[]="./truck.txt";
     add_files<truck> truck_obj(f_truck);
     
     linked_list<truck>* head_truck=truck_obj.read();
     linked_list<truck>* ptr_truck=head_truck;
     
   
     func<truck> obj1;
     
     ptr_truck=obj1.sort_func(head_truck);
     truck k=(ptr_truck)->get_obj(ptr_truck);
           
     
   
     char f_car[]="./car.txt";
     add_files<car> car_obj(f_car);
     linked_list<car>* head_car=car_obj.read();
     linked_list<car>* ptr_car=head_car;
  

     char f_bus[]="./bus.txt";
     add_files<bus> bus_obj(f_bus);
     linked_list<bus>* head_bus=bus_obj.read();
     linked_list<bus>* ptr_bus=head_bus;
     func<bus> obj2;
     ptr_bus=obj2.sort_func(head_bus);
   
     cout<<"-------------------Welcome to our Transport Management System!!!-------------------------------\n\n";
     while(1){
    
     cout<<"The different functionalites you can perfom are :\n\n";
     cout<<"1.ADD vehicle to the system \n";
     cout<<"2.Remove vehicle from the system\n";
     cout<<"3.Book vehicle from the system\n";
     cout<<"4.UnBook vehicle from the system\n";
     cout<<"5.Count the minimum number of trucks to carry certain amount of watermelons\n";
     cout<<"6.Count minimum no. bus or cars for given number of seats\n";
     cout<<"7.Print details of vehicle you want\n";
     cout<<"8.Exit from the application\n";
     cout<<"Please enter the no. which funcionality you want to enter : ";
     cin>>n;
     cout<<"\n\n";
     string type,name,nameOfcar;
      int count=0,st1=0,ps=0;
      car ob4;
      bus ob5;
      truck ob6;
      linked_list<car>* ser1;
      linked_list<bus>* ser2;
      linked_list<truck>* ser3;
      
     switch(n){
            
         case '1':
              cout<<"You have entered in add functionality \n";
              cout<<"Please enter type of vehicle you want to enter from car,bus or truck : ";
             // string type,name;
              cin>>type;    
              if(type.compare("car") == 0 || type.compare("Car") == 0 || type.compare("CAR") == 0){
                 cout<<"Please Enter the name of car : ";
                 cin>>name;
                
                 linked_list<car>* ser=ptr_car->search(ptr_car,name,ps);
                 if(ser != NULL)
                    cout<<"This car is already in system.\n\n";
                 
                else{
                    car ob;
                    ob.get_details(name,ob);
                    head_car=ptr_car->add_front(ob,head_car);
                    car ob123=head_car->get_obj(head_car);
                    cout<<"Your car has been successfully added .\n";
                    
                    ptr_car=head_car;
                 }

              }
               else if(type.compare("bus") == 0 || type.compare("Bus") == 0 || type.compare("BUS") == 0){
                 cout<<"Please Enter the name of bus : ";
                 cin>>name;
                                 
                 linked_list<bus>* ser=ptr_bus->search(ptr_bus,name,ps);
                 if(ser != NULL)
                    cout<<"This bus is already in system.\n\n";
                 else{
                    bus ob;
                    ob.get_details(name,ob);
                    head_bus=ptr_bus->add_front(ob,head_bus);
                    cout<<"Your bus has been successfully added .\n";
                    ptr_bus=head_bus;
                 }

              }
              else if(type.compare("truck") == 0 || type.compare("Truck") == 0 || type.compare("TRUCK") == 0){
                 cout<<"Please Enter the name of truck : ";
                 cin>>name;
                 
                 linked_list<truck>* ser=ptr_truck->search(ptr_truck,name,ps);
                 if(ser != NULL)
                    cout<<"This truck is already in system.\n\n";
                 else{
                    truck ob;
                    ob.get_details(name,ob);
                    head_truck=ptr_truck->add_front(ob,head_truck);
                    cout<<"Your truck has been successfully added .\n";
                    ptr_truck=head_truck;
                 }

              }

              break;

            case '2':
                 cout<<"Enter type of vehicle to be removed. \n";
                 //string type,name;
                 cin>>type;
                 if(type.compare("car") == 0 || type.compare("Car") == 0 || type.compare("CAR") == 0){
                 cout<<"Please Enter the name of car : ";
                 cin>>name;
                 
                 linked_list<car>* ser=ptr_car->search(head_car,name,ps);
                 if(ser == NULL)
                    cout<<"This car name is not present\n";
                 else if(ser == head_car && ps==1){
                         ptr_car->remove_node(head_car,ser,ser);
                         cout<<"Your car is sucessfully removed.\n\n";
                         ptr_car=head_car;
                         
                 }else{
                       ptr_car->remove_node(head_car,ser,ser->node_next);
                         cout<<"Your car is sucessfully removed.\n\n";
                       ptr_car=head_car;
                       
                 }
                 }
                 else if(type.compare("bus") == 0 || type.compare("Bus") == 0 || type.compare("BUS") == 0){
                 cout<<"Please Enter the name of bus : ";
                 cin>>name;
                 linked_list<bus>* ser=ptr_bus->search(ptr_bus,name,ps);
                 if(ser == NULL)
                    cout<<"This bus name is not present\n";
                  else if(ser == head_bus && ps==1){
                         ptr_bus->remove_node(head_bus,ser,ser);
                         cout<<"Your bus is sucessfully removed.\n\n";
                         ptr_bus=head_bus;
                 }else{
                       ptr_bus->remove_node(head_bus,ser,ser->node_next);
                         cout<<"Your bus is sucessfully removed.\n\n";
                       ptr_bus=head_bus;
                 }
                 } 
                 else if(type.compare("truck") == 0 || type.compare("Truck") == 0 || type.compare("TRUCK") == 0){
                 cout<<"Please Enter the name of truck : ";
                 cin>>name;
                 linked_list<truck>* ser=ptr_truck->search(ptr_truck,name,ps);
                 if(ser == NULL)
                    cout<<"This truck name is not present\n";
               else if(ser == head_truck && ps==1){
                         ptr_truck->remove_node(head_truck,ser,ser);
                         cout<<"Your truck is sucessfully removed.\n\n";
                         ptr_truck=head_truck;
                 }else{
                       ptr_truck->remove_node(head_truck,ser,ser->node_next);
                         cout<<"Your truck is sucessfully removed.\n\n";
                       ptr_truck=head_truck;
                 }
                    
                 }
                 break;
             case '3':
                     cout<<"Enter type of vehicle to be booked. \n";
                 //string type,name;
                 cin>>type;
                 if(type.compare("car") == 0 || type.compare("Car") == 0 || type.compare("CAR") == 0){
                 cout<<"Please Enter the name of car : ";
                 cin>>name;
                 linked_list<car>* ser=ptr_car->search(ptr_car,name,ps);
                 car ob1;
                 if(ser == NULL)
                    cout<<"This car name is not present\n";
                 else if(ser ==head_car && ps==1){
                   ob1=ser->get_obj(ser);   
                   if(ser->status(ser) == 1)
                       cout<<"Car is already booked\n\n";
                    else{
                    
                       ser->book(ser);
                       cout<<"Your car is successfully booked and its details are : \n";
                       ob1.print(ob1);
                    }

                 }
                 else{
                    
                    ob1=ser->node_next->get_obj(ser->node_next);
                    if(ser->status(ser) == 1)
                       cout<<"Car is already booked\n\n";
                    else{
                       ser->book(ser);
                       cout<<"Your car is successfully booked and its details are : \n";
                       ob1.print(ob1);
                    }}
                    ptr_car=head_car;
                 }
                 else if(type.compare("bus") == 0 || type.compare("Bus") == 0 || type.compare("BUS") == 0){
                 cout<<"Please Enter the name of bus : ";
                 cin>>name;
                 linked_list<bus>* ser=ptr_bus->search(ptr_bus,name,ps);
                 bus ob1;
                 if(ser == NULL)
                    cout<<"This bus name is not present\n\n";
                 else if(ser ==head_bus && ps==1){
                   ob1=ser->get_obj(ser);   
                   if(ser->status(ser) == 1)
                       cout<<"Bus is already booked\n\n";
                    else{
                       ser->book(ser);
                       cout<<"Your bus is successfully booked and its details are : \n";
                       ob1.print(ob1);
                    }

                 }
                 else{
                    ob1=ser->node_next->get_obj(ser->node_next);
                    if(ser->status(ser) == 1)
                       cout<<"Bus is already booked\n\n";
                    else{
                       ser->book(ser);
                       cout<<"Your bus is successfully booked and its details are : \n";
                       ob1.print(ob1);
                    }}
                    ptr_bus=head_bus;
                 } 
                 else if(type.compare("truck") == 0 || type.compare("Truck") == 0 || type.compare("TRUCK") == 0){
                 cout<<"Please Enter the name of truck : ";
                 cin>>name;
                 linked_list<truck>* ser=ptr_truck->search(ptr_truck,name,ps);
                 truck ob1;
                 if(ser == NULL)
                    cout<<"This truck name is not present\n";
                 else if(ser ==head_truck && ps==1){
                   ob1=ser->get_obj(ser);   
                   if(ser->status(ser) == 1)
                       cout<<"Truck is already booked\n\n";
                    else{
                       ser->book(ser);
                       cout<<"Your truck is successfully booked and its details are : \n";
                       ob1.print(ob1);
                    }

                 }
                 else{
                    ob1=ser->node_next->get_obj(ser->node_next);
                    if(ser->status(ser) == 1)
                       cout<<"Truck is already booked\n\n";
                    else{
                       ser->book(ser);
                       cout<<"Your truck is successfully booked and its details are : \n";
                       ob1.print(ob1);
                    }}
                    ptr_truck=head_truck;
                    
                 }
                 break;
        
                 case '4':
                       cout<<"Enter type of vehicle to be unbooked. \n";
                 //string type,name;
                 cin>>type;
                 if(type.compare("car") == 0 || type.compare("Car") == 0 || type.compare("CAR") == 0){
                 cout<<"Please Enter the name of car : ";
                 cin>>name;
                 linked_list<car>* ser=ptr_car->search(ptr_car,name,ps);
                 car ob1;
                 if(ser == NULL)
                    cout<<"This car name is not present\n";
                 else if(ser == head_car && ps==1){
                       ob1=ser->get_obj(ser);
                    if(ser->status(ser) == 1){
                       ser->book_status=0;
                       cout<<"Your car has been successfully unbooked.\n\n";
                    }
                    else
                       cout<<"Car is not booked\n\n";
                  }
                  else{
                    ob1=ser->node_next->get_obj(ser->node_next);
                    if(ser->status(ser) == 1){
                       ser->book_status=0;
                       cout<<"Your car has been successfully unbooked.\n\n";
                    }
                    else
                       cout<<"Car is not booked\n\n";
                  }
                    ptr_car=head_car;
                 }
                 else if(type.compare("bus") == 0 || type.compare("Bus") == 0 || type.compare("BUS") == 0){
                 cout<<"Please Enter the name of bus : ";
                 cin>>name;
                 linked_list<bus>* ser=ptr_bus->search(ptr_bus,name,ps);
                 bus ob1;
                 if(ser == NULL)
                    cout<<"This bus name is not present\n";
                 else if(ser == head_bus && ps==1){
                       ob1=ser->get_obj(ser);
                    if(ser->status(ser) == 1){
                       ser->book_status=0;
                       cout<<"Your bus has been successfully unbooked.\n\n";
                    }
                    else
                       cout<<"Bus is not booked\n\n";
                  }
                  else{
                    ob1=ser->node_next->get_obj(ser->node_next);
                    if(ser->status(ser) == 1){
                       ser->book_status=0;
                       cout<<"Your bus has been successfully unbooked.\n\n";
                    }
                    else
                       cout<<"Bus is not booked\n\n";
                  }
                    ptr_bus=head_bus;
                 } 
                 else if(type.compare("truck") == 0 || type.compare("Truck") == 0 || type.compare("TRUCK") == 0){
                 cout<<"Please Enter the name of truck : ";
                 cin>>name;
                 linked_list<truck>* ser=ptr_truck->search(ptr_truck,name,ps);
                 truck ob1;
                 if(ser == NULL)
                    cout<<"This truck name is not present\n";
                 else if(ser == head_truck && ps==1){
                       ob1=ser->get_obj(ser);
                    if(ser->status(ser) == 1){
                       ser->book_status=0;
                       cout<<"Your truck has been successfully unbooked.\n\n";
                    }
                    else
                       cout<<"Truck is not booked\n";
                  }
                  else{
                    ob1=ser->node_next->get_obj(ser->node_next);
                    if(ser->status(ser) == 1){
                       ser->book_status=0;
                       cout<<"Your truck has been successfully unbooked.\n\n";
                    }
                    else
                       cout<<"Truck is not booked\n";
                  }
                    ptr_truck=head_truck;
                 }
                 break;
                case '5':
                     cout<<"Enter number of watermelons to carry : ";
                     int wa;
                     cin>>wa;
                     obj1.min_trucks(ptr_truck,wa);
                     break;
                case '6':
                     cout<<"Enter total number of seats : ";
                     int seats;
                     cin>>seats;
                     st1=obj2.min_vehicle(ptr_bus,seats);
                     if(st1==1){
                        if(head_car != NULL){
                        car ob12=head_car->get_obj(head_car);
                        nameOfcar=ob12.get_name(ob12);
                        cout<<" "<<nameOfcar<<"\n\n";
                        }
                      }
                      break;

                case '7':
                     cout<<"Enter name of vehicle to search : ";
                     cin>>name;
                     ser1=ptr_car->search(ptr_car,name,ps);
                     if(ser1 != NULL){
                         if(ser1 == head_car && ps==1)
                             ob4=head_car->get_obj(head_car);
                         else{
                             ob4=ser1->node_next->get_obj(ser1->node_next);
                         } 
                         count=1;
                         ob4.print(ob4);
                     }
                     if(count == 0){                      
                     ser2=ptr_bus->search(ptr_bus,name,ps);
                      if(ser2 != NULL){
                         if(ser2 == head_bus && ps==1)
                             ob5=head_bus->get_obj(head_bus);
                         else{
                             ob5=ser2->node_next->get_obj(ser2->node_next);
                         } 
                         count=1;
                         ob5.print(ob5);
                     }              
                    }
                    if(count == 0){
                     ser3=ptr_truck->search(ptr_truck,name,ps);
                      if(ser3 != NULL){
                         if(ser3 == head_truck && ps == 1)
                             ob6=head_truck->get_obj(head_truck);
                         else{
                             ob6=ser3->node_next->get_obj(ser3->node_next);
                         } 
                         count=1;
                         ob6.print(ob6);
                     }
                   }
                    if(count == 0)
                       cout<<"No vehicle of this name is present\n\n";
                     break;

              
                 case '8':
                      return 0;
                 
                      
                 default:
                    if(isdigit(n))
                    cout<<"Invalid number\n\n";
                    else{
                       cout<<"You have to enter a number\n\n";
                       }                                 
                 

    }

    }   

    
}
