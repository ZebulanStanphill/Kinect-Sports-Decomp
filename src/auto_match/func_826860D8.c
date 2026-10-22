typedef struct Target Target;
typedef struct TargetVtbl {
    void *f0;
    void *f4;
    void (*Release)(Target *self, int x);
    void *fc;
    void *f10;
    int (*Handle)(Target *self, int x, void **arg);
} TargetVtbl;
struct Target {
    TargetVtbl *vt;
};

typedef struct Ref {
    Target *ptr;
    int x;
} Ref;

typedef struct Source Source;
typedef struct SourceVtbl {
    void *f0;
    Ref *(*Get)(Ref *out, Source *self);
} SourceVtbl;
struct Source {
    SourceVtbl *vt;
    char pad[0x10];
    Ref ref;
};

typedef struct Holder {
    int direct;
    Source *src;
} Holder;

int fn_826860D8(Holder *h, void **arg)
{
    int hr;

    if (h->direct == 0) {
        Ref tmp;
        Ref *r = h->src->vt->Get(&tmp, h->src);
        if (r->ptr != 0 && *arg != 0)
            hr = r->ptr->vt->Handle(r->ptr, r->x, arg);
        else
            hr = 0;
        if (tmp.ptr != 0)
            tmp.ptr->vt->Release(tmp.ptr, tmp.x);
        return hr;
    } else {
        Target *t = h->src->ref.ptr;
        if (t != 0 && *arg != 0)
            return t->vt->Handle(t, h->src->ref.x, arg);
        return 0;
    }
}
