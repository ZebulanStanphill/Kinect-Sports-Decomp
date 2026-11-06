typedef struct Item_825BBCA0 {
    int a;
    unsigned short type;
} Item_825BBCA0;

typedef unsigned char (*Check_825BBCA0)(Item_825BBCA0 *item, void *self);

typedef struct Handler_825BBCA0 {
    void *a;
    Check_825BBCA0 test;
    Check_825BBCA0 apply;
    void *d;
} Handler_825BBCA0;

typedef struct List_825BBCA0 {
    int a;
    unsigned short *begin;
    unsigned short *end;
} List_825BBCA0;

typedef struct Def_825BBCA0 {
    char pad[0x34];
    List_825BBCA0 *ids;
} Def_825BBCA0;

typedef struct Self_825BBCA0 {
    char pad[0x2fc];
    int registry;
} Self_825BBCA0;

extern Handler_825BBCA0 lbl_831C1198[];
extern Item_825BBCA0 *fn_8255BFC0(int registry, unsigned short id);

static __forceinline unsigned char call_825BBCA0(Check_825BBCA0 f, Item_825BBCA0 *item, void *self)
{
    if (f != 0) {
        return f(item, self);
    }
    return 0;
}

unsigned char fn_825BBCA0(Self_825BBCA0 *param_1, Def_825BBCA0 *param_2)
{
    unsigned char ok;
    unsigned short *it;
    unsigned short *end;
    Item_825BBCA0 *item;

    ok = 1;
    it = param_2->ids->begin;
    end = param_2->ids->end;
    for (; it < end; it++) {
        item = fn_8255BFC0(param_1->registry, *it);
        if (call_825BBCA0(lbl_831C1198[item->type].test, item, param_1)) {
            ok = ok && call_825BBCA0(lbl_831C1198[item->type].apply, item, param_1);
        }
    }
    return ok;
}
