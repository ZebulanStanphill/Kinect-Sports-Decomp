typedef struct Elem_824B4188 { unsigned char data[0x190]; } Elem_824B4188;
typedef struct Buf_824B4188 {
    Elem_824B4188 *buff;
    Elem_824B4188 *end;
    Elem_824B4188 *first;
    Elem_824B4188 *last;
} Buf_824B4188;
typedef struct Iter_824B4188 { Buf_824B4188 *b; Elem_824B4188 *it; } Iter_824B4188;

static __forceinline Elem_824B4188 *sub_824B4188(const Buf_824B4188 *b, Elem_824B4188 *p, int n)
{
    return p - (n > p - b->buff ? n - (b->end - b->buff) : n);
}

static __forceinline Elem_824B4188 *add_824B4188(const Buf_824B4188 *b, Elem_824B4188 *p, int n)
{
    return p + (n < b->end - p ? n : n - (b->end - b->buff));
}

Iter_824B4188 *fn_824B4188(Iter_824B4188 *self, int n)
{
    if (n > 0) {
        self->it = sub_824B4188(self->b, self->it == 0 ? self->b->last : self->it, n);
    } else if (n < 0) {
        n = -n;
        if (n > 0) {
            self->it = add_824B4188(self->b, self->it, n);
            if (self->it == self->b->last)
                self->it = 0;
        } else if (n < 0) {
            fn_824B4188(self, -n);
        }
    }
    return self;
}
