typedef struct Name_82975A18 {
    const char *text; /* 0x0 */
} Name_82975A18;

typedef struct Node_82975A18 {
    int field0;    /* 0x0 */
    int nameIndex; /* 0x4 */
    int field8;    /* 0x8 */
    int number;    /* 0xc */
    char pad10[0x38 - 0x10];
    int sourceIndex; /* 0x38 */
} Node_82975A18;

typedef struct Context_82975A18 {
    char pad0[0x10];
    Name_82975A18 **names; /* 0x10 */
    Node_82975A18 **nodes; /* 0x14 */
} Context_82975A18;

extern const char lbl_821CE31C[]; /* "?" */
extern int fn_828F6FA8(char *out, int size, const char *format, ...);
extern unsigned int strlen(const char *s);

void fn_82975A18(Context_82975A18 *context, Node_82975A18 *node, char *buffer, int size)
{
    Name_82975A18 *name;
    Node_82975A18 *source;
    int length;

    name = context->names[node->nameIndex];
    if (node->sourceIndex == -1) {
        source = node;
    } else {
        source = context->nodes[node->sourceIndex];
    }
    if (name->text[0] != 0 && name->text[1] == 0) {
        fn_828F6FA8(buffer, size, "%s", name->text);
    } else {
        fn_828F6FA8(buffer, size, "%s_", name->text);
    }
    length = strlen(buffer);
    if (source->number != -1) {
        fn_828F6FA8(buffer + length, size - length, "%u", source->number);
    } else {
        fn_828F6FA8(buffer + length, size - length, lbl_821CE31C);
    }
    buffer[size - 1] = 0;
}
