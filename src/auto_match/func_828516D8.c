extern int fn_828182B0(void *object, void *arg);

int fn_828516D8(char *p, void *arg)
{
    if (p && *(void **)(p + 0x20) && arg)
        return fn_828182B0(*(void **)(p + 0x20), arg);
    return 0;
}
