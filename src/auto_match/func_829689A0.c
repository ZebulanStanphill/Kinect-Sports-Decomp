typedef struct Item_829689A0 {
    unsigned int flags; // 0x0
    unsigned int type;  // 0x4
    char pad8[0xc];
    unsigned int index; // 0x14
    int slot;           // 0x18
    char pad1c[0x14];
    unsigned int order; // 0x30
} Item_829689A0;

typedef struct Group_829689A0 {
    unsigned int key;  // 0x0: level in the top 12 bits, size in the low 20
    unsigned int nIn;  // 0x4
    int *in;           // 0x8
    unsigned int nOut; // 0xc
    int *out;          // 0x10
} Group_829689A0;

typedef struct Graph_829689A0 {
    int pad0[2];
    unsigned int nItems;  // 0x8
    unsigned int nGroups; // 0xc
    int pad10;
    Item_829689A0 **items;   // 0x14
    Group_829689A0 **groups; // 0x18
} Graph_829689A0;

extern int fn_82963400(Group_829689A0 *group);

int fn_829689A0(int first, int second, Graph_829689A0 *g)
{
    Group_829689A0 *a = g->groups[first];
    Group_829689A0 *b = g->groups[second];
    unsigned int i;
    unsigned int n;
    Item_829689A0 *x;
    Item_829689A0 *y;
    unsigned int a0;
    unsigned int a1;
    unsigned int b0;
    unsigned int b1;
    unsigned int aMin;
    unsigned int aMax;
    unsigned int bMin;
    unsigned int bMax;

    if ((a->key & 0xfff00000) < (b->key & 0xfff00000)) {
        return -1;
    }
    if ((a->key & 0xfff00000) > (b->key & 0xfff00000)) {
        return 1;
    }
    if ((a->key & 0xfffff) < (b->key & 0xfffff)) {
        return 1;
    }
    if ((a->key & 0xfffff) > (b->key & 0xfffff)) {
        return -1;
    }
    for (i = 0; i < a->nOut; i++) {
        x = g->items[a->out[i]];
        y = g->items[b->out[i]];
        if (x->type < y->type) {
            return -1;
        }
        if (x->type > y->type) {
            return 1;
        }
        if (x->index < y->index) {
            return -1;
        }
        if (x->index > y->index) {
            return 1;
        }
        if (x->slot < y->slot) {
            return -1;
        }
        if (x->slot > y->slot) {
            return 1;
        }
    }
    if (fn_82963400(a) != 0) {
        n = a->key & 0xfffff;
        for (i = 0; i < n; i++) {
            a0 = g->items[a->in[i]]->order;
            a1 = g->items[a->in[i + n]]->order;
            b0 = g->items[b->in[i]]->order;
            b1 = g->items[b->in[i + n]]->order;
            aMin = a0 < a1 ? a0 : a1;
            aMax = a0 > a1 ? a0 : a1;
            bMin = b0 < b1 ? b0 : b1;
            bMax = b0 > b1 ? b0 : b1;
            if (aMin < bMin) {
                return -1;
            }
            if (aMin > bMin) {
                return 1;
            }
            if (aMax < bMax) {
                return -1;
            }
            if (aMax > bMax) {
                return 1;
            }
        }
    } else {
        for (i = 0; i < a->nIn; i++) {
            a0 = g->items[a->in[i]]->order;
            b0 = g->items[b->in[i]]->order;
            if (a0 < b0) {
                return -1;
            }
            if (a0 > b0) {
                return 1;
            }
        }
    }
    return 0;
}
