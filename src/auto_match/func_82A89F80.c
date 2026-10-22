extern void fn_82A88D40(void *buf);
extern unsigned char fn_82A88800(void *a, void *b, void *buf);
extern unsigned char fn_82A89598(void *a, void *b, void *buf, void *c, void *d, void *e);

unsigned char fn_82A89F80(void *a, void *b, void *c, void *d, void *e)
{
    unsigned char buf[128];

    fn_82A88D40(buf);
    return fn_82A88800(a, b, buf) && fn_82A89598(a, b, buf, c, d, e);
}
