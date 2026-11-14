typedef struct Str_8271C308 {
    char *text;
    int f4;
    int refs;
} Str_8271C308;

typedef struct Name_8271C308 {
    unsigned int tagged;
} Name_8271C308;

typedef struct Ref_8271C308 {
    int pad;
    long refs;
} Ref_8271C308;

typedef struct Call_8271C308 {
    int pad0;
    void *result;
    char *thisPtr;
    char pad0c[0x18 - 0xc];
    void *ctx;
    int argCount;
} Call_8271C308;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern unsigned char fn_82695468(Call_8271C308 *call, int kind);
extern void fn_826954C0(Call_8271C308 *call, const char *name, int a, int b);
extern void *fn_826957D0(Call_8271C308 *call, int index);
extern void fn_82696D38(Str_8271C308 **out, void *value, void *ctx, int a, int b);
extern void fn_8268B330(Name_8271C308 *name);
extern void *fn_82693A98(Str_8271C308 **str);
extern void fn_826A70D0(char *text, void *a, Name_8271C308 *name);
extern void fn_8271BF18(void *ctx, char *obj, Name_8271C308 *name);
extern void fn_8267BE38(void *p);
extern void fn_826944C8(Str_8271C308 *s);

void fn_8271C308(Call_8271C308 *call)
{
    char *obj;
    Str_8271C308 *url;
    Name_8271C308 name;
    Ref_8271C308 *ref;
    Str_8271C308 *s;
    void *ctx;
    void *arg;
    char *text;

    if (call->argCount <= 0)
        return;
    if (fn_82695468(call, 0x1b) == 0) {
        fn_826954C0(call, "LoadVars", 0, 0);
        return;
    }
    obj = call->thisPtr ? call->thisPtr - 0x10 : 0;
    ctx = call->ctx;
    arg = fn_826957D0(call, 0);
    fn_82696D38(&url, arg, ctx, -1, 0);
    fn_8268B330(&name);
    text = url->text;
    fn_826A70D0(text, fn_82693A98(&url), &name);
    fn_8271BF18(call->ctx, obj ? obj + 0x10 : 0, &name);
    ref = (Ref_8271C308 *)(name.tagged & ~3u);
    if (_InterlockedExchangeAdd(&ref->refs, -1) - 1 == 0) {
        fn_8267BE38(ref);
    }
    s = url;
    if (--s->refs == 0) {
        fn_826944C8(s);
    }
}
