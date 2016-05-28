# CloneShell
vas is a clone shell which mimics the functionalities of a normal UNIX shell with some additional features.

Follow the following steps to run the code:
1> Copy the source code ie vas.c in your system, in a known location.
2> Open the location in Terminal and compile the source code using
	
	gcc vas.c -fopenmp

3> Now run the code : ./a.out.
4> First enter the command when prompted: 
	vas> 
5> Then enter the number of copies of process to run on:
	vas> count:
6> Next enter 'p' for parallel or 's' for serial processing.(Any other character other than 'p' will do for serial):
	vas> [p]arallel or [s]equential:
7> Enter the timeout ie the maximum time a process can run when executed serially.
	vas> timeout:
