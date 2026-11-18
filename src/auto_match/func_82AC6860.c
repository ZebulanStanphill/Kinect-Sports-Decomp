extern void fn_82AA66A8(void *, int, ...);

/* The link pair sits at +0x24 of a node. Values carry a tag in bit 0. */
typedef struct Link_82AC6860 {
    unsigned int next;     /* 0x0: address of the following node's previous field */
    unsigned int previous; /* 0x4: the preceding node */
} Link_82AC6860;

void fn_82AC6860(void *self, unsigned int destination, unsigned int side, unsigned int source)
{
    Link_82AC6860 *from;
    Link_82AC6860 *to;
    unsigned int *toPrevious;
    switch (side) {
    case 1:
        from = (Link_82AC6860 *)((source & ~1) + 0x24);
        to = (Link_82AC6860 *)((destination & ~1) + 0x24);
        toPrevious = &to->previous;
        *toPrevious = from->previous;
        ((Link_82AC6860 *)((from->previous & ~1) + 0x24))->next = (unsigned int)toPrevious;
        to->next = (unsigned int)&from->previous;
        from->previous = (unsigned int)to - 0x24;
        break;
    case 0:
        from = (Link_82AC6860 *)((source & ~1) + 0x24);
        to = (Link_82AC6860 *)((destination & ~1) + 0x24);
        to->next = from->next;
        *(unsigned int *)(from->next & ~1) = (unsigned int)to - 0x24;
        to->previous = (unsigned int)from - 0x24;
        from->next = (unsigned int)&to->previous;
        break;
    default:
        fn_82AA66A8(self, 0x12c0);
    }
}
