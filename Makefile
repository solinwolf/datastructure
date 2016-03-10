all:
	@cd List && make
	@cd Stack && make
	@cd DLinkList && make 
	@cd Sort && make 

.PHONY:clean
clean:
	@cd $(shell pwd)/List && make clean
	@cd $(shell pwd)/Stack && make clean
	@cd $(shell pwd)/DLinkList && make clean
	
	@cd $(shell pwd)/Sort && make clean
