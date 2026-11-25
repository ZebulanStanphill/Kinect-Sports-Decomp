struct StringNode_826A98D8 {
    const char *text;  /* 0x00 */
    void *manager;     /* 0x04 */
    int refCount;      /* 0x08 */
    int hashFlags;     /* 0x0c */
    unsigned int size; /* 0x10 */
};

extern "C" {
void fn_826944C8(StringNode_826A98D8 *node);
StringNode_826A98D8 *fn_82694610(void *manager, const char *text, unsigned int length);
StringNode_826A98D8 *fn_82694700(void *manager, const char *text);
}

class ASString_826A98D8
{
  public:
    StringNode_826A98D8 *node;

    __forceinline ASString_826A98D8(StringNode_826A98D8 *other) : node(other)
    {
        node->refCount++;
    }

    __forceinline ~ASString_826A98D8()
    {
        Release(node);
    }

    static __forceinline void Release(StringNode_826A98D8 *node)
    {
        if (--node->refCount == 0) {
            fn_826944C8(node);
        }
    }

    __forceinline ASString_826A98D8 &operator=(const ASString_826A98D8 &other)
    {
        other.node->refCount++;
        Release(node);
        node = other.node;
        return *this;
    }
};

struct Character_826A98D8;

struct CharacterVtbl_826A98D8 {
    void *slots0[21];
    Character_826A98D8 *(*GetRoot)(Character_826A98D8 *self, int level); /* 0x54 */
    void *slots58[37];
    Character_826A98D8 *(*FindChild)(Character_826A98D8 *self, ASString_826A98D8 *name, int first); /* 0xec */
};

struct Character_826A98D8 {
    CharacterVtbl_826A98D8 *vtbl;
};

struct Context_826A98D8 {
    char pad0[0x8];
    StringNode_826A98D8 *emptyString; /* 0x08 */
    char padC[0x254 - 0xc];
    char stringManager[1]; /* 0x254 */
};

struct Environment_826A98D8 {
    char pad0[0x74];
    Character_826A98D8 *target; /* 0x74 */
    Context_826A98D8 *context;  /* 0x78 */
    char pad7C[0xc6 - 0x7c];
    unsigned char flags; /* 0xc6 */
};

extern "C" void fn_826A9168(Environment_826A98D8 *env, const char *format, ...);

static __forceinline const char *FindSeparator(const char *p)
{
    while (*p != 0) {
        if (*p == '.' && p[1] == '.') {
            p++;
        } else if (*p == '.' || *p == '/') {
            return p;
        }
        p++;
    }
    return 0;
}

extern "C" Character_826A98D8 *fn_826A98D8(Environment_826A98D8 *self, const ASString_826A98D8 &path,
                                           unsigned int flags)
{
    if (path.node->size == 0) {
        return (self->flags & 0x40) ? 0 : self->target;
    }

    const char *p = path.node->text;
    Character_826A98D8 *target = self->target;
    ASString_826A98D8 name(self->context->emptyString);

    if (*p == '/') {
        target = target->vtbl->GetRoot(target, 0);
        p++;
    }
    int first = 1;
    for (;;) {
        const char *separator = FindSeparator(p);
        if (separator == p) {
            if ((flags & 4) == 0) {
                fn_826A9168(self, "Error: invalid path '%s'\n", path.node->text);
            }
            break;
        }
        StringNode_826A98D8 *node;
        if (separator != 0) {
            node = fn_82694610(self->context->stringManager, p, separator - p);
        } else {
            node = fn_82694700(self->context->stringManager, p);
        }
        name = ASString_826A98D8(node);
        if (name.node->size != 0) {
            target = target->vtbl->FindChild(target, &name, first);
        }
        if (target == 0 || separator == 0) {
            break;
        }
        p = separator + 1;
        first = 0;
    }
    return target;
}
