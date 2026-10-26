typedef void (*Method)(void *self);

void fn_82EEA0D8(int unused, int p)
{
    void **obj = *(void ***)(p + 0x18);
    (*(Method *)((char *)*obj + 0x10))(obj);
}
