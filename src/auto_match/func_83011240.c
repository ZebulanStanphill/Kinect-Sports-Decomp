struct Res_83011240;
typedef struct ResVt_83011240 {
    int pad[10];
    void (*f28)(struct Res_83011240 *, void *);
} ResVt_83011240;
typedef struct Res_83011240 {
    ResVt_83011240 *vt;
    char pad[0xc];
    int group;
    unsigned typ;
} Res_83011240;
typedef struct Ent_83011240 {
    int p0, p4;
    Res_83011240 *res;
    char pad[0x1c];
    int key;
    char pad2c[8];
    unsigned owner;
} Ent_83011240;
typedef struct Node_83011240 {
    struct Node_83011240 *next;
    int p4;
    Ent_83011240 *ent;
} Node_83011240;
typedef struct It2_83011240 {
    Node_83011240 *n;
    Node_83011240 *prev;
} It2_83011240;
typedef struct Obj_83011240 {
    char pad[0x50];
    Node_83011240 *list1;
    char pad54[0x1c];
    Node_83011240 *list2;
} Obj_83011240;

extern unsigned char fn_83010770(Obj_83011240 *o, unsigned filter, int group);
extern void fn_82FF5198(unsigned, int);
extern It2_83011240 *fn_83013400(void *, Obj_83011240 *, Ent_83011240 *, void *, It2_83011240);
extern void fn_83032FE8(void *);
extern unsigned lbl_83264304;

int fn_83011240(Obj_83011240 *o, unsigned filter, unsigned owner)
{
    It2_83011240 it;
    Ent_83011240 *e;
    Res_83011240 *r;
    char ret[8];
    int tmp1[18];
    int tmp2[18];

    it.n = o->list1;
    it.prev = 0;
    while (it.n != 0) {
        e = it.n->ent;
        r = e->res;
        if ((filter == 0 || fn_83010770(o, filter, r->group))
            && (owner == 0 || e->owner == owner)
            && (r->typ & 0xffffff00) != 0x5010000) {
            int t;
            tmp1[0] = 0;
            t = e->res->typ >> 8;
            if (t == 0x4011 || t == 0x5011) {
                if (t != 0x4011)
                    fn_83032FE8(e->res);
                e->res->vt->f28(e->res, tmp1);
            }
            fn_82FF5198(lbl_83264304, e->key);
            it = *fn_83013400(ret, o, e, &o->list1, it);
        } else {
            it.prev = it.n;
            it.n = it.n->next;
        }
    }
    it.n = o->list2;
    it.prev = 0;
    while (it.n != 0) {
        e = it.n->ent;
        r = e->res;
        if ((filter == 0 || fn_83010770(o, filter, r->group))
            && (owner == 0 || e->owner == owner)
            && (r->typ & 0xffffff00) != 0x5010000) {
            int t;
            tmp2[0] = 0;
            t = e->res->typ >> 8;
            if (t == 0x4011 || t == 0x5011) {
                if (t != 0x4011)
                    fn_83032FE8(e->res);
                e->res->vt->f28(e->res, tmp2);
            }
            fn_82FF5198(lbl_83264304, e->key);
            it = *fn_83013400(ret, o, e, &o->list2, it);
        } else {
            it.prev = it.n;
            it.n = it.n->next;
        }
    }
    return 1;
}
