typedef struct Statement_82A9AB78 {
    unsigned int firstPc; /* 0x0 */
    unsigned int lastPc;  /* 0x4 */
    int file;             /* 0x8 */
    int line;             /* 0xc */
    int scope;            /* 0x10 */
    int lastInstruction;  /* 0x14 */
} Statement_82A9AB78;

typedef struct List_82A9AB78 {
    Statement_82A9AB78 *data;
    unsigned int count;
} List_82A9AB78;

extern char lbl_820293A8[];
extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);
extern void fn_82A99CF8(void *, const char *, void *, unsigned int, unsigned int);

static __forceinline void Attribute_82A9AB78(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

void fn_82A9AB78(void *self, void *writer, List_82A9AB78 *statements, void *instructions)
{
    Statement_82A9AB78 *statement;
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "sourcemap");
    fn_82A9A860(writer);
    for (statement = statements->data; statement < statements->data + statements->count; statement++) {
        fn_82A99BC8(writer);
        fn_82A99B70(writer, "<%s", "statement");
        fn_82A99CF8(writer, "pc", instructions, statement->firstPc, statement->lastPc);
        Attribute_82A9AB78(writer, "file", statement->file);
        Attribute_82A9AB78(writer, lbl_820293A8, statement->line);
        Attribute_82A9AB78(writer, "scope", statement->scope);
        Attribute_82A9AB78(writer, "lastinstruction", statement->lastInstruction);
        fn_82A9A810(writer);
    }
    fn_82A99C28(writer, "sourcemap");
}
