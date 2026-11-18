typedef struct Source_82ABABC0 {
    unsigned int type : 4;
    unsigned int sub : 4;
    unsigned int slot : 8;
    unsigned int index : 11;
    unsigned int mask : 4;
    unsigned int flag : 1;
} Source_82ABABC0;

typedef struct Op_82ABABC0 {
    unsigned int last : 1;
    unsigned int pad : 2;
    unsigned int arg : 8;
    unsigned int op : 5;
    unsigned int code : 16;
} Op_82ABABC0;

typedef struct Operand_82ABABC0 {
    unsigned int kind : 16;
    unsigned int index : 16;
} Operand_82ABABC0;

typedef struct Program_82ABABC0 {
    char pad[0x644];
    Source_82ABABC0 sources[1]; /* 0x644 */
} Program_82ABABC0;

unsigned int *fn_82ABABC0(Program_82ABABC0 *program, int i, unsigned int *out, int *count)
{
    Source_82ABABC0 *source = &program->sources[i];
    unsigned int word = *(unsigned int *)source;
    unsigned int type = word >> 28;
    unsigned int sub = (word >> 24) & 0xf;
    unsigned int mask = (word & 0x1e) << 15;
    unsigned int index = (word >> 5) & 0x7ff;
    unsigned int op;
    unsigned int arg;
    unsigned int swizzle;
    Op_82ABABC0 head;
    Operand_82ABABC0 operand;

    switch (type) {
    case 0:
        if (sub != 0) {
            goto other;
        }
        op = 0;
        arg = 0;
        break;
    case 4:
        if (sub != 0) {
            goto other;
        }
        op = 1;
        arg = 0;
        break;
    case 5:
        op = 5;
        arg = sub;
        break;
    case 10:
        op = 2;
        arg = sub;
        break;
    case 11:
        if (sub != 0) {
            goto other;
        }
        op = 4;
        arg = 0;
        break;
    default:
    other:
        op = 5;
        arg = ((type + 1) << 4) | sub;
        break;
    }
    if (mask == 0xf0000) {
        swizzle = 0x55;
    } else {
        swizzle = 0;
        if ((mask & 0x10000) != 0) {
            swizzle = 1;
        }
        if ((mask & 0x20000) != 0) {
            swizzle |= 4;
        }
        if ((mask & 0x40000) != 0) {
            swizzle |= 0x10;
        }
        if ((mask & 0x80000) != 0) {
            swizzle |= 0x40;
        }
    }
    head.last = 1;
    head.pad = 0;
    head.arg = arg;
    head.op = op;
    head.code = 0x1b;
    operand.kind = 0xb;
    operand.index = index;
    *out++ = *(unsigned int *)&head;
    *out++ = swizzle;
    *out++ = *(unsigned int *)&operand;
    source->slot = index;
    *count += 3;
    return out;
}
