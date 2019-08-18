run:
	gcc main.c binary_search.c selection_sort.c dc_example.c quicksort.c -DDEBUG -g -o main
	./main

clean:
	rm -rf main