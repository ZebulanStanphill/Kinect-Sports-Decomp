extern void *fn_8265C940(int size, unsigned int tag);
extern void *fn_82F606C8(void *mem);

int fn_82F60AC0(void **out)
{
    void *mem = fn_8265C940(0xf0, 0x24be4000);
    *out = mem ? fn_82F606C8(mem) : 0;
    return 0;
}
