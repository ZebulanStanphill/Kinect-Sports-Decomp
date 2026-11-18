typedef struct Variable_82A9C6B0 {
    unsigned int name;
    unsigned int typeOffset;
    int function;
    int scope;
} Variable_82A9C6B0;

typedef struct Variables_82A9C6B0 {
    Variable_82A9C6B0 *data;
    unsigned int count;
} Variables_82A9C6B0;

typedef struct Context_82A9C6B0 {
    char unknown[0x2c];
    const char *strings;
    char unknown30[0x90 - 0x30];
    int result;
} Context_82A9C6B0;

extern char lbl_82196582[];
extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A99C28(void *, const char *);
extern unsigned int fn_82935240(void *);
extern void *fn_8265C940(unsigned int, unsigned int);
extern void fn_8265C990(void *, unsigned int);
extern void fn_829355B0(void *, void *, unsigned int, int);
extern void fn_82A9BE60(Context_82A9C6B0 *, void *, void *, void *, const char *);

static __forceinline void Attribute_82A9C6B0(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

static __forceinline const char *String_82A9C6B0(Context_82A9C6B0 *self, int offset)
{
    return offset == -1 ? lbl_82196582 : self->strings + offset;
}

void fn_82A9C6B0(Context_82A9C6B0 *self, void *writer, Variables_82A9C6B0 *variables, void *types)
{
    unsigned int count;
    char *storage;
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "variables");
    fn_82A9A860(writer);
    count = fn_82935240(types);
    storage = fn_8265C940(count * 4, 0x24870000);
    if (!storage) {
        self->result = 0x8007000e;
    } else {
        Variable_82A9C6B0 *variable;
        char *typeData;
        fn_829355B0(types, storage, count, 0);
        typeData = storage + 8;
        for (variable = variables->data; variable < variables->data + variables->count; ++variable) {
            if (variable->name & 0x80000000) {
                fn_82A99BC8(writer);
                fn_82A99B70(writer, "<%s", "variable");
                Attribute_82A9C6B0(writer, "id", variable - variables->data);
                Attribute_82A9C6B0(writer, "function", variable->function);
                Attribute_82A9C6B0(writer, "scope", variable->scope);
                fn_82A9A860(writer);
                fn_82A9BE60(self, writer, typeData, storage + variable->typeOffset + 8,
                            String_82A9C6B0(self, variable->name & 0x7fffffff));
                fn_82A99C28(writer, "variable");
            }
        }
        fn_8265C990(storage, 0x24870000);
    }
    fn_82A99C28(writer, "variables");
}
