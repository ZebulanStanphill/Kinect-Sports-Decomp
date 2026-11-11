typedef struct Elem_824B10E8 { unsigned char data[0xd0]; } Elem_824B10E8;
typedef struct Buf_824B10E8 {
    Elem_824B10E8 *buff;
    Elem_824B10E8 *end;
    Elem_824B10E8 *first;
    Elem_824B10E8 *last;
} Buf_824B10E8;
typedef struct Iter_824B10E8 { Buf_824B10E8 *b; Elem_824B10E8 *it; } Iter_824B10E8;

static __forceinline Elem_824B10E8 *sub_824B10E8(const Buf_824B10E8 *b, Elem_824B10E8 *p, int n)
{
    return p - (n > p - b->buff ? n - (b->end - b->buff) : n);
}

static __forceinline Elem_824B10E8 *add_824B10E8(const Buf_824B10E8 *b, Elem_824B10E8 *p, int n)
{
    return p + (n < b->end - p ? n : n - (b->end - b->buff));
}

Iter_824B10E8 *fn_824B10E8(Iter_824B10E8 *self, int n)
{
    if (n > 0) {
        self->it = sub_824B10E8(self->b, self->it == 0 ? self->b->last : self->it, n);
    } else if (n < 0) {
        n = -n;
        if (n > 0) {
            self->it = add_824B10E8(self->b, self->it, n);
            if (self->it == self->b->last)
                self->it = 0;
        } else if (n < 0) {
            fn_824B10E8(self, -n);
        }
    }
    return self;
}
