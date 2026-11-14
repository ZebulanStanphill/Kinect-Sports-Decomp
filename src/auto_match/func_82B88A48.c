typedef struct Node_82B88A48 {
    unsigned int pad0 : 4;
    unsigned int kind : 3;
    unsigned int pad7 : 25;
    struct Node_82B88A48 *next;
} Node_82B88A48;

typedef struct Operand_82B88A48 {
    char pad0[0xc];
    int size;
} Operand_82B88A48;

typedef struct Instr_82B88A48 {
    Node_82B88A48 *uses;
    int f4;
    unsigned int pad8 : 18;
    unsigned int opcode : 7;
    unsigned int pad25 : 7;
    char padC[0x1c - 0xc];
    void *dest;
    char pad20[0x2c - 0x20];
    Operand_82B88A48 *src;
} Instr_82B88A48;

extern void *fn_82ACA920(void *ctx, Operand_82B88A48 *src, int size);
extern void fn_82AD1270(void *value, int n);
extern void fn_82AD1978(void *value, Node_82B88A48 *use);
extern void *fn_82B85A88(void *ctx, void *dest, Operand_82B88A48 *src);
extern void *fn_82B859E8(void *ctx, void *dest, Operand_82B88A48 *src);
extern void *fn_82B85BC8(void *ctx, void *dest, void *value);
extern void *fn_82B85B28(void *ctx, void *dest, void *value);

static __forceinline int NotNull(Node_82B88A48 *n)
{
    if (n)
        return 1;
    return 0;
}

void *fn_82B88A48(Instr_82B88A48 *instr, void *ctx)
{
    void *value = 0;
    void *tmp;
    Node_82B88A48 *n;

    switch (instr->opcode) {
    case 0x3b:
        value = fn_82B85A88(ctx, instr->dest, instr->src);
        break;
    case 0x3c:
        value = fn_82B859E8(ctx, instr->dest, instr->src);
        break;
    case 0x3d:
        tmp = fn_82ACA920(ctx, instr->src, instr->src->size);
        fn_82AD1270(tmp, 4);
        value = fn_82B85BC8(ctx, instr->dest, tmp);
        break;
    case 0x3e:
        tmp = fn_82ACA920(ctx, instr->src, instr->src->size);
        fn_82AD1270(tmp, 4);
        value = fn_82B85B28(ctx, instr->dest, tmp);
        break;
    }
    for (n = instr->uses; NotNull(n); n = n->next) {
        if (n->kind == 0)
            fn_82AD1978(value, n);
    }
    return value;
}
