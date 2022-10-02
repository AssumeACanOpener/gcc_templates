CC = gcc
CFLAGS = -Wall -g -O2 \
         -Wformat -Wformat-security -Werror=format-security \
         -D_FORTIFY_SOURCE=2 -fstack-protector-all \
         -fPIE -pie

#LDFLAGS = Wl,-z,now -Wl,-z,relro
#LDFLAGS = -L/usr/example/lib
#LDLIBS = -lexample1 -lexample2

SOURCES = app.c

app: $(SOURCES:.c=.o)
	$(CC) $(CFLAGS) $(LDFLAGS) $(SOURCES:.c=.o) -o app

%.o: %.c
	$(CC) $(CFLAGS) $< -c

clean:
	rm -f app *.o
