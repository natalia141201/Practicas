ejecutar : bin/programa
	./bin/programa

bin/programa : src/main.cpp
	g++ src/main.cpp -o bin/programa -I include

receta3 :
	@echo "Hola mundo"

