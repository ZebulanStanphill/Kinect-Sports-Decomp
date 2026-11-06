typedef struct {
    unsigned int *begin;
    unsigned int *end;
} Set_83030318;
typedef struct SetNode_83030318 {
    struct SetNode_83030318 *next;
    unsigned int key;
    Set_83030318 value;
} SetNode_83030318;
typedef struct {
    int f0;
    int f4;
    unsigned char flags : 5;
    unsigned char low : 3;
} Info_83030318;
typedef struct InfoNode_83030318 {
    struct InfoNode_83030318 *next;
    unsigned int key;
    Info_83030318 value;
} InfoNode_83030318;
typedef struct {
    char pad0[0x18];
    unsigned int f18;
} Item_83030318;
typedef struct ItemNode_83030318 {
    struct ItemNode_83030318 *next;
    unsigned int key;
    Item_83030318 value;
} ItemNode_83030318;
typedef struct {
    unsigned int id;
    int count;
} Run_83030318;
typedef struct {
    char pad0[0xc];
    int fc;
    char pad10[0xc0 - 0x10];
    unsigned int defId;
    SetNode_83030318 *sets;
    char padc8[0xe4 - 0xc8];
    InfoNode_83030318 *infos;
    char pade8[0x104 - 0xe8];
    ItemNode_83030318 *items;
} Obj_83030318;
typedef struct {
    unsigned int id;
    int f4;
} Key_83030318;
extern int lbl_832642EC;
extern void fn_8301AE78(Key_83030318 *out, int ctx, unsigned int key, int fc);
extern void fn_8301AF50(int ctx, int fc, unsigned int key);
extern void fn_8301AEF8(int ctx, unsigned int key, int fc, Run_83030318 *run);
extern int fn_8302FD88(Obj_83030318 *o, Set_83030318 *a, Set_83030318 *b, unsigned int key);
extern int fn_8302FB68(Obj_83030318 *o, unsigned int id, Item_83030318 *item);

static __forceinline Set_83030318 *FindSet_83030318(SetNode_83030318 *n, unsigned int key)
{
    for (; n != 0; n = n->next) {
        if (n->key == key) {
            return &n->value;
        }
    }
    return 0;
}

static __forceinline Info_83030318 *FindInfo_83030318(InfoNode_83030318 *n, unsigned int key)
{
    for (; n != 0; n = n->next) {
        if (n->key == key) {
            return &n->value;
        }
    }
    return 0;
}

int fn_83030318(Obj_83030318 *o, unsigned int id, unsigned int key)
{
    Key_83030318 cur;
    Set_83030318 *a;
    Set_83030318 *b;
    int result = 1;
    Run_83030318 run;
    Info_83030318 info;
    ItemNode_83030318 *node;
    fn_8301AE78(&cur, lbl_832642EC, key, o->fc);
    if (id == cur.id) {
        goto Exit;
    }
    a = FindSet_83030318(o->sets, cur.id);
    b = FindSet_83030318(o->sets, id);
    if (b == 0) {
        id = o->defId;
        b = FindSet_83030318(o->sets, id);
    }
    result = fn_8302FD88(o, a, b, key);
    fn_8301AF50(lbl_832642EC, o->fc, key);
    run.count = 0;
    run.id = 0;
    for (node = o->items; node != 0; node = node->next) {
        Item_83030318 *item = &node->value;
        if (run.id == id) {
            run.count++;
        } else {
            run.id = id;
            run.count = 1;
        }
        if (item->f18 == key && b != 0) {
            unsigned int *it;
            for (it = b->begin; it != b->end; it++) {
                unsigned int v = *it;
                Info_83030318 *f = FindInfo_83030318(o->infos, v);
                if (f != 0) {
                    info = *f;
                } else {
                    info.flags = 0;
                }
                if (info.flags & 1) {
                    unsigned char found = 0;
                    if (a != 0) {
                        unsigned int *p;
                        for (p = a->begin; p != a->end; p++) {
                            if (*p == v) {
                                found = 1;
                                break;
                            }
                        }
                    }
                    if (found) {
                        continue;
                    }
                }
                result = fn_8302FB68(o, v, item);
            }
        }
    }
    fn_8301AEF8(lbl_832642EC, key, o->fc, &run);
Exit:
    return result;
}
