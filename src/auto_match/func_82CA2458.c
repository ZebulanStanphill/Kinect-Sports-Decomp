extern int fn_82CD47A0(void *a, void *b, void *self);
int fn_82CA2458(void *self, void *a, void *b)
{
    if (a != 0 && b != 0) {
        return fn_82CD47A0(a, b, self);
    }
    return 1;
}
