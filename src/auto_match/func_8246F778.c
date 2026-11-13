extern void *memset(void *, int, unsigned);
extern unsigned short lbl_820E975C;
extern void fn_8246F718(void *self, int key, unsigned short *buf, int size);
extern int fn_82F65B28(unsigned short *dst, unsigned int size, const unsigned short *src);

void fn_8246F778(void *self, int key, int altKey, const unsigned short *fallback, unsigned short *out)
{
    unsigned short buf[0x400];

    buf[0] = lbl_820E975C;
    memset(buf + 1, 0, 0x7fe);
    fn_8246F718(self, key, out, 0x400);
    fn_82F65B28(out, 0x400, fallback);
    fn_8246F718(self, altKey, buf, 0x400);
    fn_82F65B28(out, 0x400, buf);
}
