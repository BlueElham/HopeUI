# Set the file
File = ${FILE}

# Set project name
Name = ${NAME}

# Set compiler
CC = gcc

# Flags
Flags = -lopengl32 -lgdi32

# Source Folder
HopeUISrc = ./HopeUI

# Include
Include = ${HopeUISrc}/include

# Set make command
ifeq (${OS},Windows_NT)
	makecmd = mingw32-make
else
	makecmd = make
endif

# Set commands
ifeq (${OS},Windows_NT)
	Flags += -lwinmm
	command = ${CC} ${File} -o ${Name}.exe ${Include} ${HopeUISrc}/libhopeui.a ${Flags}
else
	command = ${CC} ${File} -o ${Name} ${Include} ${HopeUISrc}/libhopeui.a ${Flags}
endif

compile:
	@${command}

build:
	@cd ${HopeUISrc} && ${makecmd}
