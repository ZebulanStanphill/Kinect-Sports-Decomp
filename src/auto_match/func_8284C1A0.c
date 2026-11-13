extern void *fn_8284A5D8(void *self);
extern void fn_8284BFC0(void *al, void *p, void *val);
extern void fn_8265CA20(void *p);

/* _Buynode shape: allocate, construct the value; the catch-all deallocate is
   dead without EH (_TRY_BEGIN/_CATCH_ALL expand to `{` / `} if (0) {`). */
void *fn_8284C1A0(char *self, void *val)
{
    char *node = (char *)fn_8284A5D8(self);
    {
        fn_8284BFC0(self + 0xd, node + 0xc, val);
    }
    if (0) {
        fn_8265CA20(node);
    }
    return node;
}
