# popen2 - duplex popen()

Like [`popen()`](http://man7.org/linux/man-pages/man3/popen.3.html) but returns
both child's `stdin` and `stdout`.

## Usage
```
#include"popen2.h"
#include<stdio.h>

int main() {
    files_t *fp = popen2("cat");
    fputs("foobar\n", fp->in);
    fflush(fp->in);

    char buf[64] = {};
    fgets(buf, 64, fp->out);
    printf("%s", buf);

    pclose2(fp);
}
```

