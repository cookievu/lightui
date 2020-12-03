#include <stdio.h>
#include "lvgl/lvgl.h"

void hello_world(char *text)
{
    printf("Hello World! %s", text);
}

int main(void)
{
    hello_world("YAY!!");
    return 0;
}
