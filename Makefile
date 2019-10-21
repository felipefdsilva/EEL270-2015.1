# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2015/1
# Prof. Marcelo Luiz Drumond Lanza
#
# Descricao:
#
# $Author: felipe.ferreira $
# $Date: 2015/05/07 00:41:16 $
# $Log: Makefile,v $
# Revision 1.4  2015/05/07 00:41:16  felipe.ferreira
# incluida a aula04
#
# Revision 1.3  2015/04/16 18:15:43  felipe.ferreira
# inclusao da macros e regras referentes a aula03
#
# Revision 1.2  2015/04/11 18:15:23  felipe.ferreira
# *** empty log message ***
#
# Revision 1.1  2015/03/29 23:55:40  felipe.ferreira
# Initial revision
#
# Autor: Felipe Ferreira da Silva


CC = gcc
LD = gcc

CFLAGS = -Wall -ansi
LFLAGS = -Wall -ansi

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0202AOBJS = aula0201a.o aula0202.o
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o
AULA0202EOBJS = aula0201e.o aula0202.o
AULA0302AOBJS = aula0301a.o aula0302.o
AULA0302BOBJS = aula0301b.o aula0302.o
AULA0302COBJS = aula0301c.o aula0302.o
AULA0302DOBJS = aula0301d.o aula0302.o
AULA0402OBJS = aula0401.o aula0402.o

AULA01 = aula0101\
	aula0102\
	aula0103

AULA02 = aula0202a\
	aula0202b\
	aula0202c\
	aula0202d\
	aula0202e

AULA03 = aula0302a\
	aula0302b\
	aula0302c\
	aula0302d

AULA04 = aula0402

EXECS = $(AULA01) $(AULA02) $(AULA03) $(AULA04)

.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(EXECS)

aula01: $(AULA01)
        
aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)

aula02: $(AULA02)

aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)

aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)

aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)

aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)

aula0202e: $(AULA0202EOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202EOBJS) -lm

aula03: $(AULA03)

aula0302a: $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)

aula0302b: $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)

aula0302c: $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)

aula0302d: $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)

aula04: $(AULA04)

aula0402: $(AULA0402OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402OBJS)

clean:
	rm -f *.o $(EXECS)

#$RCSFile$

