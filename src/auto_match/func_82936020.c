typedef struct Compiler_82936020 {
    void *log;
    char pad[0x30];
    int failed;
} Compiler_82936020;

typedef struct Node_82936020 {
    char pad[8];
    const char *text;
} Node_82936020;

extern void fn_828FA8D8(void *log, void *location, int code, const char *fmt, ...);

unsigned int fn_82936020(Compiler_82936020 *self, Node_82936020 *node)
{
    const char *text = node->text;
    const char *p = text;
    int comp = 0;
    unsigned int mask = 0;
    unsigned int shift;

    if (text == 0 || *text == 0)
        return 0xe4;
    for (shift = 0; shift < 8; shift += 2) {
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
