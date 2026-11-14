typedef struct Iter_83029BB0 {
    char pad0[8];
    char *base;             /* 0x08 */
    char pad0c[4];
    char *cur;              /* 0x10 */
    unsigned short index;   /* 0x14 */
    unsigned short count;   /* 0x16 */
    char pad18[4];
    int flags;              /* 0x1c */
} Iter_83029BB0;

int fn_83029BB0(Iter_83029BB0 *self)
{
    int wrapped = 0;

    self->index++;
    if (self->index < self->count) {
        if ((self->flags & 2) != 0)
            self->cur += 0x10;
    } else {
        if ((self->flags & 2) != 0)
            self->cur = self->base;
        self->index = 0;
        wrapped = 1;
    }
    return wrapped;
}
