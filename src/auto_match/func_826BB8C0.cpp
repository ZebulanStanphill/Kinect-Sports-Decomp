struct StringNode_826BB8C0 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BB8C0 {
    StringNode_826BB8C0 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BB8C0 {
    int key;
    int value;
};

extern "C" Entry_826BB8C0 *fn_8273E508(void *hash, const String_826BB8C0 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_8274C018(void);

struct NativeFunction_826BB8C0 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BB8C0(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BB8C0()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BB8C0 {
    const String_826BB8C0 *first;
    const NativeFunction_826BB8C0 *second;

    NodeRef_826BB8C0(const String_826BB8C0 &f, const NativeFunction_826BB8C0 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BB8C0 &ref, unsigned int hashValue);

struct Value_826BB8C0;
extern "C" void fn_82696330(Value_826BB8C0 *value);

struct Value_826BB8C0 {
    unsigned char type;          /* 0x00 */
    StringNode_826BB8C0 *string; /* 0x04 */
    int extra[2];

    Value_826BB8C0(const String_826BB8C0 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BB8C0()
    {
        fn_82696330(this);
    }
};

struct Flags_826BB8C0 {
    unsigned char flags;

    Flags_826BB8C0() : flags(0)
    {
    }
};

struct Object_826BB8C0 {
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
    virtual void SetMember(void *context, const String_826BB8C0 &name, const Value_826BB8C0 &value,
                           const Flags_826BB8C0 &flags); /* 0x28 */
};

struct Holder_826BB8C0 {
    char pad[0x10];
    Object_826BB8C0 object; /* 0x10 */
};

struct Hash_826BB8C0 {
    char storage;

    void Add(const String_826BB8C0 &key, const NativeFunction_826BB8C0 &value)
    {
        NodeRef_826BB8C0 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BB8C0 &key)
    {
        Entry_826BB8C0 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BB8C0 {
    char pad[0x60];
    String_826BB8C0 name; /* 0x60 */
    char pad2[0x280 - 0x64];
    Hash_826BB8C0 functions; /* 0x280 */
};

extern "C" void fn_826BB8C0(Self_826BB8C0 *self, void *context, Holder_826BB8C0 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BB8C0((void *)fn_8274C018));
        Flags_826BB8C0 flags;
        Value_826BB8C0 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
