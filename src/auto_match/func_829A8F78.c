typedef struct E { int x0; unsigned int x4; char pad[0x50 - 8]; unsigned int x50; } E;
typedef struct P1 {
    char pad[0x14];
    E **items;
    unsigned int **flags;
    char pad2[0x88 - 0x1c];
    unsigned int x88;
} P1;
typedef struct P2 { int x0; unsigned int count; int *idx; } P2;

int fn_829A8F78(P1 *p1, P2 *p2, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < p2->count; i++) {
        E *e = p1->items[p2->idx[i]];
        if (p1->x88 == e->x4 && e->x50 < n && (*p1->flags[e->x50] & 0xfff00000) != 0)
            return 1;
    }
    return 0;
}
