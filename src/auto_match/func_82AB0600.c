typedef struct Register_82AB0600 {
    unsigned int index;  /* 0x0 */
    unsigned int opcode; /* 0x4 */
} Register_82AB0600;

typedef struct Table_82AB0600 {
    unsigned int pad0; /* 0x00 */
    int mode;          /* 0x04 */
    unsigned char pad8[0x14];
    Register_82AB0600 registers[16]; /* 0x1c */
} Table_82AB0600;

typedef struct Context_82AB0600 {
    unsigned int pad0;  /* 0x00 */
    unsigned int count; /* 0x04 */
    unsigned char pad8[0x8];
    Table_82AB0600 *table; /* 0x10 */
} Context_82AB0600;

extern void fn_82A29A38(void);
extern void fn_82AB0350(unsigned int flags, const unsigned int *src, unsigned int *a, unsigned int *b,
                        unsigned int *c, unsigned int *d);

void fn_82AB0600(unsigned int slot, int kind, unsigned int index, int flag, const unsigned int *src,
                 unsigned int flags, Context_82AB0600 *context, unsigned int **cursor)
{
    unsigned int *out = *cursor;
    unsigned int opcode;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;

    if (kind != 10 && kind != 5) {
        /* internal error report; opcode is left unassigned here, as in the original */
        fn_82A29A38();
    } else if (kind == 10) {
        opcode = ((index == 0) ^ 1) + 0x12;
        index = 0;
    } else {
        unsigned int count;
        opcode = 0x11;
        count = index + 1;
        if (count < context->count) {
            count = context->count;
        }
        context->count = count;
        if (context->table->mode == 1) {
            flag = 0;
        } else if (context->table->mode == 2) {
            flag = 1;
        }
    }
    if (slot >= 16) {
        fn_82A29A38();
    }
    context->table->registers[slot].opcode = opcode;
    context->table->registers[slot].index = index;
    fn_82AB0350(flags, src, &a, &b, &c, &d);
    *out++ =
        ((((((flag == 0) & 1) << 2 | (d & 3)) << 2 | (c & 3)) << 2 | (b & 3)) << 2 | (a & 3)) << 16 | 0x16;
    *out++ = (opcode & 0x3f) << 16 | (index & 0xffff);
    *cursor = out;
}
