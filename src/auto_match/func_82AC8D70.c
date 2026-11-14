typedef struct Node_82AC8D70 {
    char pad0[8];
    unsigned int pad8_hi : 18;
    unsigned int kind : 7;          /* +0x08 */
    unsigned int pad8_b : 1;
    unsigned int detached : 1;
    unsigned int pad8_lo : 5;
    char padc[0x24 - 0xc];
    unsigned int link;              /* +0x24 */
} Node_82AC8D70;

extern Node_82AC8D70 *fn_82ABE6D0(Node_82AC8D70 *);
extern unsigned char fn_82AE91E8(Node_82AC8D70 *);

static __forceinline unsigned char InA(Node_82AC8D70 *n)
{
    unsigned char ok;
    if (n->kind < 1 || n->kind > 0x1f)
        ok = 0;
    else
        ok = 1;
    return ok;
}
#define L(n) ((Node_82AC8D70 *)((unsigned int)(n) & 0xfffffffe))

unsigned char fn_82AC8D70(void *ctx, Node_82AC8D70 *node)
{
    Node_82AC8D70 *parent;

    if ((unsigned char)node->detached) {
        return 0;
    }
    if (!fn_82AE91E8(node)) {
        return 0;
    }
    if (InA(node)) {
        if (fn_82ABE6D0(node) != 0) {
            return 0;
        }
    } else if ((L(node)->link & 1) == 0) {
        parent = (Node_82AC8D70 *)((L(node)->link & 0xfffffffe) - 0x28);
        if (parent != 0 && InA(parent) && node == fn_82ABE6D0(parent)) {
            return 0;
        }
    }
    return 1;
}
