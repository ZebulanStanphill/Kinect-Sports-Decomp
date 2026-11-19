struct StringNode_826BBB60 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BBB60 {
    StringNode_826BBB60 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BBB60 {
    int key;
    int value;
};

extern "C" Entry_826BBB60 *fn_8273E508(void *hash, const String_826BBB60 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_8274E9D8(void);

struct NativeFunction_826BBB60 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BBB60(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BBB60()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BBB60 {
    const String_826BBB60 *first;
    const NativeFunction_826BBB60 *second;

    NodeRef_826BBB60(const String_826BBB60 &f, const NativeFunction_826BBB60 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BBB60 &ref, unsigned int hashValue);

struct Value_826BBB60;
extern "C" void fn_82696330(Value_826BBB60 *value);

struct Value_826BBB60 {
    unsigned char type;          /* 0x00 */
    StringNode_826BBB60 *string; /* 0x04 */
    int extra[2];

    Value_826BBB60(const String_826BBB60 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BBB60()
    {
        fn_82696330(this);
    }
};

struct Flags_826BBB60 {
    unsigned char flags;

    Flags_826BBB60() : flags(0)
    {
    }
};

struct Object_826BBB60 {
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
    virtual void SetMember(void *context, const String_826BBB60 &name, const Value_826BBB60 &value,
                           const Flags_826BBB60 &flags); /* 0x28 */
};

struct Holder_826BBB60 {
    char pad[0x10];
    Object_826BBB60 object; /* 0x10 */
};

struct Hash_826BBB60 {
    char storage;

    void Add(const String_826BBB60 &key, const NativeFunction_826BBB60 &value)
    {
        NodeRef_826BBB60 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BBB60 &key)
    {
        Entry_826BBB60 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BBB60 {
    char pad[0x9c];
    String_826BBB60 name; /* 0x9c */
    char pad2[0x280 - 0xa0];
    Hash_826BBB60 functions; /* 0x280 */
};

extern "C" void fn_826BBB60(Self_826BBB60 *self, void *context, Holder_826BBB60 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BBB60((void *)fn_8274E9D8));
        Flags_826BBB60 flags;
        Value_826BBB60 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
