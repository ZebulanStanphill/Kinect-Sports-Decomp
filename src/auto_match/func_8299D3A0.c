typedef struct Item_8299D3A0 {
    char pad0[0xc];
    int parent; // 0xc
    char pad10[0x28];
    int link; // 0x38
} Item_8299D3A0;

typedef struct Group_8299D3A0 {
    unsigned int key; // 0x0: level in the top 12 bits, size in the low 20
    unsigned int nIn; // 0x4
    int *in;          // 0x8
} Group_8299D3A0;

typedef struct Graph_8299D3A0 {
    int pad0[5];
    Item_8299D3A0 **items; // 0x14
} Graph_8299D3A0;

static __forceinline int GetTarget(Graph_8299D3A0 *g, int id)
{
    int link = g->items[id]->link;

    if (link == -1) {
        return id;
    }
    return link;
}

extern void fn_82975B00(Graph_8299D3A0 *g, void *location, int code, const char *format, ...);

int fn_8299D3A0(Graph_8299D3A0 *g, Group_8299D3A0 **groups, unsigned int first, unsigned int last,
                unsigned int *ids, unsigned int nIds, unsigned int *out, unsigned int *outCount)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int m;
    unsigned int size;
    unsigned int count;
    unsigned int base;
    int found;
    int id;
    int target;
    Group_8299D3A0 *group;
    Item_8299D3A0 *item;

    for (i = first; i < last; i++) {
        group = groups[i];
        if (group != 0) {
            size = group->key & 0xfffff;
            if (group->key == 0) {
                continue;
            }
            count = group->nIn / size;
            for (j = 0, base = 0; j < count; j++, base += size) {
                found = 0;
                for (k = 0; k < size; k++) {
                    id = group->in[base + k];
                    item = g->items[id];
                    for (m = 0; m < nIds; m++) {
                        if ((id == ids[m] || item->link == ids[m]) && item->parent == -1) {
                            found = 1;
                        }
                    }
                }
                if (found) {
                    for (k = 0; k < size; k++) {
                        target = GetTarget(g, group->in[base + k]);
                        for (m = 0; m < *outCount; m++) {
                            if (out[m] == target) {
                                break;
                            }
                        }
                        if (m == *outCount) {
                            if (m == 32) {
                                fn_82975B00(g, 0, 0x12c3, "internal error: arguments not vectorized");
                                return 0x80004005;
                            }
                            out[*outCount] = target;
                            (*outCount)++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
