typedef struct { char c; } Tag_828D3FC8;
typedef struct {
    void *first;
    void *last;
    void *end;
    char alloc[4];
} Vec_828D3FC8;

extern void *fn_828D3EE8(void *dst, void *src, void *first);
extern void fn_828D3F40(void *first, void *last, void *alloc, Tag_828D3FC8 tag);

void fn_828D3FC8(Vec_828D3FC8 *v)
{
    void *p;
    Tag_828D3FC8 tag;

    if (v->first != v->last) {
        p = fn_828D3EE8(v->last, v->last, v->first);
        fn_828D3F40(p, v->last, v->alloc, tag);
        v->last = p;
    }
}
