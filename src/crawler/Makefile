.PHONY : all crash clean cleanall

BASEDIR=src
include src/larbin.make

dep:
	(cd src; $(MAKE) dep)

all debug prof:
	(cd adns; $(MAKE))
	(cd src; $(MAKE) $@)
	mkdir ../lib -p
	cp libspider_crawler.so ../lib 

clean: cleanhere
	(cd src; $(MAKE) clean)
	(cd adns; $(MAKE) clean)
	$(RM) libspider_crawler.so

cleanall: cleanhere
	(cd src; $(MAKE) distclean)
	(cd adns; $(MAKE) distclean)
	$(RM) config.h config.make .depend
	$(RM) libspider_crawler.so

cleanhere:
	$(RM) *~ doc/*~
	$(RM) core gmon.out
	$(RM) fifo*
	$(RM) hashtable.* dupfile.*
