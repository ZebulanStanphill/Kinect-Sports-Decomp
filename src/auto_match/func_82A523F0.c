extern void fn_82BA02A8(int level, void *a, int b);
extern void *fn_82C2B580(unsigned int size);
extern void fn_82C2B590(void *p);
extern int fn_82A52360(void *p);
void *memset(void *dst, int c, unsigned int n);

void *fn_82A523F0(void *a, int b)
{
    void *p;
    if (a != 0 && b < 0) {
        return 0;
    }
    fn_82BA02A8(0, a, b);
    p = fn_82C2B580(0x2d0);
    if (p == 0) {
        return 0;
    }
    memset(p, 0, 0x2d0);
    if (fn_82A52360(p) >= 0) {
        return p;
    }
    fn_82C2B590(p);
    return 0;
}
