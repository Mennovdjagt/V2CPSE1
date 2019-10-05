#############################################################################
#
# Project Makefile
#
# (c) Wouter van Ooijen (www.voti.nl) 2016
#
# This file is in the public domain.
# 
#############################################################################

# source files in this project (main.cpp is automatically assumed)
SOURCES := decompressor.asm compressed.asm

# header files in this project
HEADERS := compressor.hpp match.hpp

# other places to look for files for this project
SEARCH  := 

#some way the make clean command wont delete the generator.exe and the generator.o so here is a way
cleaner :
	make clean && rm -f compressed.asm generator.exe generator.o

compressed.asm :
	make generator.exe && ./generator.exe

generator.exe : generator.o
	g++ generator.o -o generator.exe

generator.o : generator.cpp compressor.hpp match.hpp
	g++ -c generator.cpp -o generator.o

# set REATIVE to the next higher directory 
# and defer to the Makefile.due there
RELATIVE := $(RELATIVE)../
include $(RELATIVE)Makefile.due

