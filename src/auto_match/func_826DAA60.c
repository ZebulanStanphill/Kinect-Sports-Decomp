extern void fn_8267C4C8(int h);
extern void fn_8267C4F0(void *h);

void **fn_826DAA60(void **self, int *other)
{
    if (*other != 0) {
        fn_8267C4C8(*other);
    }
    if (*self != 0) {
        fn_8267C4F0(*self);
    }
    *self = (void *)*other;
    return self;
}
