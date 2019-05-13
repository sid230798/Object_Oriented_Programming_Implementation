#include "file_add.h"


template <typename T>
add_files<T>::add_files(){}

template <typename T>
add_files<T>::add_files(char* file_name){

     fi.open(file_name);

}

template <typename T>
linked_list<T>* add_files<T>::read(){
      

      int count=0;
      //size_type n;
      T* obj=new T;
     // car* obj;   
     
      while(1){
         fi>>vehicle_name>>color>>mileage>>topSpeed>>gears;
         if(fi.eof())
            break;
         if(vehicle_name.compare("\n") == 0)
            continue;
         count++;
         if(vehicle_name.find("Car",0) == 0){
            car* a=new car(vehicle_name,color,mileage,topSpeed,gears);
            obj=dynamic_cast<T*>(a);
             
         }
         else if(vehicle_name.find("Truck",0) == 0){
              fi>>load>>vol;   
              truck* b=new truck(vehicle_name,color,mileage,topSpeed,gears,load,vol);
              obj=dynamic_cast<T*>(b);
         }
         else if(vehicle_name.find("Bus",0) == 0){
              fi>>seats;
              bus* c=new bus(vehicle_name,color,mileage,topSpeed,gears,seats);
              obj=dynamic_cast<T*>(c);
         }
         if(count == 1){
            head=app.add_node(*obj);
            ptr=head;
            (*obj).set_head(head);
           // obj.print(app.get_obj(head));

         }
         else{
            ptr->node_next = app.add_node(*obj);
         //  obj.print(app.get_obj(head->node_next));
            ptr=ptr->node_next;
 
         }
                    
   //      list<car> l1(obj);
         /*else if(car_name.length() <2)
              break;*/
         
         //cout<<car_name<<" "<<color<<" "<<a<<" "<<b<<" "<<c<<"\n";
            

    }
  
    fi.close();
    return head;



}



template class add_files<truck>;
template class add_files<car>;
template class add_files<bus>;

