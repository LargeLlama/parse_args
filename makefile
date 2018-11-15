all: main.o
	@gcc -o args.out main.o

main.o: main.c
	@gcc -c main.c

run:
	@./args.out

clean:
	@rm *.o*
