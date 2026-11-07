typedef struct Obj_83006A80 Obj_83006A80;

typedef struct Vtbl_83006A80 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void (*f10)(Obj_83006A80 *self, void *arg);
} Vtbl_83006A80;

struct Obj_83006A80 {
    Vtbl_83006A80 *vt;
};

typedef struct Elem_83006A80 {
    int pad[5];
    void *data;
    int a;
    int b;
} Elem_83006A80;

typedef struct Slot_83006A80 {
    Obj_83006A80 *p;
    int x;
    int y;
} Slot_83006A80;

typedef struct Container_83006A80 {
    Elem_83006A80 *begin;
    Elem_83006A80 *end;
    Elem_83006A80 *cap;
    int pad;
    Slot_83006A80 slots[4];
} Container_83006A80;

extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC768;
extern char lbl_831BC7F4[];

void fn_83006A80(Container_83006A80 *c)
{
    Elem_83006A80 *it;
    Elem_83006A80 *b;
    int i;

    for (it = c->begin; it != c->end; it++) {
        if (it->data != 0) {
            fn_82FA5190(lbl_831BC768, it->data);
            it->data = 0;
        }
        it->a = 0;
        it->b = 0;
    }
    b = c->begin;
    if (b != 0) {
        c->end = b;
        fn_82FA5190(lbl_831BC768, b);
        c->begin = 0;
        c->end = 0;
        c->cap = 0;
    }
    for (i = 0; i < 4; i++) {
        if (c->slots[i].p != 0) {
            c->slots[i].p->vt->f10(c->slots[i].p, lbl_831BC7F4);
        }
    }
}
