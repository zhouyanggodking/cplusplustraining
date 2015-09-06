objects = class_b.o
$(objects):%.o:%.h %.cpp
	g++ -c $^
	cp $(objects) ..
.PHONY: clean
clean:
	-rm -rf *.o *.gch
