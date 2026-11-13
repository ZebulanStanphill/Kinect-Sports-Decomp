typedef struct Str_82737BE0 {
    char *text;
    int f4;
    int refs;
    int fc;
    int length;
} Str_82737BE0;

typedef struct Ref_82737BE0 {
    int pad;
    long refs;
} Ref_82737BE0;

typedef struct Name_82737BE0 {
    unsigned int tagged;
} Name_82737BE0;

typedef struct Parser_82737BE0 {
    int a;
    void *result;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_82737BE0;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern unsigned char fn_82695468(Parser_82737BE0 *p, int kind);
extern void fn_826954C0(Parser_82737BE0 *p, const char *name, int a, int b);
extern void *fn_826957D0(Parser_82737BE0 *p, int index);
extern unsigned int fn_82697700(void *arg, int ctx);
extern int fn_82695608(void *arg, int ctx);
extern void fn_82696D38(Str_82737BE0 **out, void *value, int ctx, int a, int b);
extern void fn_8268C6A8(Name_82737BE0 *out, const char *text, int length);
extern void *fn_82755698(char *target, unsigned int index, void *name, int value);
extern void fn_8269A1F0(void *result, void *value);
extern void fn_8267BE38(void *p);
extern void fn_826944C8(Str_82737BE0 *p);

void fn_82737BE0(Parser_82737BE0 *self)
{
    char *obj;
    unsigned int index;
    Str_82737BE0 *str;
    int value;
    int ctx;
    void *arg;
    Name_82737BE0 name;
    Ref_82737BE0 *ref;
    Str_82737BE0 *s;

    if (fn_82695468(self, 0x29) == 0) {
        fn_826954C0(self, "TextSnapshot", 0, 0);
        return;
    }
    obj = self->node ? self->node - 0x10 : 0;
    if (obj != 0 && self->count >= 3) {
        index = fn_82697700(fn_826957D0(self, 0), self->ctx);
        ctx = self->ctx;
        arg = fn_826957D0(self, 1);
        fn_82696D38(&str, arg, ctx, -1, 0);
        value = fn_82695608(fn_826957D0(self, 2), self->ctx);
        fn_8268C6A8(&name, str->text, str->length);
        fn_8269A1F0(self->result, fn_82755698(obj + 0x30, index, (char *)(name.tagged & ~3u) + 8, value));
        ref = (Ref_82737BE0 *)(name.tagged & ~3u);
        if (_InterlockedExchangeAdd(&ref->refs, -1) - 1 == 0) {
            fn_8267BE38(ref);
        }
        s = str;
        if (--s->refs == 0) {
            fn_826944C8(s);
        }
    }
}
