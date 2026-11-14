typedef struct Inst_82AD2680 {
    int pad0;
    int pad4;
    union {
        unsigned int word;
        struct {
            unsigned int pad : 10;
            unsigned int a : 3;
            unsigned int pad2 : 2;
            unsigned int b : 3;
            unsigned int op : 7;
            unsigned int rest : 7;
        } f;
    } u;
} Inst_82AD2680;

typedef struct Block_82AD2680 {
    char pad[0x20];
    unsigned int head;
    unsigned int tail;
    char pad2[0x30 - 0x28];
    unsigned int flags;
} Block_82AD2680;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code);
extern char *fn_82ABDD90(void *ctx, unsigned int op, unsigned int a, unsigned int b);
extern unsigned char fn_82AD11D0(Inst_82AD2680 *inst);

void fn_82AD2680(void *ctx, Block_82AD2680 *block, unsigned int value)
{
    Inst_82AD2680 *inst;
    unsigned int found = 0;

    if (block->tail & 1) {
        inst = 0;
    } else {
        inst = (Inst_82AD2680 *)((block->head & ~1u) - 0x28);
        if (inst != 0) {
            unsigned int op = inst->u.f.op;
            unsigned char match;
            if (op == 0x56 || op == 0x57 || op == 0x59 || op == 0x5a || op == 0x54 || op == 0x55)
                match = 1;
            else
                match = 0;
            if (match) {
                found = *(unsigned int *)(fn_82ABDD90(ctx, inst->u.f.op, inst->u.f.a, inst->u.f.b) + ((int)inst - 0x10));
            }
        }
    }
    if (value == found) {
        if (fn_82AD11D0(inst)) {
            block->flags |= 0x4000000;
        } else if ((inst->u.word & 0x3f80) != 0x2a00) {
            fn_82AA66A8(ctx, 0x12c0);
        }
    }
}
