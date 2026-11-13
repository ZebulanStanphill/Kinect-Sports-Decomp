extern int fn_82817B50(void *object, int index, void *out);

int fn_82851730(char *p, int index, void *out)
{
    if (p && *(void **)(p + 0x20) && index >= 0 && out)
        return fn_82817B50(*(void **)(p + 0x20), index, out);
    return 0;
}
