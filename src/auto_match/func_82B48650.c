typedef struct Link_82B48650 {
    unsigned int prev;
    unsigned int next;
} Link_82B48650;

extern unsigned int fn_82B841E8(int ctx, int pool, int a, int size, int b, int c);
extern int fn_82ACA920(int ctx, int src, int arg);
extern int fn_82AD1978(unsigned int node, int src);

unsigned int fn_82B48650(int param_1, int param_2)
{
    unsigned int node;
    Link_82B48650 *link;
    Link_82B48650 *head;

    node = fn_82B841E8(param_1, *(int *)(param_1 + 0x234), 0, 0x14, 1, 4);
    *(int *)(node + 0x2c) = fn_82AD1978(node,
        *(unsigned int *)(param_2 + 0x10) != 0
            ? fn_82ACA920(param_1, param_2, *(int *)(param_2 + 0xc))
            : param_2);
    *(unsigned int *)(node + 8) = (*(unsigned int *)(node + 8) & 0xfffe3fff) | 0x4000;
    link = (Link_82B48650 *)((node & ~1u) + 0x24);
    head = (Link_82B48650 *)(*(int *)(param_1 + 0x234) + 0x18);
    link->prev = head->prev;
    *(unsigned int *)(head->prev & ~1u) = (unsigned int)link - 0x24;
    link->next = ((unsigned int)head - 0x24) | 1;
    head->prev = (unsigned int)&link->next;
    return node;
}
