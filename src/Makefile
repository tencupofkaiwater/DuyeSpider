all: spider_crawler spider_analyser spider_plugin spider_app

clean:
	$(MAKE) -C crawler clean
	$(MAKE) -C analyser clean
	$(MAKE) -C plugin clean
	$(MAKE) -C app clean

cleanall:
	$(MAKE) -C crawler cleanall
	$(MAKE) -C analyser cleanall
	$(MAKE) -C plugin cleanall
	$(MAKE) -C app cleanall
	rm ./lib -rf
	rm ./bin -rf

spider_crawler:
	$(MAKE) -C crawler

spider_analyser:
	$(MAKE) -C analyser

spider_plugin:
	$(MAKE) -C plugin	

spider_app:
	$(MAKE) -C app	
