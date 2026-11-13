typedef struct Elem_82666FE0 { unsigned char data[12]; } Elem_82666FE0;

typedef struct Iter_82666FE0 { Elem_82666FE0 *ptr; } Iter_82666FE0;

Iter_82666FE0 *fn_82666FE0(Iter_82666FE0 *self, int n)
{
    self->ptr += n;
    return self;
}
