typedef struct { unsigned prev; unsigned tag; } Link_82AD34E8;

void fn_82AD34E8(unsigned *h, Link_82AD34E8 *node)
{
    Link_82AD34E8 *n;
    Link_82AD34E8 *p;

    if ((node->tag & 1) != 0) {
        return;
    }
    n = (Link_82AD34E8 *)((node->tag & 0xfffffffe) + 0x24);
    p = (Link_82AD34E8 *)((node->prev & 0xfffffffe) - 4);
    n->prev = *h;
    *(unsigned *)(*h & 0xfffffffe) = (unsigned)n - 0x24;
    p->tag = ((unsigned)h - 0x24) | 1;
    *h = (unsigned)&p->tag;
    node->tag = ((unsigned)node - 0x24) | 1;
    node->prev = (unsigned)&node->tag | 1;
}
