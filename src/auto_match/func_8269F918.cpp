typedef struct Value_8269F918 {
    unsigned char tag;
    char data[15];
} Value_8269F918;

typedef struct Stack_8269F918 {
    Value_8269F918 *top;
    Value_8269F918 *base;
    Value_8269F918 *limit;
    char padc[8];
    int page; /* 0x14 */
} Stack_8269F918;

typedef struct Ref_8269F918 {
    char pad0[8];
    unsigned int count;
} Ref_8269F918;

typedef struct Runtime_8269F918 {
    char pad0[8];
    Stack_8269F918 stack;
    char pad20[0x58];
    Ref_8269F918 **types; /* 0x78 */
} Runtime_8269F918;

typedef struct Builder_8269F918 Builder_8269F918;

struct Builder_8269F918 {
    struct {
        void *pad[11];
        unsigned char (*build)(Builder_8269F918 *, Ref_8269F918 ***, Ref_8269F918 **, Value_8269F918 *);
    } *vt;
};

typedef struct Object_8269F918 Object_8269F918;

struct Object_8269F918 {
    struct {
        void *pad[23];
        Runtime_8269F918 *(*runtime)(Object_8269F918 *);
    } *vt;

    char pad4[0x64];
    Builder_8269F918 builder; /* 0x68 */
};

typedef struct Invocation_8269F918 {
    unsigned int data[9];
} Invocation_8269F918;

typedef struct Target_8269F918 Target_8269F918;

struct Target_8269F918 {
    struct {
        void *pad[10];
        void (*invoke)(Target_8269F918 *, Invocation_8269F918 *, void *, int);
    } *vt;
};

struct ReferencePair_8269F918 {
    Target_8269F918 *target;
    void *context;
    unsigned char flags;
    __forceinline ~ReferencePair_8269F918();
};

extern "C" void fn_826824B0(void *object);
extern "C" void fn_826826A8(Stack_8269F918 *stack);
extern "C" void fn_826828D8(Invocation_8269F918 *invocation);
extern "C" void fn_82683270(Stack_8269F918 *stack, int count);
extern "C" void fn_826944C8(Ref_8269F918 *ref);
extern "C" Value_8269F918 *fn_82695520(Value_8269F918 *out, void *object);
extern "C" void fn_82695DA0(Value_8269F918 *out, const Value_8269F918 *source);
extern "C" void fn_82696330(Value_8269F918 *value);
extern "C" ReferencePair_8269F918 *fn_82696B20(ReferencePair_8269F918 *out, Value_8269F918 *value, int flags);
extern "C" Invocation_8269F918 *fn_8269DFA0(Invocation_8269F918 *out, Value_8269F918 *result,
                                            Value_8269F918 *object, Runtime_8269F918 *runtime, int count,
                                            int index);

__forceinline ReferencePair_8269F918::~ReferencePair_8269F918()
{
    if (!(flags & 2) && target) {
        fn_826824B0(target);
    }
    target = 0;
    if (!(flags & 1) && context) {
        fn_826824B0(context);
    }
    context = 0;
}

extern "C" void fn_8269F918(Object_8269F918 *self, int mode, void *argument)
{
    struct {
        Value_8269F918 result;
        Value_8269F918 object;
    } values;

    Value_8269F918 value;
    Runtime_8269F918 *runtime;

    value.tag = 0;
    runtime = self->vt->runtime(self);
    if (runtime) {
        Ref_8269F918 *ref = runtime->types[mode == 1 ? 0x57 : 0x58];
        ++ref->count;
        if (self->builder.vt->build(&self->builder, &runtime->types, &ref, &value)) {
            ReferencePair_8269F918 target;
            fn_82696B20(&target, &value, 0);
            if (target.target) {
                Stack_8269F918 *stack;
                Invocation_8269F918 invocation;
                int index;
                int page;

                if (argument) {
                    Value_8269F918 *source = fn_82695520(&values.object, argument);
                    stack = &runtime->stack;
                    if (++stack->top >= stack->limit) {
                        fn_826826A8(stack);
                    }
                    if (stack->top) {
                        fn_82695DA0(stack->top, source);
                    }
                    fn_82696330(&values.object);
                } else {
                    stack = &runtime->stack;
                    if (++stack->top >= stack->limit) {
                        fn_826826A8(stack);
                    }
                    if (stack->top) {
                        stack->top->tag = 1;
                    }
                }
                values.result.tag = 0;
                page = stack->page;
                index = stack->top - stack->base + page * 32 - 32;
                {
                    Invocation_8269F918 *call = fn_8269DFA0(
                        &invocation, &values.result, fn_82695520(&values.object, self), runtime, 1, index);
                    target.target->vt->invoke(target.target, call, target.context, 0);
                }
                fn_826828D8(&invocation);
                fn_82696330(&values.object);
                fn_82683270(stack, 1);
                fn_82696330(&values.result);
            }
        }
        {
            Ref_8269F918 *retained = ref;
            if (--retained->count == 0) {
                fn_826944C8(retained);
            }
        }
        fn_82696330(&value);
    } else {
        fn_82696330(&value);
    }
}
