compile: MU_Person.h student.h LL_test.cpp
	 g++ LL_test.cpp LL.cpp NODE.cpp -o inh
run: inh
	 ./inh


clean: inh
	 rm inh
