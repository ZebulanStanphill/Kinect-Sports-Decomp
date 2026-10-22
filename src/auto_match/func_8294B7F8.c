typedef struct Item {
    unsigned int flags;
    int pad[13];
    int link;
} Item;

typedef struct Group {
    int pad0;
    unsigned int nIn;
    int *in;
    unsigned int nOut;
    int *out;
} Group;

typedef struct Graph {
    int pad0[2];
    unsigned int nItems;
    unsigned int nGroups;
    int pad10;
    Item **items;
    Group **groups;
} Graph;

int fn_8294B7F8(Graph *g)
{
    unsigned int i;
    unsigned int j;
    int changed;
    int hit;
    Group *grp;
    Item *it;

    do {
        changed = 0;
        for (i = 0; i < g->nGroups; i++) {
            hit = 0;
            j = 0;
            grp = g->groups[i];
            if (grp->nIn != 0) {
                do {
                    it = g->items[grp->in[j]];
                    if (it->flags & 0x1000000)
                        hit = 1;
                    if (it->link != -1)
                        it = g->items[it->link];
                    if (it->flags & 0x1000000)
                        hit = 1;
                    j++;
                } while (j < grp->nIn);
                if (hit) {
                    for (j = 0; j < grp->nOut; j++) {
                        it = g->items[grp->out[j]];
                        if ((it->flags & 0x1000000) == 0) {
                            changed = 1;
                            it->flags |= 0x1000000;
                        }
                    }
                }
            }
        }
    } while (changed);
    for (i = 0; i < g->nItems; i++) {
        it = g->items[i];
        if (it->link != -1 && (g->items[it->link]->flags & 0x1000000))
            it->flags |= 0x1000000;
    }
    return 0;
}
