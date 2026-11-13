extern void *memset(void *, int, unsigned);
extern unsigned short lbl_820E975C;
extern void fn_8246F718(void *self, int a, unsigned short *buf, int size);
extern void fn_8226FEA8(void *obj, unsigned short *text, int flag);

void fn_8246F6A0(char *self, int a)
{
    unsigned short buf[0x400];

    buf[0] = lbl_820E975C;
    memset(buf + 1, 0, 0x7fe);
    fn_8246F718(self, a, buf, 0x400);
    fn_8226FEA8(*(void **)(self + 0x308), buf, 0);
}
