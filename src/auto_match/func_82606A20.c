typedef struct Obj_82606A20 {
    int field0;
    void (*fn)(int a, int b, int c, float d, int e, int f);
} Obj_82606A20;

void fn_82606A20(Obj_82606A20 *obj, int a, int b, int c, float d, int e, int f)
{
    obj->fn(a, b, c, d, e, f);
}
