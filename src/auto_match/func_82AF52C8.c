typedef struct Entry_82AF52C8 {
    unsigned int pad : 3;
    unsigned int level : 16;
    unsigned int rest : 13;
} Entry_82AF52C8;

typedef struct Link_82AF52C8 {
    Entry_82AF52C8 *entry;
    struct Link_82AF52C8 *next;
} Link_82AF52C8;

typedef struct Info_82AF52C8 {
    char pad[0x20];
    Link_82AF52C8 *links;
} Info_82AF52C8;

typedef struct Obj_82AF52C8 {
    Info_82AF52C8 *info;
} Obj_82AF52C8;

static __forceinline unsigned int MaxLevel(Info_82AF52C8 *info)
{
    unsigned int best = 0;
    Link_82AF52C8 *l;
    for (l = info->links; l != 0; l = l->next) {
        if (l->entry->level > best)
            best = l->entry->level;
    }
    return best;
}

int fn_82AF52C8(Obj_82AF52C8 *a, Obj_82AF52C8 *b)
{
    Info_82AF52C8 *ia = a->info;
    Info_82AF52C8 *ib = b->info;
    unsigned int la = MaxLevel(ia);
    unsigned int lb = MaxLevel(ib);
    if (la == lb)
        return 0;
    return la > lb ? -1 : 1;
}
