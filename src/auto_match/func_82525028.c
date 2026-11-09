extern void *fn_8265C9E0(unsigned int);
extern void *fn_82523220(void *, void *, int);

void *fn_82525028(char *a)
{
    void *p = fn_8265C9E0(0x319c0);
    if (p != 0) {
        return fn_82523220(p, a + 0x1e0, 0);
    }
    return 0;
}
