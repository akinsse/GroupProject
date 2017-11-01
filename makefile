###############################################################################
# Authors:     Sean Patrick Akins
#              Edmund Dea
#              Trevor Rollins
#              Nathan Villegas
# Group:       35
# Class:       CS162-400
# Date:        10/27/2017
# Description: Makefile for the TIc Tac Toe group project
###############################################################################

# Compiler
CC = g++

# Source Files
FILES = rpsMain.cpp
FILES += inputValidation.cpp
FILES += paper.cpp
FILES += rock.cpp
FILES += RPSGame.cpp
FILES += scissors.cpp
FILES += tool.cpp

# Create list of names for object files
OBJ = $(FILES:.cpp=.o)

# Target name
TARGET = tictactoe.bin

# Compiler Flags
CFLAGS = -Wall -pedantic -std=c++11 -lboost_regex

# Default compile command
default: clean all

all: $(OBJ)
	@echo "CC	$(TARGET)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Create object files from OBJ list
# Reference: This method inspired by the TA makefile example
%.o: %.cpp
	@echo "CC	$^"
	@$(CC) $(CFLAGS) -c $^
	
# Clean unnecessary files
clean: $(CLEAN)
	@echo "RM	*.o"
	@echo "RM	$(TARGET)"
	@rm -f *.o $(TARGET)