# 编译器
CC=gcc

# 编译选项
CFLAGS=-Wall	-g	-O2
#定义目标文件
TARGET=calculator
#对象文件
OBJS=main.o	calculator.o

#默认目标
all:	$(TARGET)
#从 .c文件到 .o
$(TARGET):	$(OBJS)
	$(CC)	$(CFLAGS)	-o	$@	$^

#编译单个.c to .o
%.o:	%.c
	$(CC)	$(CFLAGS)	-c	$<
#清理编译生成的文件
clean:
	rm	-f	$(TARGET)	$(OBJS)

#伪目标: 防止make将某个文件名当作默认目标
.PHONY:	all	clean