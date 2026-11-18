typedef struct Node_82B81938 {
    int pad0;
    int pad4;
    unsigned int pad8 : 18; /* 0x8 */
    unsigned int op : 7;
    unsigned int pad25 : 7;
} Node_82B81938;

typedef struct Operand_82B81938 {
    unsigned int pad0 : 4; /* 0x0 */
    unsigned int count : 3;
    unsigned int pad7 : 12;
    unsigned int swizzle : 8;
    unsigned int reg : 5;
    int pad4;
    int pad8;
    Node_82B81938 *node; /* 0xc */
} Operand_82B81938;

extern unsigned char fn_82ABDBE8(Operand_82B81938 *a, Operand_82B81938 *b);
extern double fn_82B80EF8(Node_82B81938 *node, unsigned int component, unsigned int reg);

unsigned char fn_82B81938(Operand_82B81938 *a, Operand_82B81938 *b)
{
    Node_82B81938 *nodeA;
    Node_82B81938 *nodeB;
    unsigned int count;
    unsigned int regA;
    unsigned int regB;
    unsigned int i;
    unsigned int componentA;
    unsigned int componentB;

    if (fn_82ABDBE8(a, b)) {
        return 1;
    }
    nodeA = a->node;
    nodeB = b->node;
    if (nodeA->op != 0x7d || nodeB->op != 0x7d) {
        return 0;
    }
    count = a->count;
    if (count != b->count) {
        return 0;
    }
    regA = a->reg;
    regB = b->reg;
    for (i = 0; i < count; i++) {
        componentA = (a->swizzle >> (i * 2)) & 3;
        componentB = (b->swizzle >> (i * 2)) & 3;
        if (fn_82B80EF8(nodeA, componentA, regA) != fn_82B80EF8(nodeB, componentB, regB)) {
            return 0;
        }
    }
    return 1;
}
