//Windows Only
//Please install ffmpeg and set correct environment variables
//Does anyone provide multithreading support? :)

#include <stdio.h>
#include <windows.h>
#include <string.h>
#define stred(x) x+strlen(x)
#define MAXL 512

int main()
{
    char command[MAXL<<2] = "ffmpeg -threads 4 -i ";
    printf(".m3u8 Address: ");
    fgets(stred(command), MAXL, stdin);
    printf("File name: ");
    memcpy(stred(command)-1, " ", sizeof(char));
    fgets(stred(command), MAXL, stdin);
    puts(command);
    system(command);
    system("color 27");
    system("pause");
    return 0;
}
