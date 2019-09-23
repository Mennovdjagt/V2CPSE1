#############################################################################
#
# Project Makefile
#
# (c) Wouter van Ooijen (www.voti.nl) 2016
#
# This file is in the public domain.
# 
#############################################################################

# source & header files in this project (main.cpp is automatically assumed)

HEADERS += note.hpp
HEADERS += note_player.hpp
HEADERS += fur_elise.hpp
HEADERS += melody.hpp

HEADERS += note_player_print.hpp
SOURCES += note_player_print.cpp

HEADERS += note_player_gpio.hpp
SOURCES += note_player_gpio.cpp

HEADERS += rtttl_player.hpp
SOURCES += rtttl_player.cpp

# other places to look for files for this project
SEARCH  := 

# set REATIVE to the next higher directory 
# and defer to the Makefile.due there
RELATIVE := $(RELATIVE)../
include $(RELATIVE)Makefile.due

.PHONY: generator melody

generator: 
	make -f Maakfile && ./generator.elf

melody:
	make -f Maakfile && ./generator.elf > melody1.hpp

generator.elf : generator.o note_player_print.o rtttl_player.o
	g++ generator.o note_player_print.o rtttl_player.o -o generator.elf

generator.o : generator.cpp note_player_print.hpp rtttl_player.hpp note_player.hpp note.hpp
	g++ -c generator.cpp -o generator.o

#rtttl_player.o : rtttl_player.cpp rtttl_player.hpp note_player.hpp note.hpp
#	g++ -c rtttl_player.cpp -o rtttl_player.o

#note_player_print.o : note_player_print.cpp note_player_print.hpp note_player.hpp note.hpp
#	g++ -c note_player_print.cpp -o note_player_print.o
