# Note: Comment lines in makefiles begin with a hashtag
vowel : count_vowels_exe
	./count_vowels_exe
count_vowels_exe : count_vowels.o master.o
	gcc -o count_vowels_exe count_vowels.o master.o
count_vowels.o : count_vowels.c
	gcc -c count_vowels.c
master.o : master.c
	gcc -c master.c
clean : master.c
	del -f *.o
	del count_vowels_exe
#use del instead of rm on windows
#use mingw32-make instead of make on windows