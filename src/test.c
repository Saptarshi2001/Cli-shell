#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
#include"test.h"
#include"shell.h"
char *args1[3]={"cd","..",NULL};
char *args3[3]={"mkdir","BOZO",NULL};
char *args4[4]={"grp","Unix","myfile1.txt",NULL};
char *args5[5]={"echo","Hello","Cruel","World",NULL};
/*void test_grep()
{
assert(sh_grep(args4)==1);
printf("test passed for grep \n");
}*/
void test_cd()
{
    assert(sh_cd(args1)==1);
    printf("test passed for cd \n");

}

void test_mkdir()
{
    assert(sh_mkdir(args3)==1);
    printf("test passed for mkdir \n");
}

void test_exit()
{
    assert(sh_exit()==0);
    printf("test passed for exit \n");
}

void test_help()
{
assert(sh_help()==1);
printf("test passed for help \n");
}

void test_echo()
{
assert(sh_echo(args5)==1);
printf("test passed for echo \n");
}

void test_cls()
{
assert(sh_clear(args1)==1);
printf("test passed for clear \n");
}
void test_color()
{
assert(sh_color()==1);
printf("test passed for color \n");
}

