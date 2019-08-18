run:
	gcc main.c binary_search.c selection_sort.c dc_example.c -o main
	./main

clean:
	rm -rf main