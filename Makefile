CC := g++
CFLAGS := -O3 -Wall
SRC := ./src/main.cc ./src/ChessPiece.cc ./src/Board.cc
OBJ := main.o ChessPiece.o Board.o

cadoge: $(OBJ)
	$(CC) -o cadoge $(OBJ) $(CFLAGS)

ChessPiece.o: ./src/ChessPiece.cc ./headers/ChessPiece.hh
	$(CC) -c ./src/ChessPiece.cc $(CFLAGS)

Board.o: ./src/Board.cc ./headers/Board.hh
	$(CC) -c ./src/Board.cc $(CFLAGS)

main.o: ./src/main.cc
	$(CC) -c ./src/main.cc $(CFLAGS)

clean:
	rm -f *.o cadoge
