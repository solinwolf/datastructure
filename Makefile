all:
	@cd List && make
	@cd Stack && make
.PHONY:clean
clean:
	@cd $(shell pwd)/List && make clean
	@cd $(shell pwd)/Stack && make clean

