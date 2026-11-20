struct RefCounted_8271C770 {
    int pad;   /* 0x0 */
    long refs; /* 0x4 */
};

struct StringNode_8271C770 {
    int pad[2]; /* 0x0 */
    int refs;   /* 0x8 */
};

struct String_8271C770 {
    unsigned int tagged;
};

struct StringContext_8271C770;

struct Environment_8271C770 {
    char pad0[0x78];
    char stringContext[4]; /* 0x78 */

    StringContext_8271C770 *GetSC()
    {
        return (StringContext_8271C770 *)stringContext;
    }
};

class MemberVisitor_8271C770
{
  public:
    virtual ~MemberVisitor_8271C770()
    {
    }

    virtual void Visit(const void *name, const void *value, unsigned char flags) = 0;
};

class VarsVisitor_8271C770 : public MemberVisitor_8271C770
{
  public:
    Environment_8271C770 *env; /* 0x04 */
    String_8271C770 *text;     /* 0x08 */

    VarsVisitor_8271C770(Environment_8271C770 *environment, String_8271C770 *output)
        : env(environment), text(output)
    {
    }

    virtual void Visit(const void *name, const void *value, unsigned char flags);
};

class ObjectInterface_8271C770
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
    virtual void VisitMembers(StringContext_8271C770 *sc, MemberVisitor_8271C770 *visitor, unsigned int flags,
                              const void *instance);
};

struct Object_8271C770 {
    char pad0[0x10];
    ObjectInterface_8271C770 members; /* 0x10 */
};

struct Call_8271C770 {
    int pad0;
    void *result;  /* 0x04 */
    char *thisPtr; /* 0x08 */
    char padc[0xc];
    Environment_8271C770 *env; /* 0x18 */
};

extern "C" unsigned char fn_82695468(Call_8271C770 *call, int type);
extern "C" void fn_826954C0(Call_8271C770 *call, const char *name, int a, int b);
extern "C" void fn_8268B330(String_8271C770 *text);
extern "C" int fn_8268ACE8(String_8271C770 *text);
extern "C" void fn_8268BD50(String_8271C770 *text, int position, int count);
extern "C" void fn_8269A190(StringNode_8271C770 **out, char *manager, String_8271C770 *text);
extern "C" void fn_82681838(void *result, StringNode_8271C770 **value);
extern "C" void fn_826944C8(StringNode_8271C770 *value);
extern "C" void fn_8267BE38(void *block);
extern "C" long _InterlockedExchangeAdd(long volatile *, long);

// Exact when compiled together with fn_82681838 and fn_8269A190, which take the
// address of `value` and leave it alone.
extern "C" void fn_8271C770(Call_8271C770 *call)
{
    Object_8271C770 *object;
    StringNode_8271C770 *value;
    RefCounted_8271C770 *data;

    if (fn_82695468(call, 0x1b) == 0) {
        fn_826954C0(call, "LoadVars", 0, 0);
        return;
    }
    object = call->thisPtr ? (Object_8271C770 *)(call->thisPtr - 0x10) : 0;
    {
        String_8271C770 text;

        fn_8268B330(&text);
        {
            Environment_8271C770 *env = call->env;
            VarsVisitor_8271C770 visitor(env, &text);

            object->members.VisitMembers(env->GetSC(), &visitor, 0, 0);
            fn_8268BD50(&text, fn_8268ACE8(&text) - 1, 1);
            fn_8269A190(&value, *(char **)call->env->GetSC() + 0x254, &text);
            fn_82681838(call->result, &value);
            if (--value->refs == 0) {
                fn_826944C8(value);
            }
        }
        data = (RefCounted_8271C770 *)(text.tagged & ~3u);
        if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }
}
