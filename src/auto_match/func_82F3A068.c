typedef struct {
    char pad[0xd0];
    unsigned int n_items;
    unsigned int n_extra;
} Group_82F3A068;
typedef struct {
    char pad[0x14];
} Table_82F3A068;
typedef struct {
    unsigned short kind;
    unsigned short size;
} Item_82F3A068;
typedef struct {
    char pad0[0xc];
    unsigned int ready;
    char pad1[0x20 - 0x10];
    unsigned __int64 total;
    char pad2[0x48 - 0x28];
    char groups[0x1268 - 0x48];
    unsigned int n_groups;
} Ctx_82F3A068;

extern void fn_82F39E50(void *, unsigned int, Group_82F3A068 **);
extern void fn_82F39D20(void *, unsigned int, void *);

int fn_82F3A068(Ctx_82F3A068 *c, unsigned __int64 *out1, unsigned __int64 *out2)
{
    int hr = 0;
    if (c->ready == 0) {
        return 0xc00d36b6;
    } else {
        unsigned __int64 total = 0x1a;
        unsigned int i = 0;
        if (c->n_groups > 0) {
            do {
                Group_82F3A068 *g1;
                Group_82F3A068 *g2;
                unsigned int j;
                fn_82F39E50(c->groups, i, &g1);
                j = 0;
                total = (unsigned int)(g1->n_extra + 0x1a) + total;
                fn_82F39E50(c->groups, i, &g2);
                if (g2->n_items > 0) {
                    do {
                        Group_82F3A068 *g3;
                        Group_82F3A068 *g4;
                        Item_82F3A068 *it;
                        Item_82F3A068 *it2;
                        fn_82F39E50(c->groups, i, &g3);
                        fn_82F39D20((char *)g3 + 0x14, j, &it);
                        if (it->kind != 1) {
                            hr = 0x8000ffff;
                            goto done;
                        }
                        fn_82F39E50(c->groups, i, &g4);
                        fn_82F39D20((char *)g4 + 0x14, j, &it2);
                        j = j + 1;
                        total = (unsigned int)(it2->size + 4) + total;
                        fn_82F39E50(c->groups, i, &g2);
                    } while (j < g2->n_items);
                }
                i = i + 1;
            } while (i < c->n_groups);
        }
        if (out1 != 0) {
            *out1 = total;
        }
        if (out2 != 0) {
            *out2 = total;
        }
        c->total = total;
    }
done:
    return hr;
}
