extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8236D958(void *mem, void *arg);

void *fn_82359B68(void *param_1, void *param_2)
{
    void *mem;

    mem = fn_8265C9E0(0x88);
    if (mem != 0) {
        return fn_8236D958(mem, param_2);
    }
    return 0;
}
