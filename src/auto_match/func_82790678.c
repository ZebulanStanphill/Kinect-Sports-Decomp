typedef struct {
    int a;
    int b;
    void *ref;
} Self_82790678;

extern void fn_8267C4C8(void *p);

Self_82790678 *fn_82790678(Self_82790678 *self, int a, int b, void **src)
{
    self->a = a;
    self->b = b;
    if (*src != 0) {
        fn_8267C4C8(*src);
    }
    self->ref = *src;
    return self;
}
