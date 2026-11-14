extern int fn_82D38600(void *self, void *a, void *b, void *c, void *d);

int fn_82D38870(void *self, void *a, void *b)
{
    if (self == 0)
        return 0;
    return fn_82D38600(self, a, b, 0, 0);
}
