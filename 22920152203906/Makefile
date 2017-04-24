main:main.o xingzhuang.o
	gcc main.o xingzhuang.o -o main
main.o:main.c
	gcc -c main.c
calculator.o:xingzhuang.c
	gcc -c xingzhuang.c

clean:
	rm main *.o
