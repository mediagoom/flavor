include config.mk

MAKE=make

prefix ?= /usr/local

builddir=build/out
abs_builddir := $(abspath $(builddir))
hdir=$(abspath ./)

all: config.mk
	$(MAKE) -C "./build" builddir="$(abs_builddir)"

binaries=$(prefix)/bin/flavor

$(binaries): $(prefix)/bin/%: $(builddir)/%
	cp $< $@



install: $(binaries) 

uninstall: 
	rm $(binaries)

clean:
	rm flavor.Makefile
	rm -rf build
	rm config.mk
	rm flavor.target.mk


#$(directories)

# $(directories), uninstall, clean, .PHONY, etc.
