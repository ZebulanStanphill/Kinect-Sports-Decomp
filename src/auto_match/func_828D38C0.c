typedef struct { char c; } Tag_828D38C0;
typedef struct {
    void *first;
    void *last;
    void *end;
    char alloc[4];
} Vec_828D38C0;

extern void *fn_828D3770(void *dst, void *src, void *first, Tag_828D38C0 tag);
extern void fn_828D3860(void *first, void *last, void *alloc, Tag_828D38C0 tag);

void fn_828D38C0(Vec_828D38C0 *v)
{
    void *p;
    Tag_828D38C0 tag, tag2;

    if (v->first != v->last) {
        p = fn_828D3770(v->last, v->last, v->first, tag2);
        fn_828D3860(p, v->last, v->alloc, tag);
        v->last = p;
    }
}
