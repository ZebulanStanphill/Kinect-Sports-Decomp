typedef struct node_82AD1328 node_82AD1328;

typedef struct {
    unsigned int pad0 : 19;
    unsigned int swz : 8;
    unsigned int kind : 4;
    unsigned int pad31 : 1;
    int pad4;
    int pad8;
    node_82AD1328 *node;
} operand_82AD1328;

struct node_82AD1328 {
    int pad0;
    int pad4;
    unsigned int pad8 : 8;
    unsigned int flag : 1;
    unsigned int pad9 : 9;
    unsigned int op : 7;
    unsigned int pad25 : 7;
    int padc;
    unsigned int pad10 : 16;
    unsigned int reg : 16;
    unsigned char pad14[0x18];
    operand_82AD1328 *srcs[4];
};

static unsigned char node_is_flagged(node_82AD1328 *n)
{
    return n->flag;
}

extern unsigned char fn_82ABDBE8(operand_82AD1328 *op, operand_82AD1328 *other);

void fn_82AD1328(void *param_1, node_82AD1328 **pnode, unsigned int *pswz)
{
    node_82AD1328 *node = *pnode;
    operand_82AD1328 *src;
    node_82AD1328 *n;

    if (node->op == 0x6e) {
        src = node->srcs[*pswz & 3];
        node = src->node;
        *pnode = node;
        *pswz = src->swz;
    }
    if (node->op == 3) {
        src = node->srcs[0];
        if (src->kind == 0 && fn_82ABDBE8(src, node->srcs[1])) {
            n = src->node;
            if (node_is_flagged(n) && n->reg == node->reg) {
                *pnode = n;
                *pswz = (src->swz >> ((*pswz & 3) << 1)) & 3 | 0xe4;
            }
        }
    }
}
