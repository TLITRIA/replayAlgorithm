all:insertSort selectSort quickSort bubbleSort

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

# 快速 O(NlogN)
quickSort:quickSort.o
	gcc -g quickSort.o -o quickSort
quickSort.o:quickSort.c
	gcc -g -c quickSort.c -o quickSort.o 

# 冒泡
bubbleSort:bubbleSort.o
	gcc -g bubbleSort.o -o bubbleSort
bubbleSort.o:bubbleSort.c
	gcc -g -c bubbleSort.c -o bubbleSort.o 

clean:
	@rm -rf *.o insertSort selectSort quickSort bubbleSort