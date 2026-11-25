
student:main.o stud_delall.o stud_exit.o stud_read.o stud_save.o stud_sort.o stud_add.o stud_del.o stud_mod.o stud_rev.o stud_show.o
	cc main.o stud_delall.o stud_exit.o stud_read.o stud_save.o stud_sort.o stud_add.o stud_del.o stud_mod.o stud_rev.o stud_show.o -o student
stud_delall.o:stud_delall.c
	cc -c stud_delall.c
stud_exit.o : stud_exit.c
	cc -c stud_exit.c
stud_read.o : stud_read.c
	cc -c stud_read.c
stud_save.o : stud_save.c
	cc -c stud_save.c
stud_sort.o : stud_sort.c
	cc -c stud_sort.c
stud_add.o : stud_add.c
	cc -c stud_add.c
stud_del.o : stud_del.c
	cc -c stud_del.c
stud_mod.o : stud_mod.c
	cc -c stud_mod.c
stud_rev.o : stud_rev.c
	cc -c stud_rev.c
stud_show.o : stud_show.c
	cc -c stud_show.c
clear :
	@echo "cleaning up--"
	@rm -rv *.o

