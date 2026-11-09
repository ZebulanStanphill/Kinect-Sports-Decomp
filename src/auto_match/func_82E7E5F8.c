extern int fn_82E7BC68(void *o, unsigned short id, void *arg);

int fn_82E7E5F8(char *self, void *arg)
{
    return fn_82E7BC68(*(char **)(self + 0x10) + 0x10, *(unsigned short *)(self + 0xc), arg);
}
