struct StringNode_826BBE00 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BBE00 {
    StringNode_826BBE00 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BBE00 {
    int key;
    int value;
};

extern "C" Entry_826BBE00 *fn_8273E508(void *hash, const String_826BBE00 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_82751F10(void);

struct NativeFunction_826BBE00 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BBE00(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BBE00()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BBE00 {
    const String_826BBE00 *first;
    const NativeFunction_826BBE00 *second;

    NodeRef_826BBE00(const String_826BBE00 &f, const NativeFunction_826BBE00 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BBE00 &ref, unsigned int hashValue);

struct Value_826BBE00;
extern "C" void fn_82696330(Value_826BBE00 *value);

struct Value_826BBE00 {
    unsigned char type;          /* 0x00 */
    StringNode_826BBE00 *string; /* 0x04 */
    int extra[2];

    Value_826BBE00(const String_826BBE00 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BBE00()
    {
        fn_82696330(this);
    }
};

struct Flags_826BBE00 {
    unsigned char flags;

    Flags_826BBE00() : flags(0)
    {
    }
};

struct Object_826BBE00 {
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
    virtual void SetMember(void *context, const String_826BBE00 &name, const Value_826BBE00 &value,
                           const Flags_826BBE00 &flags); /* 0x28 */
};

struct Holder_826BBE00 {
    char pad[0x10];
    Object_826BBE00 object; /* 0x10 */
};

struct Hash_826BBE00 {
    char storage;

    void Add(const String_826BBE00 &key, const NativeFunction_826BBE00 &value)
    {
        NodeRef_826BBE00 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BBE00 &key)
    {
        Entry_826BBE00 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BBE00 {
    char pad[0xa8];
    String_826BBE00 name; /* 0xa8 */
    char pad2[0x280 - 0xac];
    Hash_826BBE00 functions; /* 0x280 */
};

extern "C" void fn_826BBE00(Self_826BBE00 *self, void *context, Holder_826BBE00 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BBE00((void *)fn_82751F10));
        Flags_826BBE00 flags;
        Value_826BBE00 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
