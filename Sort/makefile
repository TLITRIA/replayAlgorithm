all:insertSort selectSort quickSort

# 插入
insertSort:insertSort.o
	gcc insertSort.o -o insertSort
insertSort.o:insertSort.c
	gcc -c insertSort.c -o insertSort.o

# 选择
selectSort:selectSort.o
	gcc selectSort.o -o selectSort
selectSort.o:selectSort.c
	gcc -c selectSort.c -o selectSort.o

# 快速
quickSort:quickSort.o
	gcc -g quickSort.o -o quickSort
quickSort.o:quickSort.c
	gcc -g -c quickSort.c -o quickSort.o 

# 二分

clean:
	@rm -rf *.o insertSort selectSort quickSort