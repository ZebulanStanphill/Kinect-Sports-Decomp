typedef struct Iter_82F8FD60 {
    void *cont;
    int *ptr;
} Iter_82F8FD60;

int fn_82F8FD60(Iter_82F8FD60 *self, Iter_82F8FD60 *other)
{
    if (self->cont == 0 || self->cont != other->cont)
        __debugbreak();
    return self->ptr - other->ptr;
}
