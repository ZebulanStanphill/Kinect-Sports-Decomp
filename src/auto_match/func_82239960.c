extern void *fn_822399F8(void *mem, char *owner);
extern void *fn_8265C9E0(unsigned int size);

void *fn_82239960(char *param_1)
{
    void *mem;

    mem = fn_8265C9E0(0x210);
    if (mem != 0) {
        return fn_822399F8(mem, param_1 - 0x28);
    }
    return 0;
}
