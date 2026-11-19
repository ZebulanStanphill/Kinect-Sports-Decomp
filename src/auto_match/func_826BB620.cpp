struct StringNode_826BB620 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BB620 {
    StringNode_826BB620 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BB620 {
    int key;
    int value;
};

extern "C" Entry_826BB620 *fn_8273E508(void *hash, const String_826BB620 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_82748020(void);

struct NativeFunction_826BB620 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BB620(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BB620()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BB620 {
    const String_826BB620 *first;
    const NativeFunction_826BB620 *second;

    NodeRef_826BB620(const String_826BB620 &f, const NativeFunction_826BB620 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BB620 &ref, unsigned int hashValue);

struct Value_826BB620;
extern "C" void fn_82696330(Value_826BB620 *value);

struct Value_826BB620 {
    unsigned char type;          /* 0x00 */
    StringNode_826BB620 *string; /* 0x04 */
    int extra[2];

    Value_826BB620(const String_826BB620 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BB620()
    {
        fn_82696330(this);
    }
};

struct Flags_826BB620 {
    unsigned char flags;

    Flags_826BB620() : flags(0)
    {
    }
};

struct Object_826BB620 {
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
    virtual void SetMember(void *context, const String_826BB620 &name, const Value_826BB620 &value,
                           const Flags_826BB620 &flags); /* 0x28 */
};

struct Holder_826BB620 {
    char pad[0x10];
    Object_826BB620 object; /* 0x10 */
};

struct Hash_826BB620 {
    char storage;

    void Add(const String_826BB620 &key, const NativeFunction_826BB620 &value)
    {
        NodeRef_826BB620 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BB620 &key)
    {
        Entry_826BB620 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BB620 {
    char pad[0x44];
    String_826BB620 name; /* 0x44 */
    char pad2[0x280 - 0x48];
    Hash_826BB620 functions; /* 0x280 */
};

extern "C" void fn_826BB620(Self_826BB620 *self, void *context, Holder_826BB620 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BB620((void *)fn_82748020));
        Flags_826BB620 flags;
        Value_826BB620 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
