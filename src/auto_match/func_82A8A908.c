extern void fn_82A88D40(void *buf);
extern unsigned char fn_82A899B8(void *a, void *b, void *buf);
extern unsigned char fn_82A8A4F8(void *a, void *b, void *buf, void *c, void *d, void *e);

unsigned char fn_82A8A908(void *a, void *b, void *c, void *d, void *e)
{
    unsigned char buf[144];

    fn_82A88D40(buf);
    return fn_82A899B8(a, b, buf) && fn_82A8A4F8(a, b, buf, c, d, e);
}
