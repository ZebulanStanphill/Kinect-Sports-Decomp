typedef void (*Method)(void *self);

void fn_82870B60(int unused, int p)
{
    void **obj = *(void ***)(p + 0x0);
    (*(Method *)((char *)*obj + 0x1c))(obj);
}
