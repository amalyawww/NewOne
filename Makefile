SHELL       := /bin/bash

all: love

love:
	g++ -Wall -o love love.cpp

install:
	cp love ~/bin/

clean:
	rm -f love
