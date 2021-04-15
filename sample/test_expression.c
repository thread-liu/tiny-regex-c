/*
    This program prints out a verbose explanation of a given regular expression.
*/

#include <rtthread.h>
#include <re.h>


int test_regex_expression(int argc, char** argv)
{
    if (argc == 2)
    {
        re_print(re_compile(argv[1]));
    }
    else
    {
        rt_kprintf("\nUsage: %s <PATTERN> \n", argv[0]);
    }
    return -2;
}
MSH_CMD_EXPORT(wwdg_sample, window watch dog sample);
