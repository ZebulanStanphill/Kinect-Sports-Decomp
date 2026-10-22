typedef int (*code)();
extern void fn_826BE530(void);
extern void fn_826C31F0(void *p);

void fn_826AB9F8(int param_1)
{
    int p;
    unsigned int v;

    fn_826BE530();
    p = *(int *)(param_1 + 0x30);
    if (p != 0) {
        v = *(unsigned int *)(p + 8) - 1;
        *(unsigned int *)(p + 8) = v;
        if ((v & 0x70000000) != 0x10000000) {
            *(unsigned int *)(p + 8) = v & 0x8fffffff | 0x10000000;
            ((code)**(int **)p)(p, 1);
        }
    }
    p = *(int *)(param_1 + 0x34);
    if (p != 0) {
        v = *(unsigned int *)(p + 8) - 1;
        *(unsigned int *)(p + 8) = v;
        if ((v & 0x70000000) != 0x10000000) {
            *(unsigned int *)(p + 8) = v & 0x8fffffff | 0x10000000;
            ((code)**(int **)p)(p, 1);
        }
    }
    fn_826C31F0((void *)(param_1 + 0x3c));
}
