typedef struct Ent_828AF2B0 {
    unsigned int key;
    unsigned char flag;
    char pad[7];
} Ent_828AF2B0;
typedef struct Item_828AF2B0 {
    char pad0[0x96];
    unsigned char f96;
    unsigned char f97;
    char pad98[0x9c - 0x98];
    Ent_828AF2B0 *beg;
    Ent_828AF2B0 *end;
    char pada4[0xac - 0xa4];
    int fac;
} Item_828AF2B0;
typedef struct Node_828AF2B0 {
    struct Node_828AF2B0 *next;
    struct Node_828AF2B0 *prev;
    int pad8;
    int padc;
    Item_828AF2B0 *item;
} Node_828AF2B0;
typedef struct Owner_828AF2B0 {
    char pad0[0x230];
    Node_828AF2B0 *list;
} Owner_828AF2B0;
typedef struct VT_828AF2B0 {
    void *s[3];
    Item_828AF2B0 *(*pick)(void *self);
} VT_828AF2B0;
typedef struct Picker_828AF2B0 {
    VT_828AF2B0 *vt;
} Picker_828AF2B0;
typedef struct Obj_828AF2B0 {
    char pad0[0x50];
    Owner_828AF2B0 *owner;
} Obj_828AF2B0;
extern int fn_82897BD0(void *p);
extern int fn_82882158(int a);
extern unsigned int fn_8289D8D0(void *p);
extern int fn_823AA970(void *p);
extern void fn_82881F50(int a);
extern void fn_828D8A88(int a, int b);
extern unsigned int fn_828D8A98(void);
extern void fn_82381BC0(Node_828AF2B0 **it);
extern unsigned int fn_828AEF00(void *p);
extern unsigned char fn_8289DAD0(void *p);
extern Picker_828AF2B0 *fn_8289EEE0(void *p);
extern void fn_82881FC0(int a, int b, int c);

int fn_828AF2B0(Obj_828AF2B0 *param_1)
{
    int a;
    int b;
    int c;
    int d;
    unsigned int k;
    unsigned int minq;
    unsigned int bestq;
    unsigned int q;
    Item_828AF2B0 *best;
    Item_828AF2B0 *x;
    Ent_828AF2B0 *e;
    Node_828AF2B0 *it;
    Node_828AF2B0 *sent;
    Picker_828AF2B0 *pk;

    a = fn_82897BD0(param_1);
    b = fn_82882158(a);
    c = fn_823AA970((void *)fn_8289D8D0(param_1->owner));
    if (c < fn_823AA970(param_1)) {
        return 1;
    }
    fn_82881F50(a);
    fn_828D8A88(0, 1);
    minq = fn_828D8A98();
    best = 0;
    bestq = 0;
    sent = param_1->owner->list;
    it = sent->next;
    if (it != sent) {
        do {
            x = it->item;
            if (x != (Item_828AF2B0 *)param_1 && fn_82897BD0(x) != -1 && fn_82897BD0(x) != b && x->f96 != 0) {
                if (fn_82882158(fn_82897BD0(x)) == -1 && x->f97 != 0) {
                    k = fn_823AA970(param_1);
                    for (e = x->beg; e != x->end; e++) {
                        if (e->key == k) {
                            if (e->flag == 0 || (q = fn_828AEF00(x)) == 0 || q < minq) {
                                break;
                            }
                            if (best != 0 && fn_8289DAD0(best) != 0) {
                                if (q >= bestq) {
                                    best = x;
                                    bestq = q;
                                }
                            } else if (q > bestq) {
                                best = x;
                                bestq = q;
                            }
                            break;
                        }
                    }
                }
            }
            fn_82381BC0(&it);
        } while (it != param_1->owner->list);
        if (best != 0) {
            goto have;
        }
    }
    if (fn_8289DAD0(param_1) == 0) {
        if (fn_8289DAD0((void *)fn_8289D8D0(param_1->owner)) == 0) {
            pk = fn_8289EEE0(param_1->owner);
            best = pk->vt->pick(pk);
            if (best != 0) {
                if (fn_82882158(fn_82897BD0(best)) == -1) {
                    goto have;
                }
            }
        }
    }
    return 0;
have:
    best->fac++;
    c = fn_82897BD0(param_1);
    d = fn_82897BD0(best);
    if (c != -1 && d != -1) {
        fn_82881FC0(c, d, 1);
        return 1;
    }
    return 0;
}
