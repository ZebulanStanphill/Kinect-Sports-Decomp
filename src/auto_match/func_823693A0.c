typedef struct Item {
    char pad0[0x2c];
    int type;           /* 0x2c */
    char pad30[0x120 - 0x30];
    int active;         /* 0x120 */
    char pad124[0x1ec - 0x124];
    int x1ec;           /* 0x1ec */
} Item;

typedef struct Obj Obj;
typedef struct ObjVtbl {
    char pad[0xc8];
    int (*fnC8)(Obj *);
} ObjVtbl;

struct Obj {
    ObjVtbl *vtbl;
    char pad4[0x42c - 4];
    int state;          /* 0x42c */
    char pad430[0x4b0 - 0x430];
    void *x4b0;         /* 0x4b0 */
    char pad4b4[0x9a0 - 0x4b4];
    Item *cur;          /* 0x9a0 */
    Item *prev;         /* 0x9a4 */
    int x9a8;           /* 0x9a8 */
    int x9ac;           /* 0x9ac */
    int curType;        /* 0x9b0 */
    int prevType;       /* 0x9b4 */
    char pad9b8[0x9e0 - 0x9b8];
    int x9e0;           /* 0x9e0 */
    int x9e4;           /* 0x9e4 */
    char pad9e8[0xe10 - 0x9e8];
    void *xe10;         /* 0xe10 */
};

typedef struct { char pad[8]; int x8; } Global;

extern Global *fn_8225F160(void);
extern void fn_8236C120(Obj *);
extern void fn_823DBA60(void *, int);
extern void fn_825275B0(void *);

int fn_823693A0(Obj *o, Item *item)
{
    Item *old;
    int changed;
    int st;

    old = o->cur;
    if (old != 0 && item != old) {
        st = o->state;
        if (st == 3 || st == 5 || st == 4) {
            fn_825275B0(o->xe10);
        }
        if (o->state != 0) {
            fn_825275B0(o->xe10);
        }
        o->state = 0;
    }
    if (item != 0 && item != old) {
        fn_8236C120(o);
    }
    if (o->vtbl->fnC8(o) == 0 && item != 0 && item->x1ec != 0 &&
        item != old && item->type == 1) {
        fn_823DBA60(o->x4b0, fn_8225F160()->x8 == 0 ? 1 - o->x9ac : 0);
        o->x9a8 = 0;
    }
    changed = 0;
    if (o->cur != item) {
        o->x9e0 = 0;
        o->x9e4 = 0;
        if (o->cur != 0) {
            o->cur->active = 0;
            o->prev = o->cur;
            o->prevType = o->curType;
        }
        changed = 1;
    }
    o->cur = item;
    if (item != 0) {
        item->active = 1;
        o->curType = o->cur->type;
    } else {
        o->curType = -1;
    }
    return changed;
}
