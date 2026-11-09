extern int fn_827050F0(void *self, void *obj, int a, int b, int c, int d);

int fn_82705A50(void *self, int a, int b, int c, int d)
{
    return fn_827050F0(self, *(void **)((char *)self + 0x68), a, b, c, d);
}
