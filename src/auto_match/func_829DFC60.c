extern void fn_829DCBE8(char *a, char *b, char *c, char *d);
extern void fn_829DDC18(char *a, char *b, char *c, char *d);
extern void fn_829DE548(char *a, char *b, char *c, char *d, char *e, char *f);

void fn_829DFC60(char *p1, char *p2, char *p3, char *p4, unsigned char *out)
{
    *out = 0;
    fn_829DCBE8(p2 + 0x8280, p1 + 0x3820, p3 + 8, p4 + 8);
    fn_829DDC18(p2, p1, p3, p4);
    fn_829DE548(p2 + 0x1320, p1 + 0x70, p3 + 4, p4 + 4, p3 + 0xc, p4 + 0xc);
}
