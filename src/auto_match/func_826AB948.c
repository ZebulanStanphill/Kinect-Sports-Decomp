typedef int (*code)();
extern void fn_826BE6C0(void);
extern void fn_826C30F8(void *p);

void fn_826AB948(int param_1)
{
    int p;
    unsigned int v;

    fn_826BE6C0();
    p = *(int *)(param_1 + 0x30);
    if (p != 0) {
        v = *(unsigned int *)(p + 8) + 1;
        *(unsigned int *)(p + 8) = v;
        if ((v & 0x70000000) != 0) {
            *(unsigned int *)(p + 8) = v & 0x8fffffff;
            ((code)**(int **)p)(p, 2);
        }
    }
    p = *(int *)(param_1 + 0x34);
    if (p != 0) {
        v = *(unsigned int *)(p + 8) + 1;
        *(unsigned int *)(p + 8) = v;
        if ((v & 0x70000000) != 0) {
            *(unsigned int *)(p + 8) = v & 0x8fffffff;
            ((code)**(int **)p)(p, 2);
        }
    }
    fn_826C30F8((void *)(param_1 + 0x3c));
}
