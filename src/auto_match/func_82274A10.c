extern void fn_82275128(void);
extern void *fn_8265C9E0(unsigned int);
extern void *fn_8227ED38(void *, int, int, int);
extern void fn_82274548(void *, int, int, int);
void *fn_82274A10(int a, int b, int c, int d)
{
    void *mem;
    void *obj;
    fn_82275128();
    mem = fn_8265C9E0(0x58);
    obj = mem ? fn_8227ED38(mem, b, c, d) : 0;
    fn_82274548(obj, a, b, c);
    return obj;
}
