extern void fn_8280F300(void *self, int a, int b, int d, void *owner);

void fn_8280F490(void *self, int a, int b, int c, int d)
{
    fn_8280F300(self, a, b, d, self);
}
