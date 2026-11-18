typedef struct StringNode_826BF638 {
    int m0;       /* 0x0 */
    int m4;       /* 0x4 */
    int refCount; /* 0x8 */
} StringNode_826BF638;

typedef struct Object_826BF638 {
    char pad0[0x8];
    unsigned int refCount; /* 0x8 */
} Object_826BF638;

typedef struct Context_826BF638 {
    char pad0[0x254];
    char strings[0x34]; /* 0x254 */
    void *heap;         /* 0x288 */
} Context_826BF638;

typedef struct Member_826BF638 {
    const char *name; /* 0x0 */
    void *value;      /* 0x4 */
} Member_826BF638;

typedef struct ValueInit_826BF638 {
    Object_826BF638 *object; /* 0x0 */
    Object_826BF638 *extra;  /* 0x4 */
    unsigned char flags;     /* 0x8 */
} ValueInit_826BF638;

typedef struct Value_826BF638 {
    int data[4];
} Value_826BF638;

class Target_826BF638
{
  public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual void slot20();
    virtual void slot24();
    virtual void SetMember(Context_826BF638 **context, StringNode_826BF638 **name, Value_826BF638 *value,
                           int flags); /* 0x28 */
};

typedef struct Owner_826BF638 {
    char pad0[0x10];
    Target_826BF638 target; /* 0x10 */
} Owner_826BF638;

extern "C" Object_826BF638 *fn_826B14D8(Context_826BF638 *context, int kind);
extern "C" void *fn_8267B890(void *heap, unsigned int size, int flags);
extern "C" Object_826BF638 *fn_826C3560(void *memory, Context_826BF638 **context, Object_826BF638 *parent,
                                        void *value);
extern "C" void fn_82695750(Value_826BF638 *value, ValueInit_826BF638 *init);
extern "C" void fn_82681728(StringNode_826BF638 **out, void *strings, const char *text);
extern "C" void fn_826944C8(StringNode_826BF638 *node);
extern "C" void fn_82696330(Value_826BF638 *value);
extern "C" void fn_826824B0(Object_826BF638 *object);

extern "C" void fn_826BF638(void *self, Owner_826BF638 *owner, Context_826BF638 **context,
                            Member_826BF638 *members, int flags)
{
    Object_826BF638 *parent;
    void *memory;
    Object_826BF638 *object;
    ValueInit_826BF638 init;
    Value_826BF638 value;
    StringNode_826BF638 *name;
    StringNode_826BF638 *node;
    int i;

    parent = fn_826B14D8(*context, 7);
    if (parent != 0) {
        parent->refCount = (parent->refCount + 1) & 0x8fffffff;
    }
    for (i = 0; members[i].name != 0; i++) {
        memory = fn_8267B890((*context)->heap, 0x34, 0);
        if (memory != 0) {
            object = fn_826C3560(memory, context, parent, members[i].value);
        } else {
            object = 0;
        }
        init.object = object;
        init.flags = 0;
        init.extra = 0;
        fn_82695750(&value, &init);
        fn_82681728(&name, (*context)->strings, members[i].name);
        owner->target.SetMember(context, &name, &value, flags);
        node = name;
        if (--node->refCount == 0) {
            fn_826944C8(node);
        }
        fn_82696330(&value);
        if ((init.flags & 2) == 0 && init.object != 0) {
            fn_826824B0(init.object);
        }
        init.object = 0;
        if ((init.flags & 1) == 0 && init.extra != 0) {
            fn_826824B0(init.extra);
        }
        init.extra = 0;
    }
    if (parent != 0) {
        fn_826824B0(parent);
    }
}
