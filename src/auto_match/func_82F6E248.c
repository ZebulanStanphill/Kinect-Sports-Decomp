extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern void *malloc(unsigned int size);

void *fn_82F6E248(unsigned int size, unsigned int align)
{
    unsigned int mask;
    unsigned int extra;
    unsigned int total;
    char *block;
    char *result;

    if (((align - 1) & align) != 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        result = 0;
        goto done;
    }
    if (align <= 4) {
        align = 4;
    }
    mask = align - 1;
    extra = mask + 4;
    total = extra + size;
    if (size > total) {
        *_errno() = 0xc;
        result = 0;
        goto done;
    }
    block = (char *)malloc(total);
    if (block == 0) {
        result = 0;
        goto done;
    }
    result = (char *)((unsigned int)(block + extra) & ~mask);
    ((void **)result)[-1] = block;
done:
    return result;
}
