extern unsigned char *fn_8265D5A8(unsigned char *);
extern void fn_82F93768(void *, unsigned char);
extern void fn_8265D8A0(void *, unsigned char, int);

void *fn_82663428(void *self)
{
    unsigned char a;
    fn_82F93768(self, *fn_8265D5A8(&a));
    fn_8265D8A0(self, 0, 0);
    return self;
}
