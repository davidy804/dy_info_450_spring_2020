default: bank

account.o:
	g++ -c account.cpp

checking.o:
	g++ -c checking.cpp

creditcard.o:
	g++ -c creditcard.cpp

savings.o:
	g++ -c savings.cpp

bank: account.o checking.o creditcard.o savings.o
	g++ -o bank main.cpp account.o checking.o creditcard.o savings.o

clean:
	rm -f *.o bank
