typedef struct Str_82710990 {
    char *text;
    int f4;
    int refs;
} Str_82710990;

typedef struct Holder_82710990 {
    char pad[8];
    Str_82710990 *empty;
} Holder_82710990;

typedef struct Ctx_82710990 {
    char pad[0x78];
    Holder_82710990 *holder;
} Ctx_82710990;

typedef struct Obj_82710990 {
    int pad0;
    void *result;
    char *buffer;
    char pad0c[0x18 - 0xc];
    Ctx_82710990 *ctx;
    int count;
} Obj_82710990;

extern char lbl_82005EA4[];
extern unsigned char fn_82695468(Obj_82710990 *p, int kind);
extern void fn_826954C0(Obj_82710990 *p, const char *name, int a, int b);
extern void *fn_826957D0(Obj_82710990 *p, int index);
extern double fn_826972E0(void *arg, Ctx_82710990 *ctx);
extern int fn_82693A98(char *p);
extern int fn_82693B08(char *p, int index);
extern Str_82710990 **fn_82694928(Str_82710990 **out, Str_82710990 **src, int ch);
extern void fn_82681838(void *result, Str_82710990 **value);
extern void fn_826944C8(Str_82710990 *r);

static __forceinline void Release(Str_82710990 *s)
{
    if (--s->refs == 0) {
        fn_826944C8(s);
    }
}

void fn_82710990(Obj_82710990 *self)
{
    char *text;
    Str_82710990 *str;
    Str_82710990 *tmp;
    Str_82710990 *s;
    int index;

    if (fn_82695468(self, 8) == 0) {
        fn_826954C0(self, lbl_82005EA4, 0, 0);
        return;
    }
    text = (self->buffer ? self->buffer - 0x10 : 0) + 0x30;
    str = self->ctx->holder->empty;
    str->refs++;
    index = (int)fn_826972E0(fn_826957D0(self, 0), self->ctx);
    if (index >= 0 && index < fn_82693A98(text)) {
        s = *fn_82694928(&tmp, &str, fn_82693B08(text, index));
        s->refs++;
        Release(str);
        str = s;
        Release(tmp);
    }
    fn_82681838(self->result, &str);
    Release(str);
}
