typedef struct Elem_8265E0E0 { unsigned char data[4]; } Elem_8265E0E0;

typedef struct Iter_8265E0E0 { Elem_8265E0E0 *ptr; } Iter_8265E0E0;

Iter_8265E0E0 *fn_8265E0E0(Iter_8265E0E0 *self, int n)
{
    self->ptr += n;
    return self;
}
