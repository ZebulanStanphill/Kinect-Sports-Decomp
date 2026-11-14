typedef struct Link_82AD3368 {
    unsigned int prev;
    unsigned int next;
} Link_82AD3368;

typedef struct Inst_82AD3368 {
    int pad0;
    int pad4;
    unsigned int flags;
    char pad[0x24 - 0xc];
    Link_82AD3368 link;
} Inst_82AD3368;

typedef struct Block_82AD3368 {
    char pad[0x10];
    Link_82AD3368 a;
    Link_82AD3368 b;
    Link_82AD3368 c;
} Block_82AD3368;

extern unsigned char fn_82ABDAA0(Inst_82AD3368 *inst);

static __forceinline Inst_82AD3368 *First_82AD3368(Link_82AD3368 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Inst_82AD3368 *)list->next;
}

static __forceinline Inst_82AD3368 *Next_82AD3368(Inst_82AD3368 *n)
{
    unsigned int p = ((Inst_82AD3368 *)((unsigned int)n & ~1u))->link.next;
    if (p & 1) {
        return 0;
    }
    return (Inst_82AD3368 *)p;
}

unsigned char fn_82AD3368(void *self, Block_82AD3368 *block)
{
    Inst_82AD3368 *n;

    for (n = First_82AD3368(&block->a); n != 0; n = Next_82AD3368(n)) {
        if ((n->flags & 0x3f80) != 0x3800) {
            return 0;
        }
    }
    for (n = First_82AD3368(&block->b); n != 0; n = Next_82AD3368(n)) {
        if ((unsigned char)((n->flags >> 25) & 1)) {
            return 0;
        }
    }
    for (n = First_82AD3368(&block->c); n != 0; n = Next_82AD3368(n)) {
        if (!fn_82ABDAA0(n)) {
            return 0;
        }
    }
    return 1;
}
