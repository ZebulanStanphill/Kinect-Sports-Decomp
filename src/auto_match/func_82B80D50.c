typedef struct Node_82B80D50 Node_82B80D50;
typedef struct Use_82B80D50 Use_82B80D50;

struct Use_82B80D50 {
    union {
        unsigned int word;

        struct {
            unsigned int : 19;
            unsigned int swizzle : 8; /* bits 5-12 */
            unsigned int mask : 5;    /* bits 0-4 */
        } write;

        struct {
            unsigned int : 23;
            unsigned int select : 8; /* bits 1-8 */
            unsigned int : 1;
        } read;
    } bits; /* 0x0 */

    int pad4;
    Use_82B80D50 *next;  /* 0x8 */
    Node_82B80D50 *node; /* 0xc */
};

struct Node_82B80D50 {
    int pad0;
    Use_82B80D50 *uses; /* 0x04 */
    unsigned int info;  /* 0x08: kind in bits 19-21, opcode in bits 7-13 */
    char padC[0x20];
    Use_82B80D50 *source0; /* 0x2c */
    Use_82B80D50 *source1; /* 0x30 */
};

static __forceinline unsigned char IsAluOp(unsigned int op)
{
    if (op >= 1 && op <= 0x66) {
        return 1;
    }
    return 0;
}

static __forceinline unsigned char IsConstant(Node_82B80D50 *node)
{
    unsigned int op = (node->info >> 7) & 0x7f;

    if (op == 0x7d || op == 0x7c) {
        return 1;
    }
    return 0;
}

unsigned char fn_82B80D50(Node_82B80D50 *node, Use_82B80D50 *use, Node_82B80D50 *target, unsigned int swizzle,
                          unsigned int mask)
{
    Use_82B80D50 **link;
    Use_82B80D50 *current;
    Use_82B80D50 *source0;
    Use_82B80D50 *source1;
    int constant0;
    int constant1;

    if (!IsAluOp((node->info >> 7) & 0x7f)) {
        if ((mask & ~1) != 0) {
            return 0;
        }
        if (IsConstant(target)) {
            return 0;
        }
    } else if (IsConstant(target)) {
        if ((node->info & 0x380000) > 0x100000) {
            source0 = node->source0;
            source1 = node->source1;
            constant0 = IsConstant(source0->node);
            constant1 = IsConstant(source1->node);
            if ((unsigned char)constant0 && (unsigned char)constant1 &&
                ((source1->bits.word ^ mask) & 0x18) != 0) {
                return 0;
            }
            if ((unsigned char)constant0 || (unsigned char)constant1) {
                if ((((unsigned char)source0->bits.read.select ^ (mask >> 1)) & 1) != 0) {
                    return 0;
                }
            }
        }
    } else if ((mask & 8) != 0) {
        return 0;
    }
    link = &use->node->uses;
    while ((current = *link) != use) {
        link = &current->next;
    }
    *link = use->next;
    use->next = target->uses;
    target->uses = use;
    use->node = target;
    use->bits.write.swizzle = swizzle;
    use->bits.write.mask = mask;
    return 1;
}
