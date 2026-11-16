typedef struct Function_82A9C880 {
    int nameOffset;              /* 0x0 */
    int returnId;                /* 0x4 */
    int *parameters;             /* 0x8 */
    unsigned int parameterCount; /* 0xc */
    int unknown;                 /* 0x10 */
} Function_82A9C880;

typedef struct List_82A9C880 {
    Function_82A9C880 *data;
    unsigned int count;
} List_82A9C880;

typedef struct Context_82A9C880 {
    char padding[0x2c];
    char *names; /* 0x2c */
} Context_82A9C880;

extern char lbl_82196582[];
extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);
extern void fn_82A99D88(void *, const char *, const char *);

static __forceinline void Attribute_82A9C880(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

static __forceinline const char *GetName(Context_82A9C880 *self, int offset)
{
    const char *name;
    if (offset == -1) {
        name = lbl_82196582;
    } else {
        name = self->names + offset;
    }
    return name;
}

void fn_82A9C880(Context_82A9C880 *self, void *writer, List_82A9C880 *functions)
{
    Function_82A9C880 *function;
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "funcInfo");
    fn_82A9A860(writer);
    for (function = functions->data; function < functions->data + functions->count; function++) {
        int *parameter;
        fn_82A99BC8(writer);
        fn_82A99B70(writer, "<%s", "function");
        Attribute_82A9C880(writer, "id", function - functions->data);
        fn_82A99D88(writer, "name", GetName(self, function->nameOffset));
        Attribute_82A9C880(writer, "retID", function->returnId);
        fn_82A9A860(writer);
        for (parameter = function->parameters; parameter < function->parameters + function->parameterCount;
             parameter++) {
            fn_82A99BC8(writer);
            fn_82A99B70(writer, "<%s", "parameter");
            Attribute_82A9C880(writer, "id", *parameter);
            fn_82A9A810(writer);
        }
        fn_82A99C28(writer, "function");
    }
    fn_82A99C28(writer, "funcInfo");
}
