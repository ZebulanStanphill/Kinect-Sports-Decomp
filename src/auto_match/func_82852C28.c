typedef struct {
    char pad[0x20];
    int x20;
    int pad24;
    int x28;
    int pad2c;
    int x30;
} Entry;

typedef struct {
    char pad[0x38];
    Entry **items;
} Table;

typedef struct {
    char pad[0xc];
    int idx;
    int key;
} Ref;

typedef struct {
    int pad;
    void *ctx;
} Obj;

extern int fn_828116B8(void *a, int key);
extern void fn_8263A120(void *ctx, int v);
extern void fn_82640A98(void *ctx, int v, int a, int b, int c);

void fn_82852C28(Obj *o, Ref *r, void *a, Table *t)
{
    if (fn_828116B8(a, r->key) != 0) {
        if (t->items[r->idx] != 0) {
            Entry *e = t->items[r->idx];
            fn_8263A120(o->ctx, e->x20);
            fn_82640A98(o->ctx, e->x30, 0, 0, e->x28);
        }
    }
}
