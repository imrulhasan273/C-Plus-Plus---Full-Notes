#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("read.txt", "r");
    int counter = 1;
    // fseek(fp, 0, SEEK_SET); // starting from the first character
    // fseek(fp, 3, SEEK_SET); // SEEK_SET = starting from first
    //fseek(fp,-3,SEEK_END);
    fseek(fp, 5, SEEK_SET);
    while (counter <= 3)
    {
        putchar(fgetc(fp));
        counter++;
    }
    return 0;
}
