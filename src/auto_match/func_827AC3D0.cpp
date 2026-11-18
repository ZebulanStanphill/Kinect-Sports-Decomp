typedef struct Str_827AC3D0 {
    char *text;
    int f4;
    int refs;
    int fc;
    unsigned int length;
} Str_827AC3D0;

typedef struct Ref_827AC3D0 {
    int pad;
    long refs;
} Ref_827AC3D0;

typedef struct Buf_827AC3D0 {
    unsigned int tagged;
} Buf_827AC3D0;

struct StringContext_827AC3D0;

struct Environment_827AC3D0 {
    char pad0[0x78];
    char stringContext[4]; /* 0x78 */

    StringContext_827AC3D0 *GetSC()
    {
        return (StringContext_827AC3D0 *)stringContext;
    }
};

class MemberVisitor_827AC3D0
{
  public:
    virtual ~MemberVisitor_827AC3D0()
    {
    }

    virtual void Visit(const void *name, const void *value, unsigned char flags) = 0;
};

class StyleVisitor_827AC3D0 : public MemberVisitor_827AC3D0
{
  public:
    Environment_827AC3D0 *env; /* 0x04 */
    Buf_827AC3D0 *buf;         /* 0x08 */

    StyleVisitor_827AC3D0(Environment_827AC3D0 *environment, Buf_827AC3D0 *buffer)
        : env(environment), buf(buffer)
    {
    }

    virtual void Visit(const void *name, const void *value, unsigned char flags);
};

class ObjectInterface_827AC3D0
{
  public:
    virtual void Unknown0();
    virtual void Unknown1();
    virtual void Unknown2();
    virtual void Unknown3();
    virtual void Unknown4();
    virtual void Unknown5();
    virtual void Unknown6();
    virtual void Unknown7();
    virtual void VisitMembers(StringContext_827AC3D0 *sc, MemberVisitor_827AC3D0 *visitor,
                              unsigned int flags, const void *instance);
};

struct Value_827AC3D0 {
    char pad0[0x10];
    ObjectInterface_827AC3D0 sub; /* 0x10 */
};

typedef struct Parser_827AC3D0 {
    int a;
    void *result;
    char *node;
    char pad0c[0x18 - 0xc];
    Environment_827AC3D0 *ctx;
    int count;
} Parser_827AC3D0;

extern "C" unsigned char fn_82695468(Parser_827AC3D0 *p, int kind);
extern "C" void fn_826954C0(Parser_827AC3D0 *p, const char *name, int a, int b);
extern "C" char *fn_826957D0(Parser_827AC3D0 *p, int index);
extern "C" void fn_82696D38(Str_827AC3D0 **out, void *value, Environment_827AC3D0 *ctx, int a, int b);
extern "C" Value_827AC3D0 *fn_82696958(void *value, Environment_827AC3D0 *ctx);
extern "C" void fn_8268B330(Buf_827AC3D0 *b);
extern "C" void fn_8268B610(Buf_827AC3D0 *b, const char *text, int length);
extern "C" void fn_8268B400(Buf_827AC3D0 *b, unsigned int c);
extern "C" void fn_827A7D90(char *target, const char *text, unsigned int length);
extern "C" void fn_827A8040(char *target, int dotted, const char *text, int length);
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826944C8(Str_827AC3D0 *p);
extern "C" long _InterlockedExchangeAdd(long volatile *, long);

extern "C" void fn_827AC3D0(Parser_827AC3D0 *self)
{
    char *obj;
    Environment_827AC3D0 *ctx;
    Str_827AC3D0 *str;
    Str_827AC3D0 *s;

    if (fn_82695468(self, 0x1f) == 0) {
        fn_826954C0(self, "StyleSheet", 0, 0);
        return;
    }
    obj = self->node ? self->node - 0x10 : 0;
    if (obj != 0 && self->count >= 1) {
        if (self->count >= 2 && *fn_826957D0(self, 1) != 1) {
            Str_827AC3D0 *name;
            Value_827AC3D0 *value;
            void *arg;
            Environment_827AC3D0 *ctx1 = self->ctx;
            arg = fn_826957D0(self, 0);
            fn_82696D38(&name, arg, ctx1, -1, 0);
            ctx = self->ctx;
            value = fn_82696958(fn_826957D0(self, 1), ctx);
            if (value == 0) {
                s = name;
                if (--s->refs == 0) {
                    fn_826944C8(s);
                }
                return;
            }
            {
                Buf_827AC3D0 buf;
                Ref_827AC3D0 *ref;
                unsigned int *data;
                fn_8268B330(&buf);
                fn_8268B610(&buf, name->text, -1);
                fn_8268B400(&buf, 0x7b);
                {
                    Environment_827AC3D0 *env = self->ctx;
                    StyleVisitor_827AC3D0 v(env, &buf);

                    value->sub.VisitMembers(env->GetSC(), &v, 0, 0);
                    fn_8268B400(&buf, 0x7d);
                    data = (unsigned int *)(buf.tagged & ~3u);
                    fn_827A7D90(obj + 0x30, (char *)(data + 2), *data & 0x7fffffff);
                }
                ref = (Ref_827AC3D0 *)(buf.tagged & ~3u);
                if (_InterlockedExchangeAdd(&ref->refs, -1) - 1 == 0) {
                    fn_8267BE38(ref);
                }
            }
            s = name;
            if (--s->refs == 0) {
                fn_826944C8(s);
            }
        } else {
            void *arg;
            ctx = self->ctx;
            arg = fn_826957D0(self, 0);
            fn_82696D38(&str, arg, ctx, -1, 0);
            if (str->length > 0) {
                if (*str->text == '.') {
                    fn_827A8040(obj + 0x30, 1, str->text, -1);
                } else {
                    fn_827A8040(obj + 0x30, 0, str->text, -1);
                }
            }
            s = str;
            if (--s->refs == 0) {
                fn_826944C8(s);
            }
        }
    }
}
