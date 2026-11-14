typedef struct Vec_82F8FDB0 {
    int pad0;
    int *first;
    int *last;
} Vec_82F8FDB0;

typedef struct Iter_82F8FDB0 {
    Vec_82F8FDB0 *cont;
    int *ptr;
} Iter_82F8FDB0;

Iter_82F8FDB0 *fn_82F8FDB0(Iter_82F8FDB0 *self, int offset)
{
    if (!(self->cont != 0))
        __debugbreak();
    if (!(self->ptr + offset <= self->cont->last && self->ptr + offset >= self->cont->first))
        __debugbreak();
    self->ptr = self->ptr + offset;
    return self;
}
