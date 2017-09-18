
SOURCES = $(wildcard src/*.cpp) $(wildcard src/*.c)

include ../../plugin.mk


dist: all
	mkdir -p dist/VultModules
	cp LICENSE* dist/VultModules/
	cp plugin.* dist/VultModules/
	cp -R res dist/VultModules/
