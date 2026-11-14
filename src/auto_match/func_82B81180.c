typedef struct Instr_82B81180 {
    unsigned int pad0 : 18;
    unsigned int op : 7;
    unsigned int low : 7;
} Instr_82B81180;

typedef struct Node_82B81180 {
    int f0;
    int f4;
    Instr_82B81180 instr;       /* 0x08 */
    char pad[0x20];
    unsigned int *srcB;         /* 0x2c */
    unsigned int *srcA;         /* 0x30 */
} Node_82B81180;

typedef struct Page_82B81180 {
    struct { char pad[0x94]; void *ctx; } *owner;
} Page_82B81180;

extern void fn_82AA66A8(void *, int, ...);
extern void fn_82AD1270(unsigned int *p, unsigned int mask);

void fn_82B81180(Node_82B81180 *self)
{
    Instr_82B81180 *in = &self->instr;

    switch (in->op) {
    case 0x15:
        in->op = 0x16;
        break;
    case 0x16:
        in->op = 0x15;
        break;
    case 0x17:
        in->op = 0x18;
        fn_82AD1270(self->srcA, 4);
        break;
    case 0x18:
        in->op = 0x17;
        fn_82AD1270(self->srcA, 4);
        break;
    case 0x3b:
        in->op = 0x3c;
        break;
    case 0x3c:
        in->op = 0x3b;
        break;
    case 0x3d:
        in->op = 0x3e;
        fn_82AD1270(self->srcB, 4);
        break;
    case 0x3e:
        in->op = 0x3d;
        fn_82AD1270(self->srcB, 4);
        break;
    default:
        fn_82AA66A8(((Page_82B81180 *)((unsigned int)self & ~0xfff))->owner->ctx, 0x12c0);
        break;
    }
}
