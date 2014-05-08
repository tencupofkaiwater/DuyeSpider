BASEDIR:=.

PRONAME:= libspider_crawler.so

include larbin.make

MF:= -shared -fPIC

SUBDIR=utils interf fetch

all: config.h options.h subdirs-all crawler

subdirs-all:
	for d in $(SUBDIR); do (cd $$d; $(MAKE) all); done

clean distclean dep prof debug: options.h config.h 
	for d in $(SUBDIR); do (cd $$d; $(MAKE) $@-in); done
	$(MAKE) $@-here

crawler: $(ABS-UTILS-OBJ) $(ABS-FETCH-OBJ) $(ABS-INTERF-OBJ) $(ABS-MAIN-OBJ)
	$(CXX) $(MF) $(CXXFLAGS) -o $(PRONAME) $(ABS-UTILS-OBJ) \
	$(ABS-FETCH-OBJ) $(ABS-INTERF-OBJ) $(ABS-MAIN-OBJ) ../adns/libadns.a
	cp $(PRONAME) ../

dep-here:
	makedepend -f- -I$(BASEDIR) -Y *.cc 2> /dev/null > .depend

redo-here: $(PRONAME)

debug-here: CXXFLAGS += -g
debug-here: MF += -g
debug-here: redo-here

prof-here: CXXFLAGS += -pg -DPROF
prof-here: MF += -pg
prof-here: redo-here

clean-here:
	$(RM) *~ *.o
	$(RM) *.bak
	$(RM) $(PRONAME)

distclean-here: clean-here
	$(RM) options.h config.h .depend $(PRONAME)

options.h: ../options.h
	cp ../options.h .

config.h: ../config.h
	cp ../config.h .
