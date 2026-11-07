typedef struct Link_82B1A4E0 {
    unsigned int prev;
    unsigned int next;
} Link_82B1A4E0;

void fn_82B1A4E0(unsigned int other, Link_82B1A4E0 *node)
{
    Link_82B1A4E0 *o;
    Link_82B1A4E0 *n;
    Link_82B1A4E0 *p;
    unsigned int onext;

    if ((node->next & 1) != 0) {
        return;
    }
    o = (Link_82B1A4E0 *)(other & ~1u);
    n = (Link_82B1A4E0 *)(node->next & ~1u);
    p = (Link_82B1A4E0 *)((node->prev & ~1u) - 4);
    onext = o->next;
    n->prev = (unsigned int)&o->next;
    o->next = (unsigned int)n;
    p->next = onext;
    ((Link_82B1A4E0 *)(onext & ~1u))->prev = (unsigned int)&p->next;
    node->next = (unsigned int)node | 1;
    node->prev = (unsigned int)&node->next | 1;
}
