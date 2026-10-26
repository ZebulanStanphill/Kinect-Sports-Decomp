extern char lbl_82196582[];
extern void fn_82230110(void *p, const char *s);
extern void fn_82A1EFC0(void *p, int v, int n);
typedef struct S { int x0; int x4; int x8; char buf[0x3f8-0xc]; unsigned __int64 x3f8; char s400[0x1c]; unsigned char x41c; } S;

S *fn_82486B08(S *p)
{
    p->x4 = 0;
    p->x0 = 4;
    p->x8 = 0;
    p->x3f8 = 0;
    fn_82230110(p->s400, lbl_82196582);
    p->x41c = 0;
    fn_82A1EFC0(p->buf, 0, 1000);
    return p;
}
