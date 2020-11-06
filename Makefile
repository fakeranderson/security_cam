CXX = g++
CXXFLAGS =-std=c++11 `pkg-config --cflags opencv`
LIB = `pkg-config --libs opencv`

all:
	$(CXX) $(CXXFLAGS) $(LIB) main.cpp camera/CameraManager.cpp enums/ModuleEnums.h -o main

#cam_control: main.o
#	$(CXX) $(CXXFLAGS) -o cam_control main.o

#main.o: main.cpp camera/CameraManager.h
#	$(CXX) $(CXXFLAGS) $(LIB) -o main.o main.cpp camera/CameraManager.cpp

.PHONY: clean
clean:
	rm -f *.o main
