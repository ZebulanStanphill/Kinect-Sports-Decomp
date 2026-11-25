struct RefCounted_82743FE0 {
    int pad;   /* 0x0 */
    long refs; /* 0x4 */
};

struct StringNode_82743FE0 {
    const char *text; /* 0x0 */
    int pad4;         /* 0x4 */
    int refs;         /* 0x8 */
};

struct StringBuffer_82743FE0 {
    unsigned int tagged;
};

struct Environment_82743FE0 {
    char pad0[0x78];
    char stringContext[4]; /* 0x78 */
};

struct Call_82743FE0 {
    int pad0;
    void *result;  /* 0x04 */
    char *thisPtr; /* 0x08 */
    char padc[0xc];
    Environment_82743FE0 *env; /* 0x18 */
};

struct Value_82743FE0;

extern "C" void fn_82696330(Value_82743FE0 *value);
extern "C" void fn_826944C8(StringNode_82743FE0 *node);

// GASValue: a type byte at 0, undefined when zero.
struct Value_82743FE0 {
    unsigned char type; /* 0x0 */
    char pad1[0xf];

    Value_82743FE0() : type(0)
    {
    }

    ~Value_82743FE0()
    {
        fn_82696330(this);
    }
};

struct String_82743FE0 {
    StringNode_82743FE0 *node;

    ~String_82743FE0()
    {
        StringNode_82743FE0 *released = node;

        if (--released->refs == 0) {
            fn_826944C8(released);
        }
    }
};

extern "C" unsigned char fn_82695468(Call_82743FE0 *call, int type);
extern "C" void fn_826954C0(Call_82743FE0 *call, const char *name, int a, int b);
extern "C" void fn_827437A0(char *point, char *stringContext, Value_82743FE0 *values);
extern "C" void fn_82696D38(String_82743FE0 *out, Value_82743FE0 *value, Environment_82743FE0 *env,
                            int precision, int flags);
extern "C" void fn_8268B330(StringBuffer_82743FE0 *text);
extern "C" void fn_8268B610(StringBuffer_82743FE0 *text, const char *append, int length);
extern "C" void fn_8269A190(StringNode_82743FE0 **out, char *manager, StringBuffer_82743FE0 *text);
extern "C" void fn_82681838(void *result, StringNode_82743FE0 **value);
extern "C" void fn_8267BE38(void *block);
extern "C" long _InterlockedExchangeAdd(long volatile *, long);
extern "C" const char lbl_821C24F0[];

extern "C" void fn_82743FE0(Call_82743FE0 *call)
{
    char *point;

    if (fn_82695468(call, 0x10) == 0) {
        fn_826954C0(call, "Point", 0, 0);
        return;
    }
    point = call->thisPtr ? call->thisPtr - 0x10 : 0;
    if (point != 0) {
        Value_82743FE0 values[2];
        String_82743FE0 strings[2];
        StringBuffer_82743FE0 text;
        StringNode_82743FE0 *value;
        RefCounted_82743FE0 *data;

        fn_827437A0(point, call->env->stringContext, values);
        fn_82696D38(&strings[0], &values[0], call->env, 6, 0);
        fn_82696D38(&strings[1], &values[1], call->env, 6, 0);
        fn_8268B330(&text);
        fn_8268B610(&text, "(x=", -1);
        fn_8268B610(&text, strings[0].node->text, -1);
        fn_8268B610(&text, ", y=", -1);
        fn_8268B610(&text, strings[1].node->text, -1);
        fn_8268B610(&text, lbl_821C24F0, -1);
        fn_8269A190(&value, *(char **)call->env->stringContext + 0x254, &text);
        fn_82681838(call->result, &value);
        if (--value->refs == 0) {
            fn_826944C8(value);
        }
        data = (RefCounted_82743FE0 *)(text.tagged & ~3u);
        if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }
}
