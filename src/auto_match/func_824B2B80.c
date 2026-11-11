typedef struct Elem_824B2B80 { unsigned char data[0x50]; } Elem_824B2B80;
typedef struct Buf_824B2B80 {
    Elem_824B2B80 *buff;
    Elem_824B2B80 *end;
    Elem_824B2B80 *first;
    Elem_824B2B80 *last;
} Buf_824B2B80;
typedef struct Iter_824B2B80 { Buf_824B2B80 *b; Elem_824B2B80 *it; } Iter_824B2B80;

static __forceinline Elem_824B2B80 *sub_824B2B80(const Buf_824B2B80 *b, Elem_824B2B80 *p, int n)
{
    return p - (n > p - b->buff ? n - (b->end - b->buff) : n);
}

static __forceinline Elem_824B2B80 *add_824B2B80(const Buf_824B2B80 *b, Elem_824B2B80 *p, int n)
{
    return p + (n < b->end - p ? n : n - (b->end - b->buff));
}

Iter_824B2B80 *fn_824B2B80(Iter_824B2B80 *self, int n)
{
    if (n > 0) {
        self->it = sub_824B2B80(self->b, self->it == 0 ? self->b->last : self->it, n);
    } else if (n < 0) {
        n = -n;
        if (n > 0) {
            self->it = add_824B2B80(self->b, self->it, n);
            if (self->it == self->b->last)
                self->it = 0;
        } else if (n < 0) {
            fn_824B2B80(self, -n);
        }
    }
    return self;
}
