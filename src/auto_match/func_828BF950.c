extern void fn_8265CA20(void *p);
extern void fn_828BDE70(void *p);

void *fn_828BF950(char *p, unsigned int flags)
{
    void **v = (void **)(p + 0x84);
    if (v[0] != 0) {
        fn_8265CA20(v[0]);
    }
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    fn_828BDE70(p);
    if (flags & 1) {
        fn_8265CA20(p);
    }
    return p;
}
