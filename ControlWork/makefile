all: ControlWork.obj

ControlWork.obj: ControlWork.cpp
	cl ControlWork.cpp
	copy ControlWork.exe B:\GitHub\bin
	del B:\GitHub\bin\ControlWork.exe
clean:
	del ControlWork.exe
	del ControlWork.obj