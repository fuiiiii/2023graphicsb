#include <windows.h>
#include <stdio.h>
int main()
{
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\do.wav", NULL, SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\re.wav", NULL, SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\mi.wav", NULL, SND_SYNC);
    PlaySound("do_re_mi/do.wav", NULL, SND_SYNC);
    printf("Hello World\n");
}


