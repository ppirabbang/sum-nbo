all: sum-nbo

sum-nbo: sum-nbo.c
	g++ -o sum-nbo sum-nbo.c

clean:
	rm -f sum-nbo
	rm -f *.bin
