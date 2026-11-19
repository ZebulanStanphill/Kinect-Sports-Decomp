struct StringNode_82734030 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_82734030 {
    StringNode_82734030 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_82734030 {
    int key;
    int value;
};

extern "C" Entry_82734030 *fn_8273E508(void *hash, const String_82734030 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_827AE8B0(void);

struct NativeFunction_82734030 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_82734030(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_82734030()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_82734030 {
    const String_82734030 *first;
    const NativeFunction_82734030 *second;

    NodeRef_82734030(const String_82734030 &f, const NativeFunction_82734030 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_82734030 &ref, unsigned int hashValue);

struct Value_82734030;
extern "C" void fn_82696330(Value_82734030 *value);

struct Value_82734030 {
    unsigned char type;          /* 0x00 */
    StringNode_82734030 *string; /* 0x04 */
    int extra[2];

    Value_82734030(const String_82734030 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_82734030()
    {
        fn_82696330(this);
    }
};

struct Flags_82734030 {
    unsigned char flags;

    Flags_82734030() : flags(0)
    {
    }
};

struct Object_82734030 {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void SetMember(void *context, const String_82734030 &name, const Value_82734030 &value,
                           const Flags_82734030 &flags); /* 0x28 */
};

struct Holder_82734030 {
    char pad[0x10];
    Object_82734030 object; /* 0x10 */
};

struct Hash_82734030 {
    char storage;

    void Add(const String_82734030 &key, const NativeFunction_82734030 &value)
    {
        NodeRef_82734030 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_82734030 &key)
    {
        Entry_82734030 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_82734030 {
    char pad[0x8c];
    String_82734030 name; /* 0x8c */
    char pad2[0x280 - 0x90];
    Hash_82734030 functions; /* 0x280 */
};

extern "C" void fn_82734030(Self_82734030 *self, void *context, Holder_82734030 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_82734030((void *)fn_827AE8B0));
        Flags_82734030 flags;
        Value_82734030 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
