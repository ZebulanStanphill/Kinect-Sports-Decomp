struct StringNode_826BBA80 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BBA80 {
    StringNode_826BBA80 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BBA80 {
    int key;
    int value;
};

extern "C" Entry_826BBA80 *fn_8273E508(void *hash, const String_826BBA80 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_8274E1D8(void);

struct NativeFunction_826BBA80 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BBA80(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BBA80()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BBA80 {
    const String_826BBA80 *first;
    const NativeFunction_826BBA80 *second;

    NodeRef_826BBA80(const String_826BBA80 &f, const NativeFunction_826BBA80 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BBA80 &ref, unsigned int hashValue);

struct Value_826BBA80;
extern "C" void fn_82696330(Value_826BBA80 *value);

struct Value_826BBA80 {
    unsigned char type;          /* 0x00 */
    StringNode_826BBA80 *string; /* 0x04 */
    int extra[2];

    Value_826BBA80(const String_826BBA80 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BBA80()
    {
        fn_82696330(this);
    }
};

struct Flags_826BBA80 {
    unsigned char flags;

    Flags_826BBA80() : flags(0)
    {
    }
};

struct Object_826BBA80 {
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
    virtual void SetMember(void *context, const String_826BBA80 &name, const Value_826BBA80 &value,
                           const Flags_826BBA80 &flags); /* 0x28 */
};

struct Holder_826BBA80 {
    char pad[0x10];
    Object_826BBA80 object; /* 0x10 */
};

struct Hash_826BBA80 {
    char storage;

    void Add(const String_826BBA80 &key, const NativeFunction_826BBA80 &value)
    {
        NodeRef_826BBA80 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BBA80 &key)
    {
        Entry_826BBA80 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BBA80 {
    char pad[0x80];
    String_826BBA80 name; /* 0x80 */
    char pad2[0x280 - 0x84];
    Hash_826BBA80 functions; /* 0x280 */
};

extern "C" void fn_826BBA80(Self_826BBA80 *self, void *context, Holder_826BBA80 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BBA80((void *)fn_8274E1D8));
        Flags_826BBA80 flags;
        Value_826BBA80 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
