typedef struct Alloc Alloc;
typedef struct AllocVt {
    void *s0, *s4, *s8, *sc, *s10, *s14;
    void (*free)(Alloc *a, void *p, void *extra);
} AllocVt;
struct Alloc { AllocVt *vt; };
typedef struct Sub { Alloc *al; int extra; } Sub;
typedef struct Buf { void *first; void *last; void *end; Sub s; } Buf;

void fn_827DC8B8(Buf *b)
{
    if (b->first != 0) {
        Sub *s = &b->s;
        s->al->vt->free(s->al, b->first, &s->extra);
    }
    b->first = 0;
    b->last = 0;
    b->end = 0;
}
