extern void *fn_82662F58(void *self);
extern void *fn_8265D5A8(void *p);
extern void *fn_82F92218(void *node);
extern void fn_82662FF8(void *al, void *p, void *val);
extern void fn_82660558(void *al, void *p, int n);

/* _Buynode shape: allocate, construct the value; the catch-all deallocate is
   dead without EH (_TRY_BEGIN/_CATCH_ALL expand to `{` / `} if (0) {`). */
void *fn_82662D00(char *self, void *val)
{
    void *node = fn_82662F58(self);
    {
        fn_82662FF8(self + 0xd, fn_8265D5A8(fn_82F92218(node)), fn_8265D5A8(val));
    }
    if (0) {
        fn_82660558(self + 0xc, node, 1);
    }
    return node;
}
