# Definición de variables
CC = g++
CFLAGS = -Wall -Wextra -std=c++11
INCLUDE_DIR = include
SRC_DIR = src
OBJ_DIR = obj

# Lista de archivos .h y .cpp
HEADERS = $(wildcard $(INCLUDE_DIR)/*.h)
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
MAIN = principal.cpp

# Objetos generados
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))
MAIN_OBJ = $(OBJ_DIR)/principal.o

# Nombre del ejecutable
EXECUTABLE = principal

# Reglas de construcción
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES) $(MAIN_OBJ)
	@echo "Compilado Hecho!"
	@$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@echo "Compilando $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

$(MAIN_OBJ): $(MAIN) $(HEADERS)
	@echo "Compilando $(MAIN)..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Clean Hecho!"
	@rm -rf $(OBJ_DIR) $(EXECUTABLE) && mkdir obj

.PHONY: clean
