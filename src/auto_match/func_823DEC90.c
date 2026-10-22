typedef struct {
    int *obj;
    void *ref;
} Handle;

extern void fn_822315A0(void *p);
extern void fn_82359698(int a, int b);
extern int fn_8236B578(int a);
extern void fn_823C3BA0(int a);
extern int **fn_82522588(Handle *out, unsigned int it);

void fn_823DEC90(int param_1)
{
    int obj;
    unsigned int it;
    int **pp;
    int v;
    Handle h;

    obj = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) == 0) {
        if (fn_8236B578(obj) != 0) {
            fn_823C3BA0(obj);
            for (it = *(unsigned int *)(obj + 0x30); it != *(unsigned int *)(obj + 0x34); it += 8) {
                pp = fn_82522588(&h, it);
                v = (*pp)[0x260 / 4];
                if (v < 2) {
                    v = 2;
                }
                (*pp)[0x260 / 4] = v;
                if (h.ref != 0) {
                    fn_822315A0(h.ref);
                }
            }
            fn_82359698(obj, 2);
            *(int *)(param_1 + 0xc) = 1;
        }
    }
}
