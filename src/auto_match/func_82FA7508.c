typedef struct ObjVtbl {
    void (*dtor)(struct Obj *self, int flags);
} ObjVtbl;

typedef struct Obj {
    ObjVtbl *vtbl;
    char pad[0x1c];
    void *x20;
} Obj;

typedef struct Target Target;
typedef struct TargetVtbl {
    char pad[0x98];
    void (*set)(Target *self, int v);
} TargetVtbl;
struct Target {
    TargetVtbl *vtbl;
};

typedef struct Item Item;
typedef struct ItemVtbl {
    char pad[0x20];
    Target *(*getTarget)(Item *self);
} ItemVtbl;
struct Item {
    ItemVtbl *vtbl;
    char pad[0xc];
    char x10[4];
    unsigned int flags;
    char pad2[0x38 - 0x18];
    Obj *obj;
};

extern void fn_82A1E810(int a);
extern void fn_82FA5190(int a, Obj *o);
extern int fn_82FA7BC8(void *list, Item *item);
extern void fn_82FA80E8(void *a, void *b);
extern void fn_82FAB6C0(Obj *o);
extern void fn_82FF5088(int a, void *b, void *c);
extern int lbl_831BC768;
extern int lbl_83264228;
extern char lbl_83264234[];
extern char lbl_83264240[];
extern int lbl_83264304;

void fn_82FA7508(int unused, Item *item)
{
    Obj *o;

    fn_82FA7BC8(lbl_83264234, item);
    o = item->obj;
    if (o != 0) {
        if (o->x20 != 0) {
            if ((item->flags & 0x20000) != 0)
                fn_82FA80E8(lbl_83264240, o->x20);
            fn_82FF5088(lbl_83264304, o->x20, item->x10);
            if (item->vtbl->getTarget(item) != 0) {
                Target *t = item->vtbl->getTarget(item);
                t->vtbl->set(t, 3);
            }
        }
        fn_82FAB6C0(o);
        {
            int h = lbl_831BC768;
            o->vtbl->dtor(o, 0);
            fn_82FA5190(h, o);
        }
    }
    fn_82A1E810(lbl_83264228);
}
