extern void *fn_82DA1B98(unsigned int size, void *where);
extern void *fn_8265D5A8(void *v);
extern void *fn_82662F08(void *self, void *src);

void fn_82662E50(void *p, void *v)
{
    void *vp = p;
    void *m = fn_82DA1B98(0x20, vp);
    m ? fn_82662F08(m, fn_8265D5A8(v)) : 0;
}
