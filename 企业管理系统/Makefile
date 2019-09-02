CC=g++

#pipe 通过管道生成目标文件 O2优化级别 Wall生成更多警告 Werror 把警告当错误
FLAGS=-pipe -O2 -Wall -Werror
OBJ=manager.o managerdao.o managerservice.o managerview.o tools.o main.o emis.o Department.o Employee.o serviceDaoFileImpl.o service_impl.o  serviceview_impl.o
BIN=emis

all:$(OBJ)
	$(CC) $(OBJ) -o $(BIN)

%.o:%.c
	$(CC) $(STD) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJ) $(BIN)
