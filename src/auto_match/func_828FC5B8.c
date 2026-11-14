typedef struct Compiler_828FC5B8 {
    void *log;
    char pad[0x48];
    int failed;     /* 0x4c */
} Compiler_828FC5B8;

typedef struct Node_828FC5B8 {
    char pad[8];
    const char *text;
} Node_828FC5B8;

extern void fn_828FA8D8(void *log, void *location, int code, const char *fmt, ...);

unsigned int fn_828FC5B8(Compiler_828FC5B8 *self, Node_828FC5B8 *node)
{
    const char *text = node->text;
    const char *p;
    unsigned int mask = 0;
    unsigned int prev = 0;
    unsigned int comp;

    if (text == 0 || *text == 0)
        return 0xf0000;
    for (p = text; *p != 0; p++) {
        switch (*p) {
        case 'x':
        case 'r':
            comp = 0;
            mask |= 0x10000;
            break;
        case 'y':
        case 'g':
            comp = 1;
            mask |= 0x20000;
            break;
        case 'z':
        case 'b':
            comp = 2;
            mask |= 0x40000;
            break;
        case 'w':
        case 'a':
            comp = 3;
            mask |= 0x80000;
            break;
        default:
            goto fail;
        }
        if (p != text && comp <= prev)
            goto fail;
        prev = comp;
    }
    return mask;
fail:
    fn_828FA8D8(self->log, node, 0x7d3, "invalid mask '%s'", text);
    self->failed = 1;
    return 0;
}
