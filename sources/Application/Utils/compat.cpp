#include <cstdio>
#ifndef __iob_fund

FILE _iob[] = {*stdin, *stdout, *stderr};

extern "C" FILE * __cdecl __iob_func(void)
{
    return _iob;
}

#endif