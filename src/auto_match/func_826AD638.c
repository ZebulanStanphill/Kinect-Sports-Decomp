typedef struct { int pad0, pad4; char *data; unsigned len; } Str_826AD638;
typedef struct { void *pad0; Str_826AD638 *name; } Self_826AD638;
typedef struct { char pad[0x288]; void *heap; } Mgr_826AD638;
typedef struct { char pad[0x78]; Mgr_826AD638 *mgr; } Ctx_826AD638;
typedef struct Target_826AD638 Target_826AD638;
typedef struct {
    char pad[0x5c];
    Ctx_826AD638 *(*getContext)(Target_826AD638 *t);
} TargetVt_826AD638;
struct Target_826AD638 { TargetVt_826AD638 *vt; };

extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_826AA930(void *mem, Mgr_826AD638 **mgr, Str_826AD638 *name);
extern void fn_826C7030(Target_826AD638 *t, void *obj, int kind);
extern void fn_8267C498(void *obj);

static __forceinline unsigned char isEmpty(Str_826AD638 *s)
{
    if (s->len < 1 || s->data[0] == 0) {
        return 1;
    }
    return 0;
}

void fn_826AD638(Self_826AD638 *self, Target_826AD638 *t)
{
    Ctx_826AD638 *ctx = t->vt->getContext(t);
    void *mem;
    void *obj;
    if ((int)self->name != 0 && !isEmpty(self->name)) {
        mem = fn_8267B890(ctx->mgr->heap, 0x20, 0);
        if (mem != 0) {
            obj = fn_826AA930(mem, &ctx->mgr, self->name);
        } else {
            obj = 0;
        }
        fn_826C7030(t, obj, 4);
        if (obj != 0) {
            fn_8267C498(obj);
        }
    }
}
