typedef struct Define_82A9C480 {
    int nameOffset;  /* 0x0 */
    int valueOffset; /* 0x4 */
} Define_82A9C480;

typedef struct DefineList_82A9C480 {
    Define_82A9C480 *data; /* 0x0 */
    unsigned int count;    /* 0x4 */
} DefineList_82A9C480;

typedef struct Argument_82A9C480 {
    char name[0x20]; /* 0x0 */
    char value[8];   /* 0x20 */
} Argument_82A9C480;

typedef struct ArgumentList_82A9C480 {
    Argument_82A9C480 *data; /* 0x0 */
    unsigned int count;      /* 0x4 */
} ArgumentList_82A9C480;

typedef struct Tool_82A9C480 {
    char pad0[0x20];
    DefineList_82A9C480 defines; /* 0x20 */
    char pad28[4];
    char *names; /* 0x2c */
    char pad30[8];
    ArgumentList_82A9C480 arguments; /* 0x38 */
    char pad40[0x84 - 0x40];
    const char *name; /* 0x84 */
} Tool_82A9C480;

extern char lbl_82196582[];
extern char lbl_8202936C[];
extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);
extern void fn_82A99D88(void *, const char *, const char *);

static __forceinline const char *GetName(Tool_82A9C480 *self, int offset)
{
    const char *name;
    if (offset == -1) {
        name = lbl_82196582;
    } else {
        name = self->names + offset;
    }
    return name;
}

void fn_82A9C480(Tool_82A9C480 *self, void *writer)
{
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "tool");
    if (self->name != 0) {
        fn_82A99D88(writer, "name", self->name);
    }
    fn_82A9A860(writer);
    if (self->defines.count != 0) {
        DefineList_82A9C480 *defines;
        Define_82A9C480 *define;
        fn_82A99BC8(writer);
        fn_82A99B70(writer, "<%s", "defines");
        fn_82A9A860(writer);
        defines = &self->defines;
        for (define = defines->data; define < defines->data + defines->count; define++) {
            fn_82A99BC8(writer);
            fn_82A99B70(writer, "<%s", lbl_8202936C);
            fn_82A99D88(writer, "name", GetName(self, define->nameOffset));
            fn_82A99D88(writer, "value", GetName(self, define->valueOffset));
            fn_82A9A810(writer);
        }
        fn_82A99C28(writer, "defines");
    }
    {
        ArgumentList_82A9C480 *arguments;
        Argument_82A9C480 *argument;
        fn_82A99BC8(writer);
        fn_82A99B70(writer, "<%s", "arguments");
        fn_82A9A860(writer);
        arguments = &self->arguments;
        for (argument = arguments->data; argument < arguments->data + arguments->count; argument++) {
            fn_82A99BC8(writer);
            fn_82A99B70(writer, "<%s", "argument");
            fn_82A99D88(writer, "name", argument->name);
            fn_82A99D88(writer, "value", argument->value);
            fn_82A9A810(writer);
        }
        fn_82A99C28(writer, "arguments");
    }
    fn_82A99C28(writer, "tool");
}
