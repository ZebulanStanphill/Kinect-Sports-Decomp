extern int fn_82818290(void *object, void *key, void *out);

int fn_82851700(char *p, void *key, void *out)
{
    if (p && *(void **)(p + 0x20) && key && out)
        return fn_82818290(*(void **)(p + 0x20), key, out);
    return 0;
}
