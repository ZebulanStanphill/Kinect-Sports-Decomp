extern void *fn_8262F6A8(void);

void *fn_82811040(char *p)
{
    void *r = *(void **)(p + 4);
    if (r)
        return r;
    return fn_8262F6A8();
}
