typedef struct { unsigned int *first; unsigned int *last; unsigned int *end; } Vec;
typedef struct { char pad[0x7c]; Vec v; } Self;
extern void fn_8257A9F0(Vec *v, unsigned int *val);

int fn_82878EF0(Self *self, unsigned int id)
{
    unsigned int *it;
    for (it = self->v.first; it != self->v.last; it++) {
        if (*it == id)
            break;
    }
    if (it == self->v.last)
        fn_8257A9F0(&self->v, &id);
    return 0x20200000;
}
