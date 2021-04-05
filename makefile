
all.exe:test.c sum.c fun.h
	gcc test.c sum.c fun.h -o all.exe

run:all.exe
	all.exe
