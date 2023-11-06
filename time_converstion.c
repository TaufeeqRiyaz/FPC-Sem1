#include <stdio.h>

int main(){
    int hh, mm, ss;
    char am_pm;

    scanf("%d:%d:%d%c", &hh, &mm, &ss, &am_pm);

    if (am_pm == 'P' || am_pm == 'p'){
        if (hh != 12){
            hh += 12;
        }
    } else if (am_pm == 'A' || am_pm == 'a'){
        if (hh == 12){
            hh = 0;
        }
    }

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}