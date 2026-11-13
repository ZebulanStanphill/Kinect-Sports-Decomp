typedef struct Link_82AEB2D0 {
    unsigned int prev;
    unsigned int next;
} Link_82AEB2D0;

void fn_82AEB2D0(Link_82AEB2D0 *head, Link_82AEB2D0 *node)
{
    Link_82AEB2D0 *n;
    Link_82AEB2D0 *p;
    unsigned int hnext;

    if ((node->next & 1) != 0) {
        return;
    }
    n = (Link_82AEB2D0 *)((node->next & ~1u) + 0x24);
    p = (Link_82AEB2D0 *)((node->prev & ~1u) - 4);
    hnext = head->next;
    n->prev = (unsigned int)&head->next | 1;
    head->next = (unsigned int)n - 0x24;
    p->next = hnext;
    ((Link_82AEB2D0 *)((hnext & ~1u) + 0x24))->prev = (unsigned int)&p->next;
    node->next = ((unsigned int)node - 0x24) | 1;
    node->prev = (unsigned int)&node->next | 1;
}
