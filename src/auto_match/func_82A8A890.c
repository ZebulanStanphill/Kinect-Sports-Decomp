extern void fn_82A88D40(void *buf);
extern unsigned char fn_82A89348(void *a, void *b, void *buf);
extern unsigned char fn_82A8A088(void *a, void *b, void *buf, void *c, void *d, void *e);

unsigned char fn_82A8A890(void *a, void *b, void *c, void *d, void *e)
{
    unsigned char buf[128];

    fn_82A88D40(buf);
    return fn_82A89348(a, b, buf) && fn_82A8A088(a, b, buf, c, d, e);
}
