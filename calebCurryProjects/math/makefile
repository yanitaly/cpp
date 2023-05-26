math: math_main.o math_utils.o
	g++ math_main.o math_utils.o -o math 

math_main.o: math_main.cpp 
	g++ -c math_main.cpp

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp


clean: 
	rm *.o math
