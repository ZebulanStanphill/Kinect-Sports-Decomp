typedef struct Elem_824B2328 { unsigned char data[0x30]; } Elem_824B2328;
typedef struct Buf_824B2328 {
    Elem_824B2328 *buff;
    Elem_824B2328 *end;
    Elem_824B2328 *first;
    Elem_824B2328 *last;
} Buf_824B2328;
typedef struct Iter_824B2328 { Buf_824B2328 *b; Elem_824B2328 *it; } Iter_824B2328;

static __forceinline Elem_824B2328 *sub_824B2328(const Buf_824B2328 *b, Elem_824B2328 *p, int n)
{
    return p - (n > p - b->buff ? n - (b->end - b->buff) : n);
}

static __forceinline Elem_824B2328 *add_824B2328(const Buf_824B2328 *b, Elem_824B2328 *p, int n)
{
    return p + (n < b->end - p ? n : n - (b->end - b->buff));
}

Iter_824B2328 *fn_824B2328(Iter_824B2328 *self, int n)
{
    if (n > 0) {
        self->it = sub_824B2328(self->b, self->it == 0 ? self->b->last : self->it, n);
    } else if (n < 0) {
        n = -n;
        if (n > 0) {
            self->it = add_824B2328(self->b, self->it, n);
            if (self->it == self->b->last)
                self->it = 0;
        } else if (n < 0) {
            fn_824B2328(self, -n);
        }
    }
    return self;
}
