extern void fn_82BA02A8(int a);

int fn_828F1438(int a, int b, int c, int *p)
{
    int v;
    fn_82BA02A8(1);
    if (p == 0) {
        return -1;
    }
    v = *p;
    return ((v & 0xfffffe3f) == 0xfffffe3f) ? 0x18280186 : v;
}
