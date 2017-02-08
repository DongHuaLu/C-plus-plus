CPP = g++
SOURCES := $(wildcard *.cpp)
TARGETLIST :=$(patsubst %.cpp,%,$(SOURCES))

all:$(TARGETLIST)
*.exe : *.cpp
	$(CPP) -o ./comp/$@ $^
