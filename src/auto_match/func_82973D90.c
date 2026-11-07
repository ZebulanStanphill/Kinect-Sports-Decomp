typedef struct Entry_82973D90 {
    int pad0;
    unsigned int key;          /* 0x04 */
    int pad8;
    unsigned int value;        /* 0x0c */
    unsigned int index;        /* 0x10 */
    int pad14[13];
    unsigned int group;        /* 0x48 */
} Entry_82973D90;

typedef struct Group_82973D90 {
    unsigned int packed;       /* 0x00 */
    unsigned int total;        /* 0x04 */
    int pad8;
    unsigned int count;        /* 0x0c */
    unsigned int *indices;     /* 0x10 */
    int pad14[4];
    unsigned int flag;         /* 0x24 */
} Group_82973D90;

typedef struct Obj_82973D90 {
    int pad0[2];
    unsigned int nEntries;              /* 0x08 */
    unsigned int nGroups;               /* 0x0c */
    int pad10;
    Entry_82973D90 **entries;           /* 0x14 */
    Group_82973D90 **groups;            /* 0x18 */
    int pad1c[27];
    unsigned int key;                   /* 0x88 */
} Obj_82973D90;

extern unsigned int fn_82963318(Group_82973D90 *g, unsigned int i, unsigned int **out);
extern void fn_8296CF68(Obj_82973D90 *o);

int fn_82973D90(Obj_82973D90 *o, int mode)
{
    int changed = 0;
    unsigned int next = 0;
    unsigned int i, j, k, n, iters;
    unsigned int *list;
    Group_82973D90 *g;
    Entry_82973D90 *e;
    Entry_82973D90 *first;

    for (i = 0; i < o->nEntries; i++) {
        e = o->entries[i];
        if (o->key == e->key && next <= e->value) {
            next = e->value + 1;
        }
    }

    fn_8296CF68(o);

    for (i = 0; i < o->nGroups; i++) {
        g = o->groups[i];
        if ((g->packed & 0xfff00000) != 0) {
            iters = g->total / (g->packed & 0xfffff);
            g->flag = 0;
            for (j = 0; j < iters; j++) {
                n = fn_82963318(g, j, &list);
                first = o->entries[list[0]];
                if (o->key == first->key) {
                    for (k = 1; k < n; k++) {
                        e = o->entries[list[k]];
                        if (o->key == e->key && e->group != first->group) {
                            break;
                        }
                    }
                    if (k != n && n != 0) {
                        for (k = 0; k < n; k++) {
                            e = o->entries[list[k]];
                            if (o->key == e->key) {
                                o->groups[e->group]->flag = 1;
                            }
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < o->nGroups; i++) {
        g = o->groups[i];
        if ((g->packed & 0xfff00000) != 0 && g->flag == 0) {
            if (o->key == o->entries[g->indices[0]]->key) {
                if (mode != 0) {
                    for (k = 0; k < g->count; k++) {
                        if (k != o->entries[g->indices[k]]->index) {
                            break;
                        }
                    }
                    if (k != g->count) {
                        for (k = 0; k < g->count; k++) {
                            o->entries[g->indices[k]]->value = next;
                            o->entries[g->indices[k]]->index = k;
                        }
                        changed = 1;
                        next++;
                    }
                } else {
                    for (k = 0; k < g->count; k++) {
                        if (o->entries[g->indices[k]]->index == 0) {
                            break;
                        }
                    }
                    if (k >= g->count) {
                        for (k = 0; k < g->count; k++) {
                            o->entries[g->indices[k]]->value = next;
                        }
                        changed = 1;
                        next++;
                    }
                }
            }
        }
    }
    return changed == 0;
}
