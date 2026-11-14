typedef struct { char c; } Tag_828D4098;
typedef struct {
    void *first;
    void *last;
    void *end;
    char alloc[4];
} Vec_828D4098;
typedef struct {
    int pad0;
    Vec_828D4098 b;
    Vec_828D4098 a;
} Obj_828D4098;

extern void *fn_828D3770(void *dst, void *src, void *first, Tag_828D4098 tag);
extern void fn_828D3860(void *first, void *last, void *alloc, Tag_828D4098 tag);
extern void *fn_828D3EE8(void *dst, void *src, void *first);
extern void fn_828D3F40(void *first, void *last, void *alloc, Tag_828D4098 tag);

static __forceinline void ClearA(Vec_828D4098 *v)
{
    void *p;
    Tag_828D4098 tag, tag2;

    if (v->first != v->last) {
        p = fn_828D3770(v->last, v->last, v->first, tag2);
        fn_828D3860(p, v->last, v->alloc, tag);
        v->last = p;
    }
}

static __forceinline void ClearB(Vec_828D4098 *v)
{
    void *p;
    Tag_828D4098 tag;

    if (v->first != v->last) {
        p = fn_828D3EE8(v->last, v->last, v->first);
        fn_828D3F40(p, v->last, v->alloc, tag);
        v->last = p;
    }
}

void fn_828D4098(Obj_828D4098 *self)
{
    ClearA(&self->a);
    ClearB(&self->b);
}
