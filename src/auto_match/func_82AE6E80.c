typedef struct Register_82AE6E80 {
    unsigned int pad0 : 3;
    unsigned int index : 9; /* 0x00 */
    unsigned int pad1 : 20;
    unsigned int flags; /* 0x04 */
    char pad08[0x20];
} Register_82AE6E80;

typedef struct Named_82AE6E80 {
    char pad0[0x18];
    const char *name; /* 0x18 */
} Named_82AE6E80;

typedef struct Context_82AE6E80 {
    char pad0[0xc];
    Register_82AE6E80 *registers; /* 0x0c */
} Context_82AE6E80;

extern void fn_82AE6D50(Context_82AE6E80 *ctx, unsigned int index, unsigned int *first, unsigned int *count);
extern Named_82AE6E80 *fn_82AE6CC0(Context_82AE6E80 *ctx, unsigned int index);
extern int fn_82F6DCE0(char *buffer, unsigned int count, const char *format, ...);
__declspec(noreturn) extern void fn_82AA66A8(void *ctx, int code, ...);

/* Reports an invalid register reference (error 0xdeb when the index is in range, else 0x119d). */
void fn_82AE6E80(Context_82AE6E80 *ctx, unsigned int index)
{
    unsigned int first;
    unsigned int count;
    char buffer[0x100];
    Register_82AE6E80 *reg;
    char type;
    Named_82AE6E80 *named;
    const char *name;

    fn_82AE6D50(ctx, index, &first, &count);
    reg = &ctx->registers[index];
    type = '?';
    switch ((reg->flags >> 4) & 7) {
    case 0:
        type = 'b';
        break;
    case 1:
        type = 'i';
        break;
    case 2:
        type = 'c';
        break;
    case 3:
        type = 's';
        break;
    }
    named = fn_82AE6CC0(ctx, index);
    if (named != 0) {
        name = named->name;
    } else {
        fn_82F6DCE0(buffer, 0x100, "%c%u", type, reg->index - first);
        name = buffer;
    }
    if (first < count) {
        fn_82AA66A8(ctx, 0xdeb, name, type, 0, type, count - first - 1);
    }
    fn_82AA66A8(ctx, 0x119d, name);
}
