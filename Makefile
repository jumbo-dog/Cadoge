CC := g++

CFLAGS := -O3 -Wall

cadoge: ./src/main.o  ./src/ChessPiece.o
	$(CC) ./src/main.o ./src/ChessPiece.o -o cadoge $(CFLAGS)

ChessPiece.o: ./src/ChessPiece.cc ./headers/ChessPiece.cc
	$(CC) -c ./src/ChessPiece.cc $(CFLAGS)

main.o: ./src/main.cc
	$(CC) -c ./src/main.cc $(CFLAGS)

clean:
	rm ./src/*.o cadoge
