typedef struct Obj_82625080 Obj_82625080;
typedef struct VT_82625080 {
    void (*dtor)(void *self, int flags);
    void *s4;
    void (*f8)(void *self);
} VT_82625080;
typedef struct Sub_82625080 {
    VT_82625080 *vt;
} Sub_82625080;
typedef struct B_82625080 {
    char pad0[8];
    struct Node_82625080 *first;
} B_82625080;
typedef struct A_82625080 {
    char pad0[0xa0];
    B_82625080 *b;
} A_82625080;
typedef struct Mgr_82625080 {
    char pad0[0x93c];
    A_82625080 *a;
} Mgr_82625080;
typedef struct Node_82625080 {
    struct Item_82625080 *item;
    struct Node_82625080 *next;
} Node_82625080;
typedef struct Item_82625080 {
    char pad0[4];
    struct Peer_82625080 *peer;
    char pad8[0x10 - 8];
    int f10;
    char pad14[0x18 - 0x14];
    Obj_82625080 *owner;
} Item_82625080;
typedef struct Peer_82625080 {
    char pad0[0x190];
    int f190;
} Peer_82625080;
typedef struct Ctx_82625080 {
    char pad0[0x1c];
    Mgr_82625080 *mgr;
    struct F170_82625080 *x;
} Ctx_82625080;
typedef struct Slot_82625080 {
    char pad0[0xa2];
    unsigned short tag;
    char pada4[0x1d0 - 0xa4];
} Slot_82625080;
typedef struct Handles_82625080 {
    unsigned char **tbl;
    char pad4[0x238 - 4];
    int cur;
    int pad23c;
    int count;
} Handles_82625080;
struct Obj_82625080 {
    Ctx_82625080 *ctx;
    short pad4;
    short n;
    char pad8[0x170 - 8];
    struct F170_82625080 { char pad[0x54]; int f54; int f58; } *f170;
    char pad174[0x220 - 0x174];
    void *f220;
    int f224;
    void *f228;
    void *f22c;
    void *f230;
    void *f234;
    char pad238[0x244 - 0x238];
    Handles_82625080 *f244;
    int f248;
    int f24c;
    int f250;
    char pad254[0x25c - 0x254];
    void *f25c;
    void *f260;
    char pad264[0x274 - 0x264];
    Sub_82625080 *f274;
    char pad278[0x284 - 0x278];
    char f284[0x294 - 0x284];
    void *f294;
    char pad298[0x2a0 - 0x298];
    Slot_82625080 slots[1];
};
extern void fn_8251FA58(void *p);
extern void fn_82522ED8(void *p);
extern void fn_82552B50(void *p, int a);
extern void fn_82627DB0(Obj_82625080 *o, Slot_82625080 *s);

void fn_82625080(Obj_82625080 *param_1, int param_2)
{
    Mgr_82625080 *mgr;
    struct F170_82625080 *x;
    int i;
    Slot_82625080 *s;
    A_82625080 *a;
    B_82625080 *b;
    Node_82625080 *n;
    Item_82625080 *it;
    Handles_82625080 *hd;
    int cur;

    if (param_2 == 0 && (x = param_1->f170) != 0) {
        x->f58 = 0;
        x->f54 = 1;
        param_1->f170 = 0;
    } else {
        mgr = param_1->ctx->mgr;
        i = 0;
        if (param_1->n > 0) {
            s = param_1->slots;
            do {
                if (s->tag == 0xfffe) {
                    fn_82627DB0(param_1, s);
                }
                i++;
                s++;
            } while (i < param_1->n);
        }
        fn_82552B50(param_1->f284, 1);
        if (param_1->f274 != 0) {
            param_1->f274->vt->f8(param_1->f274);
            if (param_1->f274 != 0) {
                param_1->f274->vt->dtor(param_1->f274, 1);
            }
            param_1->f274 = 0;
        }
        if (param_1->f294 != 0) {
            fn_8251FA58(param_1->f294);
        }
        a = mgr->a;
        if (a != 0 && (b = a->b) != 0) {
            for (n = b->first; n != 0; n = n->next) {
                it = n->item;
                if (it != 0 && it->owner == param_1) {
                    it->f10 = -1;
                    it->owner = 0;
                    it->peer->f190 = 0;
                    break;
                }
            }
        }
        if (param_1->f220 != 0 && param_1->f248 != 0) {
            fn_8251FA58(param_1->f220);
        }
        if (param_1->f24c == 0 && param_1->f25c != 0) {
            fn_8251FA58(param_1->f25c);
        }
        if (param_1->f250 == 0 && param_1->f260 != 0) {
            fn_8251FA58(param_1->f260);
        }
        if (param_1->f228 != 0) {
            fn_8251FA58(param_1->f228);
        }
        if (param_1->f22c != 0) {
            fn_8251FA58(param_1->f22c);
        }
        if (param_1->f230 != 0) {
            fn_8251FA58(param_1->f230);
        }
        if (param_1->f234 != 0) {
            fn_8251FA58(param_1->f234);
        }
        hd = param_1->f244;
        if (hd != 0) {
            cur = hd->cur;
            hd->count = hd->count - 1;
            if (cur != -1 && ((Obj_82625080 **)((int *)hd->tbl[(cur >> 8) & 0xff])[1])[cur & 0xff] == param_1) {
                hd->cur = -1;
            }
        }
        fn_82522ED8(param_1);
    }
}
