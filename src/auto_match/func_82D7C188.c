typedef struct Pool {
    unsigned char *base;
    unsigned char **blocks;
    int count;
} Pool;

void fn_82D7C188(Pool *p)
{
    int n = p->count;
    int i = 0;
    unsigned char **pp;
    if (p->count <= 0)
        return;
    pp = p->blocks - 1;
    do {
        unsigned char *b;
        unsigned char *end;
        i++;
        b = *++pp;
        if (i == p->count)
            end = p->base + (unsigned int)b;
        else
            end = b + 0x200;
        while (b < end)
            b += b[3];
    } while (i < n);
}
