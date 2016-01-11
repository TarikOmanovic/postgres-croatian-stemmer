# contrib/croatian-stemmer/Makefile

MODULE_big = croatian-stemmer
OBJS = croatian-stemmer.o $(WIN32RES)

EXTENSION = croatian-stemmer
DATA = croatian-stemmer--1.0.sql croatian-stemmer--unpackaged--1.0.sql
PGFILEDESC = "croatian-stemmer - lemmatization for croatian language"

ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = contrib/croatian-stemmer
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
