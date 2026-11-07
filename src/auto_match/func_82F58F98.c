typedef struct Pair_82F58F98 {
    void *a;
    void *b;
} Pair_82F58F98;

typedef struct Obj_82F58F98 {
    Pair_82F58F98 items[2];
    int count;
} Obj_82F58F98;

extern void fn_8265CA20(void *p);

void fn_82F58F98(Obj_82F58F98 *self)
{
    int i;
    Pair_82F58F98 *e;

    e = self->items;
    for (i = 0; i < 2; i++) {
        if (e->a != 0) {
            fn_8265CA20(e->a);
            e->a = 0;
        }
        if (e->b != 0) {
            fn_8265CA20(e->b);
            e->b = 0;
        }
        e++;
    }
    self->count = 0;
}
