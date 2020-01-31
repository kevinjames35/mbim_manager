#simple make file
all:
	gcc mbim_util.c -o mbim_util -lpthread
clean:
	rm -f mbim_util
