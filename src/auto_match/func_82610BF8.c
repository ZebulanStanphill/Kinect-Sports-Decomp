extern int fn_827DBA00(unsigned int a, unsigned int b, int c, unsigned int d, unsigned int e, int f,
                       void *g, void *h, int p9, int p10, int p11, void *p12);
extern void fn_82599418(void);

int fn_82610BF8(char *self, int arg1, int arg2)
{
    int result;

    result = fn_827DBA00(*(unsigned int *)(self + 0x14), *(unsigned int *)(self + 0xc), 1,
                         *(unsigned int *)(self + 0x24), *(unsigned int *)(self + 0x28), 0,
                         self + 0x1c, self + 0x20, arg1, 0, arg2, self + 0x2c);
    fn_82599418();
    return result;
}
