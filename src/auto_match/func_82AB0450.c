typedef struct Register_82AB0450 {
    unsigned int index;  /* 0x0 */
    unsigned int opcode; /* 0x4 */
} Register_82AB0450;

typedef struct Table_82AB0450 {
    unsigned int pad0; /* 0x00 */
    int mode;          /* 0x04 */
    unsigned char pad8[0x14];
    Register_82AB0450 registers[16]; /* 0x1c */
} Table_82AB0450;

typedef struct Context_82AB0450 {
    unsigned int pad0;  /* 0x00 */
    unsigned int count; /* 0x04 */
    unsigned char pad8[0x8];
    Table_82AB0450 *table; /* 0x10 */
} Context_82AB0450;

typedef struct Command_82AB0450 {
    unsigned int extended : 1;
    unsigned int pad : 2;
    unsigned int reg : 8;
    unsigned int type : 5;
    unsigned int opcode : 16;
} Command_82AB0450;

typedef union CommandWord_82AB0450 {
    unsigned int word;
    Command_82AB0450 bits;
} CommandWord_82AB0450;

extern void fn_82A29A38(void);
extern void fn_82AB0350(unsigned int flags, const unsigned int *src, int *a, int *b, int *c, int *d);

void fn_82AB0450(unsigned int slot, int kind, unsigned int index, int flag, const unsigned int *src,
                 unsigned int flags, Context_82AB0450 *context, unsigned int **cursor)
{
    unsigned int *out = *cursor;
    CommandWord_82AB0450 command;
    int a;
    int b;
    int c;
    int d;

    command.word = 0;
    command.bits.reg = index;
    command.bits.opcode = 0x17;
    if (kind > 13) {
        fn_82A29A38();
    }
    if (slot >= 16) {
        fn_82A29A38();
    }
    if (kind == 5) {
        unsigned int count;
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
        command.bits.type = 5;
        if (index >= 8) {
            fn_82A29A38();
        }
    } else if (kind == 10) {
        command.bits.type = 2;
    } else {
        command.bits.reg = (kind + 1) << 4 | index;
        command.bits.type = 5;
    }
    if (slot >= 16) {
        fn_82A29A38();
    }
    context->table->registers[slot].opcode = 12;
    context->table->registers[slot].index = slot;
    fn_82AB0350(flags, src, &a, &b, &c, &d);
    {
        int x = d;
        int y = c;
        int z = b;
        int w = a;

        if (flag == 0 && w == 3 && z == 3 && y == 3 && x == 3) {
            command.bits.extended = 0;
            *out++ = command.word;
        } else {
            command.bits.extended = 1;
            *out++ = command.word;
            *out++ = (((((flag & 1) << 2 | (x & 3)) << 2 | (y & 3)) << 2 | (z & 3)) << 2) | (w & 3);
        }
    }
    *out++ = 0xc << 16 | (slot & 0xffff);
    *cursor = out;
}
