extern void *fn_8265C9E0(unsigned int size);
extern void *fn_822569C0(void *mem, char *arg);

void *fn_822568B8(char *param_1)
{
    void *mem;

    mem = fn_8265C9E0(0x118);
    if (mem != 0) {
        return fn_822569C0(mem, param_1 - 0x28);
    }
    return 0;
}
