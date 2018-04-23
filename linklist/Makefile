all:main.o linklist.o
	gcc -o linklist $^
%.o:%.c
	gcc -g -c $^
.PHONY:clean
clean:
	rm *.o linklist
