extern void fn_82D8E8F0(void *a, void *b);

typedef struct { int pad[2]; void *x8; } Inner_82DAF690;
typedef struct { int pad[5]; Inner_82DAF690 *x14; } Obj_82DAF690;

void fn_82DAF690(void *self, Obj_82DAF690 *o)
{
    fn_82D8E8F0(o->x14->x8, o);
}
