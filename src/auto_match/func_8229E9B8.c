typedef struct Val_8229E9B8 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_8229E9B8;
typedef struct Ref_8229E9B8 { void *p; void *rc; } Ref_8229E9B8;

typedef struct Inner_8229E9B8 { void *handle; void *rc; } Inner_8229E9B8;

static __forceinline void Inner_init(Inner_8229E9B8 *in)
{
    in->handle = 0;
    in->rc = 0;
}

typedef struct Obj_8229E9B8 {
    int f0;
    int pending;
    Inner_8229E9B8 in;
} Obj_8229E9B8;

extern void *fn_8266EC60(void);
extern Ref_8229E9B8 *fn_8266EE08(Ref_8229E9B8 *out, void *a, void *b, int c, int d, int e);
extern void fn_823F2E20(void **dst, Ref_8229E9B8 *src);
extern void fn_822315A0(void *p);
extern void fn_8266F6A8(void *h, int v);
extern void fn_82672C20(void *h, const char *name, Val_8229E9B8 *args, int n);
extern void fn_82273CD8(Val_8229E9B8 *v, int type);
extern void fn_82273C88(Val_8229E9B8 *v);
extern char lbl_821AB570[];

Obj_8229E9B8 *fn_8229E9B8(Obj_8229E9B8 *self, void *arg)
{
    Ref_8229E9B8 tmp;
    Val_8229E9B8 v;
    Inner_8229E9B8 *in;

    in = &self->in;
    self->f0 = 1;
    self->pending = 2;
    Inner_init(in);
    fn_823F2E20(&in->handle, fn_8266EE08(&tmp, fn_8266EC60(), arg, 0, 1, 0));
    if (tmp.rc != 0) {
        fn_822315A0(tmp.rc);
    }
    fn_8266F6A8(in->handle, 3);
    fn_82672C20(in->handle, "_root.transOut", 0, 0);
    v.w0 = 0;
    v.type = 0;
    if (self->pending != 0) {
        self->pending = 0;
        fn_82273CD8(&v, 4);
        v.u.p = lbl_821AB570;
        fn_82672C20(in->handle, "_root.type", &v, 1);
    }
    fn_82273C88(&v);
    return self;
}
