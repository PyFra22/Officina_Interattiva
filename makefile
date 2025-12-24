.SILENT:

CXX = g++ # Compilatore C++
CXXFLAGS = -std=c++20 -W -g # Compila usando lo standard C++17 con tutti i warning avvisi attivi e informazioni di debug
INCLUDE = -Iinclude # Cartella degli header files

# FILE SORGENTI

MAIN = main.cpp # File principale
SRC = $(wildcard source/*.cpp) # Tutti i file cpp nella cartella src.
OBJ = $(SRC:.cpp=.o) # File oggetto corrispondenti

# TARGET PRINCIPALE

TARGET = officina.exe # Nome dell'eseguibile finale
all: $(TARGET) # DEFAULT: Compila l'eseguibile

# LINK FINALE

$(TARGET): $(OBJ) $(MAIN)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ $^

# nome_eseguibile: elenco_file_oggetto file_principale
# 	Usa il compilatore $(CXX) con le opzioni $(CXXFLAGS) e $(INCLUDE) per creare l'eseguibile $@ (nome_eseguibile) dai file oggetto $^ (elenco_file_oggetto e file_principale).

# REGOLA DI COMPILAZIONE PER I FILE OGGETTO

%.o: %.cpp # Per ottenere un file .o, bisogna avere il corrispondente file .cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@
# Usa il compilatore $(CXX) con le opzioni $(CXXFLAGS) e $(INCLUDE) per compilare il file sorgente $< (%.cpp) in un file oggetto $@ (%.o).

# COMANDI UTILI

run: all # Compila ed esegue l'eseguibile
	./$(TARGET)

clean_unix: # Pulisce i file oggetto e l'eseguibile
	rm -f $(OBJ) $(TARGET)


.PHONY: all run clean_win clean_unix # Specifica che questi target non sono file reali