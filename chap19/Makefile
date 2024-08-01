app.out : ex_19_3_main.o ex_19_3_sub.o
	gcc ex_19_3_main.o ex_19_3_sub.o -o app.out

ex_19_3_main.o : ex_19_3_main.c
	gcc -c ex_19_3_main.c -o ex_19_3_main.o

ex_19_3_sub.o : ex_19_3_sub.c
	gcc -c ex_19_3_sub.c -o ex_19_3_sub.o

clean : 
	rm -rf *.o app.out