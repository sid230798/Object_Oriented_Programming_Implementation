default : output

main.o : sample.cpp fun_sort.h file_add.h bus_func.h
	g++ -c sample.cpp -o main.o

car_list.o : car_list.cpp car_func.h
	g++ -c car_list.cpp -o car_list.o

truck_list.o : truck_list.cpp truck_func.h
	g++ -c truck_list.cpp -o truck_list.o

bus_list.o : bus_list.cpp bus_func.h
	g++ -c bus_list.cpp -o bus_list.o

file_read.o : file_read.cpp file_add.h
	g++ -c file_read.cpp -o file_read.o

fun_sort.o : fun_sort.cpp fun_sort.h
	g++ -c fun_sort.cpp -o fun_sort.o

list.o : list.cpp bus_func.h truck_func.h
	g++ -c list.cpp -o list.o

output : main.o car_list.o truck_list.o bus_list.o file_read.o fun_sort.o list.o
	g++ main.o car_list.o truck_list.o bus_list.o file_read.o fun_sort.o list.o -o output

clean :  main.o car_list.o truck_list.o bus_list.o file_read.o fun_sort.o list.o output
	-rm -f  main.o car_list.o truck_list.o bus_list.o file_read.o fun_sort.o list.o output
	 
	
