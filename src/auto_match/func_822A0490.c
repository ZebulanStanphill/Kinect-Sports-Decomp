typedef struct Ref_822A0490 {
    void *f00;
    void *ptr;
} Ref_822A0490;

typedef struct Inner_822A0490 {
    void *handle;
    int f08;
    int f0c;
    float f10;
    int f14;
    int f18;
} Inner_822A0490;

typedef struct Obj_822A0490 {
    void *vtable;
    Inner_822A0490 in;
} Obj_822A0490;

extern void fn_822315A0(void *p);
extern void fn_823F2E20(void **dst, Ref_822A0490 *src);
extern void *fn_8266EC60(void);
extern Ref_822A0490 *fn_8266EE08(Ref_822A0490 *out, void *a, void *b, int c, int d, int e);
extern void fn_8266F628(void *h, int v);
extern void fn_8266F640(void *h, int v);
extern void fn_82673A28(void *h, void *cb, void *ctx);
extern void fn_82673BC0(void *h, void *cb, void *ctx);
extern void fn_822A0790(void);
extern void fn_82291208(void);
extern char lbl_821ABBA4[];
extern float lbl_821CC160;

static __forceinline void Inner_init(Inner_822A0490 *in)
{
    in->handle = 0;
    in->f10 = lbl_821CC160;
    in->f08 = 0;
    in->f0c = 0;
    in->f14 = 0;
    in->f18 = 0;
}

Obj_822A0490 *fn_822A0490(Obj_822A0490 *self, void *arg)
{
    Ref_822A0490 tmp;
    Inner_822A0490 *in;

    self->vtable = lbl_821ABBA4;
    Inner_init(&self->in);
    in = &self->in;
    fn_823F2E20(&in->handle, fn_8266EE08(&tmp, fn_8266EC60(), arg, 0, 1, 0));
    if (tmp.ptr != 0) {
        fn_822315A0(tmp.ptr);
    }
    fn_8266F640(in->handle, 1);
    fn_8266F628(in->handle, 1);
    fn_82673A28(in->handle, (void *)fn_822A0790, self);
    fn_82673BC0(in->handle, (void *)fn_82291208, self);
    return self;
}
