typedef struct Obj_827B5CC0 Obj_827B5CC0;
typedef struct {
    void *f0;
    void (*fn)(Obj_827B5CC0 *self, int a, int b, int c, int d);
} Vt_827B5CC0;
struct Obj_827B5CC0 { Vt_827B5CC0 *vt; };
typedef struct {
    Obj_827B5CC0 *obj;
    int pad[4];
} Entry_827B5CC0;
typedef struct {
    int a;
    int b;
    int pad[12];
    Entry_827B5CC0 entries[1];
} Table_827B5CC0;
typedef struct {
    int f0;
    Table_827B5CC0 *table;
    int index;
} State_827B5CC0;

void fn_827B5CC0(State_827B5CC0 *s)
{
    Table_827B5CC0 *t = s->table;
    Entry_827B5CC0 *e = &t->entries[s->index];
    e->obj->vt->fn(e->obj, t->a, t->b, 9, 0);
}
