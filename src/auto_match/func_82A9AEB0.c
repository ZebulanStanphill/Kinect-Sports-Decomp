typedef struct Scope_82A9AEB0 {
    int enclosing;
    unsigned int flags;
} Scope_82A9AEB0;

typedef struct List_82A9AEB0 {
    Scope_82A9AEB0 *data;
    unsigned int count;
} List_82A9AEB0;

extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);

static __forceinline void Attribute_82A9AEB0(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

void fn_82A9AEB0(void *self, void *writer, List_82A9AEB0 *scopes)
{
    Scope_82A9AEB0 *scope;
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "scopes");
    fn_82A9A860(writer);
    for (scope = scopes->data; scope < scopes->data + scopes->count; scope++) {
        if ((scope->flags & 0x80000000) != 0) {
            fn_82A99BC8(writer);
            fn_82A99B70(writer, "<%s", "scope");
            Attribute_82A9AEB0(writer, "id", scope - scopes->data);
            Attribute_82A9AEB0(writer, "enclosingid", scope->enclosing);
            fn_82A9A810(writer);
        }
    }
    fn_82A99C28(writer, "scopes");
}
