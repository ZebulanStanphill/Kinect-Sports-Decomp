/* Scaleform ActionScript environment: splits a variable path ("path:name", "path.name" or
   "path/") into its path and variable parts. Returns 0 when the string has no separator. */
typedef struct StringNode_826A8AA8 {
    const char *data; /* 0x00 */
    int pad04;        /* 0x04 */
    int refCount;     /* 0x08 */
} StringNode_826A8AA8;

typedef struct String_826A8AA8 {
    StringNode_826A8AA8 *node; /* 0x00 */
} String_826A8AA8;

typedef struct StringManager_826A8AA8 {
    int unused;
} StringManager_826A8AA8;

typedef struct Builtins_826A8AA8 {
    StringNode_826A8AA8 *empty; /* 0x000 */
    char pad004[0x248];
    StringManager_826A8AA8 manager; /* 0x24c */
} Builtins_826A8AA8;

typedef struct GlobalContext_826A8AA8 {
    char pad00[8];
    Builtins_826A8AA8 builtins; /* 0x08 */
} GlobalContext_826A8AA8;

typedef struct StringContext_826A8AA8 {
    GlobalContext_826A8AA8 *context; /* 0x00 */
} StringContext_826A8AA8;

extern char *strchr(const char *s, int c);
extern char *strrchr(const char *s, int c);
extern void fn_826944C8(StringNode_826A8AA8 *node);
extern StringNode_826A8AA8 *fn_82694610(StringManager_826A8AA8 *manager, const char *s, unsigned int length);
extern StringNode_826A8AA8 *fn_82694700(StringManager_826A8AA8 *manager, const char *s);

static __forceinline StringManager_826A8AA8 *GetManager_826A8AA8(Builtins_826A8AA8 *builtins)
{
    return &builtins->manager;
}

static __forceinline void Release_826A8AA8(StringNode_826A8AA8 *node)
{
    if (--node->refCount == 0) {
        fn_826944C8(node);
    }
}

static __forceinline void Assign_826A8AA8(String_826A8AA8 *dst, StringNode_826A8AA8 *node)
{
    node->refCount++;
    Release_826A8AA8(dst->node);
    dst->node = node;
}

static __forceinline Builtins_826A8AA8 *GetBuiltins_826A8AA8(GlobalContext_826A8AA8 *context)
{
    return &context->builtins;
}

int fn_826A8AA8(StringContext_826A8AA8 *sc, String_826A8AA8 *varPath, String_826A8AA8 *path,
                String_826A8AA8 *var)
{
    int colonIndex = -1;
    const char *cstr = varPath->node->data;
    const char *p;
    StringNode_826A8AA8 *node;

    if ((p = strchr(cstr, ':')) != 0) {
        colonIndex = (int)(p - cstr);
    } else {
        if ((p = strrchr(cstr, '.')) != 0) {
            colonIndex = (int)(p - cstr);
        } else {
            if ((p = strrchr(cstr, '/')) == 0) {
                return 0;
            }
        }
    }
    if (colonIndex >= 0) {
        node = fn_82694700(GetManager_826A8AA8(GetBuiltins_826A8AA8(sc->context)),
                           varPath->node->data + colonIndex + 1);
        node->refCount++;
        Assign_826A8AA8(var, node);
        Release_826A8AA8(node);
    } else {
        Assign_826A8AA8(var, sc->context->builtins.empty);
    }
    if (colonIndex > 0) {
        if (varPath->node->data[colonIndex - 1] == '/') {
            colonIndex--;
        }
    }
    if (colonIndex >= 0) {
        node = fn_82694610(GetManager_826A8AA8(GetBuiltins_826A8AA8(sc->context)), varPath->node->data,
                           colonIndex);
        node->refCount++;
        Assign_826A8AA8(path, node);
        Release_826A8AA8(node);
    } else {
        Assign_826A8AA8(path, varPath->node);
    }
    return 1;
}
