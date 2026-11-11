typedef struct Elem_824AFC78 { unsigned char data[0xf0]; } Elem_824AFC78;
typedef struct Buf_824AFC78 {
    Elem_824AFC78 *buff;
    Elem_824AFC78 *end;
    Elem_824AFC78 *first;
    Elem_824AFC78 *last;
} Buf_824AFC78;
typedef struct Iter_824AFC78 { Buf_824AFC78 *b; Elem_824AFC78 *it; } Iter_824AFC78;

static __forceinline Elem_824AFC78 *sub_824AFC78(const Buf_824AFC78 *b, Elem_824AFC78 *p, int n)
{
    return p - (n > p - b->buff ? n - (b->end - b->buff) : n);
}

static __forceinline Elem_824AFC78 *add_824AFC78(const Buf_824AFC78 *b, Elem_824AFC78 *p, int n)
{
    return p + (n < b->end - p ? n : n - (b->end - b->buff));
}

Iter_824AFC78 *fn_824AFC78(Iter_824AFC78 *self, int n)
{
    if (n > 0) {
        self->it = sub_824AFC78(self->b, self->it == 0 ? self->b->last : self->it, n);
    } else if (n < 0) {
        n = -n;
        if (n > 0) {
            self->it = add_824AFC78(self->b, self->it, n);
            if (self->it == self->b->last)
                self->it = 0;
        } else if (n < 0) {
            fn_824AFC78(self, -n);
        }
    }
    return self;
}
