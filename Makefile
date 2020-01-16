ROOT_DIR:=$(CURDIR)

main.o : main.cpp
	g++ -fpic -c monkey.cpp
	g++ -shared -o monkey.so monkey.o
	g++ -fpic -c lion.cpp
	g++ -shared -o lion.so lion.o
	g++ -fpic -c bear.cpp
	g++ -shared -o bear.so bear.o
	g++ -fpic -c deer.cpp
	g++ -shared -o deer.so deer.o
	g++ -L$(CURDIR) -o main main.cpp monkey.so lion.so deer.so bear.so

clean :
	find . -name "*.o" -type f | xargs rm
	find . -name "*.so" -type f | xargs rm
	rm main