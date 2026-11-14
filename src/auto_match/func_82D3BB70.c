typedef struct { char pad[5]; signed char off; } Node;
typedef struct {
    char pad[0x14];
    Node node;
    char pad1[0x20 - 0x1a];
    int x20;
    char pad2[0x30 - 0x24];
    int x30;
    char pad3[0x40 - 0x34];
    short x40;
    short x42;
    int x44;
    int x48;
    char pad4[4];
    int x50;
    int x54;
    unsigned int x58;
} Obj;

static void Node_setOwner(Node *n, void *owner) { n->off = (signed char)((char *)owner - (char *)n); }

void fn_82D3BB70(Obj *p, int full)
{
    if (p == 0) {
        return;
    }
    if (full) {
        p->x40 = 0;
        p->x42 = 0;
        p->x44 = 0;
        p->x48 = 0;
        p->x20 = 1;
        p->x30 = 0;
        Node_setOwner(&p->node, p);
    }
    p->x50 = 0;
    p->x54 = 0;
    p->x58 = 0x80000000;
}
