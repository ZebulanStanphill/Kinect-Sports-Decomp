extern void *fn_82C2B580(unsigned int size);
extern void fn_82C2B590(void *p);
extern int fn_82E32F68(void *p);
void *memset(void *dst, int c, unsigned int n);

void *fn_82E33030(void)
{
    void *p = fn_82C2B580(0x10b60);
    if (p == 0) {
        return 0;
    }
    memset(p, 0, 0x10b60);
    if (fn_82E32F68(p) >= 0) {
        return p;
    }
    fn_82C2B590(p);
    return 0;
}
