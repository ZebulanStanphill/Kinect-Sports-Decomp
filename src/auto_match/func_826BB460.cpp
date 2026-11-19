struct StringNode_826BB460 {
    const char *data;       /* 0x00 */
    void *manager;          /* 0x04 */
    int refCount;           /* 0x08 */
    unsigned int hashFlags; /* 0x0c */
};

struct String_826BB460 {
    StringNode_826BB460 *node;

    unsigned int GetHash() const
    {
        return node->hashFlags;
    }
};

struct Entry_826BB460 {
    int key;
    int value;
};

extern "C" Entry_826BB460 *fn_8273E508(void *hash, const String_826BB460 *key);
extern "C" void fn_826824B0(void *object);
extern "C" void fn_827435F0(void);

struct NativeFunction_826BB460 {
    void *function; /* 0x00 */
    void *object;   /* 0x04 */

    NativeFunction_826BB460(void *f) : function(f), object(0)
    {
    }

    ~NativeFunction_826BB460()
    {
        if (object != 0)
            fn_826824B0(object);
    }
};

struct NodeRef_826BB460 {
    const String_826BB460 *first;
    const NativeFunction_826BB460 *second;

    NodeRef_826BB460(const String_826BB460 &f, const NativeFunction_826BB460 &s) : first(&f), second(&s)
    {
    }

    unsigned int GetHash() const
    {
        return first->GetHash();
    }
};

extern "C" void fn_826B3420(void *hash, void *heap, const NodeRef_826BB460 &ref, unsigned int hashValue);

struct Value_826BB460;
extern "C" void fn_82696330(Value_826BB460 *value);

struct Value_826BB460 {
    unsigned char type;          /* 0x00 */
    StringNode_826BB460 *string; /* 0x04 */
    int extra[2];

    Value_826BB460(const String_826BB460 &s)
    {
        type = 0xb;
        string = s.node;
        string->refCount++;
    }

    ~Value_826BB460()
    {
        fn_82696330(this);
    }
};

struct Flags_826BB460 {
    unsigned char flags;

    Flags_826BB460() : flags(0)
    {
    }
};

struct Object_826BB460 {
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
    virtual void SetMember(void *context, const String_826BB460 &name, const Value_826BB460 &value,
                           const Flags_826BB460 &flags); /* 0x28 */
};

struct Holder_826BB460 {
    char pad[0x10];
    Object_826BB460 object; /* 0x10 */
};

struct Hash_826BB460 {
    char storage;

    void Add(const String_826BB460 &key, const NativeFunction_826BB460 &value)
    {
        NodeRef_826BB460 ref(key, value);
        fn_826B3420(this, this, ref, ref.GetHash());
    }

    int *Get(const String_826BB460 &key)
    {
        Entry_826BB460 *e = fn_8273E508(this, &key);
        return e ? &e->value : 0;
    }
};

struct Self_826BB460 {
    char pad[0x3c];
    String_826BB460 name; /* 0x3c */
    char pad2[0x280 - 0x40];
    Hash_826BB460 functions; /* 0x280 */
};

extern "C" void fn_826BB460(Self_826BB460 *self, void *context, Holder_826BB460 *holder)
{
    if (self->functions.Get(self->name) == 0) {
        self->functions.Add(self->name, NativeFunction_826BB460((void *)fn_827435F0));
        Flags_826BB460 flags;
        Value_826BB460 value(self->name);
        holder->object.SetMember(context, self->name, value, flags);
    }
}
