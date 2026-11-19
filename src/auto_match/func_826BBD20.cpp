struct StringNode_826BBD20 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BBD20 {
    StringNode_826BBD20 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BBD20 {
    int key;
    int value;
};

extern "C" Entry_826BBD20 *fn_8273E508(void *hash, const String_826BBD20 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_82751310(void);

struct NativeFunction_826BBD20 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BBD20(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BBD20()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BBD20 {
    const String_826BBD20 *first;
    const NativeFunction_826BBD20 *second;

    NodeRef_826BBD20(const String_826BBD20 &f, const NativeFunction_826BBD20 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BBD20 &ref, unsigned int hashValue);

struct Value_826BBD20;
extern "C" void fn_82696330(Value_826BBD20 *value);

struct Value_826BBD20 {
    unsigned char type;          /* 0x00 */
    StringNode_826BBD20 *string; /* 0x04 */
    int extra[2];

    Value_826BBD20(const String_826BBD20 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BBD20()
    {
        fn_82696330(this);
    }
};

struct Flags_826BBD20 {
    unsigned char flags;

    Flags_826BBD20() : flags(0)
    {
    }
};

struct Object_826BBD20 {
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
    virtual void SetMember(void *context, const String_826BBD20 &name, const Value_826BBD20 &value,
                           const Flags_826BBD20 &flags); /* 0x28 */
};

struct Holder_826BBD20 {
    char pad[0x10];
    Object_826BBD20 object; /* 0x10 */
};

struct Hash_826BBD20 {
    char storage;

    void Add(const String_826BBD20 &key, const NativeFunction_826BBD20 &value)
    {
        NodeRef_826BBD20 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BBD20 &key)
    {
        Entry_826BBD20 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BBD20 {
    char pad[0xa4];
    String_826BBD20 name; /* 0xa4 */
    char pad2[0x280 - 0xa8];
    Hash_826BBD20 functions; /* 0x280 */
};

extern "C" void fn_826BBD20(Self_826BBD20 *self, void *context, Holder_826BBD20 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BBD20((void *)fn_82751310));
        Flags_826BBD20 flags;
        Value_826BBD20 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
