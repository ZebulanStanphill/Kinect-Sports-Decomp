typedef struct Compiler_828FC6C8 {
    void *log;
    char pad[0x48];
    int failed;
} Compiler_828FC6C8;

typedef struct Node_828FC6C8 {
    char pad[8];
    const char *text;
} Node_828FC6C8;

extern void fn_828FA8D8(void *log, void *location, int code, const char *fmt, ...);

unsigned int fn_828FC6C8(Compiler_828FC6C8 *self, Node_828FC6C8 *node)
{
    const char *text = node->text;
    const char *p = text;
    int comp = 0;
    unsigned int mask = 0;
    unsigned int shift;

    if (text == 0 || *text == 0)
        return 0xe40000;
    for (shift = 16; shift < 24; shift += 2) {
        if (*p != 0) {
            switch (*p) {
            case 'x':
            case 'r':
                comp = 0;
                break;
            case 'y':
            case 'g':
                comp = 1;
                break;
            case 'z':
            case 'b':
                comp = 2;
                break;
            case 'w':
            case 'a':
                comp = 3;
                break;
            default:
                goto fail;
            }
            p++;
        }
        mask |= comp << shift;
    }
    if (*p == 0)
        return mask;
fail:
    fn_828FA8D8(self->log, node, 0x7d4, "invalid swizzle '%s'", text);
    self->failed = 1;
    return 0;
}
