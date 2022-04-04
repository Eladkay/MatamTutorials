prog: a.o b.o c.o
	gcc a.o b.o c.o -o prog 

a.o: a.c a.h b.h c.h
	gcc -c a.c
b.o: b.c a.h b.h c.h
	gcc -c b.c
c.o: c.c a.h b.h c.h
	gcc -c c.c

clean:
	rm a.o b.o c.o prog
