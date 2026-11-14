// LoadVars method: builds two strings from the first argument and passes the
// second to fn_8271BF18 for the target object.
#include "game/String_8268C510.h"

struct Str_8271CF50 {
    char *text;
    int f4;
    int refs;
};

struct Target_8271CF50;

struct Parser_8271CF50 {
    int a;
    void *result;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
};

extern "C" {
unsigned char fn_82695468(Parser_8271CF50 *p, int kind);
void fn_826954C0(Parser_8271CF50 *p, const char *name, int a, int b);
void *fn_826957D0(Parser_8271CF50 *p, int index);
void fn_82696D38(Str_8271CF50 **out, void *value, int ctx, int a, int b);
void fn_826944C8(Str_8271CF50 *p);
void *fn_8271BF18(int ctx, void *target, String_8268C510 *url);
void fn_827AE240(Target_8271CF50 *self, int ctx, void *request);
}

static __forceinline void Release(Str_8271CF50 *s)
{
    if (--s->refs == 0)
        fn_826944C8(s);
}

extern "C" void fn_8271CF50(Parser_8271CF50 *self)
{
    Target_8271CF50 *target;
    Str_8271CF50 *str;
    Str_8271CF50 *str2;
    void *arg;
    int ctx;

    if (fn_82695468(self, 0x1b) == 0) {
        fn_826954C0(self, "LoadVars", 0, 0);
        return;
    }
    target = self->node ? (Target_8271CF50 *)(self->node - 0x10) : 0;
    ctx = self->ctx;
    arg = fn_826957D0(self, 0);
    fn_82696D38(&str, arg, ctx, -1, 0);
    String_8268C510 name(str->text);
    Release(str);
    ctx = self->ctx;
    arg = fn_826957D0(self, 0);
    fn_82696D38(&str2, arg, ctx, -1, 0);
    {
        String_8268C510 url(str2->text);
        fn_827AE240(target, self->ctx,
                    fn_8271BF18(self->ctx, target ? (char *)target + 0x10 : 0, &url));
    }
    Release(str2);
}
