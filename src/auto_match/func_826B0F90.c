typedef struct Object_826B0F90 Object_826B0F90;

struct Object_826B0F90 {
    char pad00[8];
    unsigned int refs; /* 0x08 */
    char pad0c[4];
    char members[4];       /* 0x10 */
    Object_826B0F90 *next; /* 0x14 */
};

typedef struct Context_826B0F90 {
    char pad000[0xf8];
    char globals[0x18]; /* 0xf8 */
    char builtins[4];   /* 0x110 */
} Context_826B0F90;

typedef struct Env_826B0F90 {
    char pad00[0x78];
    Context_826B0F90 *context; /* 0x78 */
    unsigned char version;     /* 0x7c */
    char pad7d[0xc8 - 0x7d];
    Object_826B0F90 **scopes; /* 0xc8 */
    unsigned int scopeCount;  /* 0xcc */
} Env_826B0F90;

typedef struct Entry_826B0F90 {
    char pad00[8];
    char value[4]; /* 0x08 */
} Entry_826B0F90;

extern Entry_826B0F90 *fn_826BF098(void *members, int name);
extern void *fn_826AF698(void *members, int name);
extern unsigned char fn_826A18A8(void *table, int name, int caseSensitive);
extern void fn_826824B0(Object_826B0F90 *object);

static __forceinline void *MemberValue(Entry_826B0F90 *member)
{
    return member != 0 ? member->value : 0;
}

static __forceinline void *FindMember(Env_826B0F90 *env, void *members, int name)
{
    if (env->version > 6) {
        return MemberValue(fn_826BF098(members, name));
    }
    return fn_826AF698(members, name);
}

void *fn_826B0F90(Env_826B0F90 *self, int name)
{
    Object_826B0F90 *scope;
    Object_826B0F90 *next;
    Object_826B0F90 *top;
    void *found;
    int version;

    if (self->scopeCount == 0)
        return 0;
    top = self->scopes[self->scopeCount - 1];
    if (top != 0)
        top->refs = (top->refs + 1) & 0x8fffffff;
    scope = top;
    while (scope != 0) {
        found = FindMember(self, scope->members, name);
        if (found != 0) {
            fn_826824B0(scope);
            return found;
        }
        version = self->version;
        if ((version >= 5 && fn_826A18A8(self->context->builtins, name, self->version > 6)) ||
            (version >= 6 && fn_826A18A8(self->context->globals, name, self->version > 6))) {
            fn_826824B0(scope);
            break;
        }
        next = scope->next;
        if ((int)next != 0)
            next->refs = (next->refs + 1) & 0x8fffffff;
        fn_826824B0(scope);
        scope = scope->next;
    }
    return 0;
}
