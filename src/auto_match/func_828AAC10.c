extern void *fn_8265C9E0(unsigned int size);
extern void *fn_828AA9B8(void *self, void *a, void *b, void *c);
extern int fn_828EA600(void *p);

void *fn_828AAC10(void *param_1, void *param_2, void *param_3)
{
    void *mem;

    fn_828EA600(param_2);
    mem = fn_8265C9E0(0x70);
    if (mem != 0) {
        return fn_828AA9B8(mem, param_1, param_2, param_3);
    }
    return 0;
}
