#ifndef _IXIMIUZ_POPEN2
#define _IXIMIUZ_POPEN2

#include<stdio.h>

struct files_t {
    FILE *in;
    FILE *out;
};

struct files_t *popen2(const char *command);

int pclose2(struct files_t *fp);

#endif  // _IXIMIUZ_POPEN2
