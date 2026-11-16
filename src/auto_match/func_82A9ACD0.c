typedef struct Variable_82A9ACD0 {
    int id;
    int component;
    unsigned int reg;
    unsigned int flags;
} Variable_82A9ACD0;

typedef struct List_82A9ACD0 {
    Variable_82A9ACD0 *data;
    unsigned int count;
} List_82A9ACD0;

extern char lbl_82196F10[];
extern char lbl_82196F18[];
extern int lbl_820D2920[];
extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);
extern void fn_82A99D88(void *, const char *, const char *);
extern void fn_82A99CF8(void *, const char *, void *, unsigned int, unsigned int);
extern int sprintf(char *, const char *, ...);

static __forceinline void Attribute_82A9ACD0(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

void fn_82A9ACD0(void *self, void *writer, List_82A9ACD0 *variables, void *context)
{
    Variable_82A9ACD0 *variable;
    char text[8];
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "variableDebugInfo");
    fn_82A9A860(writer);
    for (variable = variables->data; variable < variables->data + variables->count; variable++) {
        if ((variable->flags & 0xfe00) != 0x6000) {
            fn_82A99BC8(writer);
            fn_82A99B70(writer, "<%s", "info");
            Attribute_82A9ACD0(writer, "varID", variable->id);
            Attribute_82A9ACD0(writer, "component", variable->component);
            fn_82A99D88(writer, "live", (variable->flags & 0x80000000) ? lbl_82196F18 : lbl_82196F10);
            sprintf(text, "%c%d.%c", (variable->flags >> 9) & 0x7f, variable->reg >> 2,
                    lbl_820D2920[variable->reg & 3]);
            fn_82A99D88(writer, "reg", text);
            fn_82A99D88(writer, "at", (variable->flags & 0x40000000) ? lbl_82196F18 : lbl_82196F10);
            fn_82A99CF8(writer, "pc", context, (variable->flags >> 29) & 1, (variable->flags >> 16) & 0x1fff);
            fn_82A9A810(writer);
        }
    }
    fn_82A99C28(writer, "variableDebugInfo");
}
