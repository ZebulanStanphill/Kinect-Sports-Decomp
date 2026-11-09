extern void *fn_8265C9E0(unsigned int);
extern void *fn_8229AFA8(void *, void *, void *);
void **fn_8236C710(void **out, void *a, char *b)
{
    void *mem = fn_8265C9E0(0x84);
    void *obj = mem ? fn_8229AFA8(mem, a, b + 0x88) : 0;
    *out = obj;
    return out;
}
