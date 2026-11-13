typedef struct Iter_82F921A0 {
    void *cont;
    int *ptr;
} Iter_82F921A0;

unsigned char fn_82F921A0(Iter_82F921A0 *self, Iter_82F921A0 *other)
{
    if (self->cont == 0 || self->cont != other->cont)
        __debugbreak();
    return self->ptr == other->ptr;
}
