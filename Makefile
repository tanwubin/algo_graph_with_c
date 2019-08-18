run:
	gcc main.c binary_search.c selection_sort.c -o main
	./main

clean:
	rm -rf main