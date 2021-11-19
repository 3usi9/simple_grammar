.PHONY: build
configure:
	rm -rf ./build/*
	cd build && cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
build:
	cd build && make
