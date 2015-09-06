objects = class_a.o 
libs = class_b.o

main.out: main.o $(objects) $(libs)
	g++ -o main.out $^
class_a.o: %.o : %.h %.cpp
	g++ -c $^ 
	ls
class_b.o: force_look
	#make file sub dir
	cd subdir; $(MAKE) $(MFLAGS)
main.o: main.cpp
	g++ -c main.cpp
.PHONY: clean
clean:
	-rm -rf *.o *.out *.gch
	cd subdir; $(MAKE) clean
force_look:
	true
