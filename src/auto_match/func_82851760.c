extern int fn_828182C0(void *object, void *key, int index, void *out);

int fn_82851760(char *p, void *key, int index, void *out)
{
    if (p && *(void **)(p + 0x20) && index >= 0 && out)
        return fn_828182C0(*(void **)(p + 0x20), key, index, out);
    return 0;
}
