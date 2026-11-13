typedef struct Elem_8265CF50 { unsigned char data[4]; } Elem_8265CF50;

typedef struct Iter_8265CF50 { Elem_8265CF50 *ptr; } Iter_8265CF50;

Elem_8265CF50 *fn_8265CF50(Iter_8265CF50 *self, int n)
{
    return self->ptr + n;
}
