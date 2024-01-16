CC := g++

cadoge: ./src/main.o 
	$(CC) ./src/main.o -o cadoge

main.o: ./src/main.cc
	g++ -c ./src/main.cc

clean:
	rm *.o cadoge
