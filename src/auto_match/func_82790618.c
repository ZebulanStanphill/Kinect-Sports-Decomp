typedef struct {
    char pad[8];
    void *ref;
} Self_82790618;

extern void fn_8267C4C8(void *p);
extern void fn_8267C4F0(void *p);

void fn_82790618(Self_82790618 *self, int *src)
{
    if (*src != 0) {
        fn_8267C4C8((void *)*src);
    }
    if (self->ref != 0) {
        fn_8267C4F0(self->ref);
    }
    self->ref = (void *)*src;
}
