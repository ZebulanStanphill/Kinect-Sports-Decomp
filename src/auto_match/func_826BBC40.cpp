struct StringNode_826BBC40 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BBC40 {
    StringNode_826BBC40 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BBC40 {
    int key;
    int value;
};

extern "C" Entry_826BBC40 *fn_8273E508(void *hash, const String_826BBC40 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_82750018(void);

struct NativeFunction_826BBC40 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BBC40(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BBC40()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BBC40 {
    const String_826BBC40 *first;
    const NativeFunction_826BBC40 *second;

    NodeRef_826BBC40(const String_826BBC40 &f, const NativeFunction_826BBC40 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BBC40 &ref, unsigned int hashValue);

struct Value_826BBC40;
extern "C" void fn_82696330(Value_826BBC40 *value);

struct Value_826BBC40 {
    unsigned char type;          /* 0x00 */
    StringNode_826BBC40 *string; /* 0x04 */
    int extra[2];

    Value_826BBC40(const String_826BBC40 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BBC40()
    {
        fn_82696330(this);
    }
};

struct Flags_826BBC40 {
    unsigned char flags;

    Flags_826BBC40() : flags(0)
    {
    }
};

struct Object_826BBC40 {
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
    virtual void SetMember(void *context, const String_826BBC40 &name, const Value_826BBC40 &value,
                           const Flags_826BBC40 &flags); /* 0x28 */
};

struct Holder_826BBC40 {
    char pad[0x10];
    Object_826BBC40 object; /* 0x10 */
};

struct Hash_826BBC40 {
    char storage;

    void Add(const String_826BBC40 &key, const NativeFunction_826BBC40 &value)
    {
        NodeRef_826BBC40 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BBC40 &key)
    {
        Entry_826BBC40 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BBC40 {
    char pad[0xa0];
    String_826BBC40 name; /* 0xa0 */
    char pad2[0x280 - 0xa4];
    Hash_826BBC40 functions; /* 0x280 */
};

extern "C" void fn_826BBC40(Self_826BBC40 *self, void *context, Holder_826BBC40 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BBC40((void *)fn_82750018));
        Flags_826BBC40 flags;
        Value_826BBC40 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
