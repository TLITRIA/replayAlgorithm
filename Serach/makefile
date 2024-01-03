all:binarySearch foreachSearch

# “顺序”查找
foreachSearch:foreachSearch.o
	gcc -g foreachSearch.o -o foreachSearch
foreachSearch.o:foreachSearch.c
	gcc -g -c foreachSearch.c -o foreachSearch.o 

# 二分查找
binarySearch:binarySearch.o
	gcc -g binarySearch.o -o binarySearch
binarySearch.o:binarySearch.c
	gcc -g -c binarySearch.c -o binarySearch.o 

clean:
	@rm -rf *.o binarySearch foreachSearch