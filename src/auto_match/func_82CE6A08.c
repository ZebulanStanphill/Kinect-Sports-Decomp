typedef struct Obj_82CE6A08 Obj_82CE6A08;

typedef struct Vtbl_82CE6A08 {
    void *slot0;
    void *slot1;
    void (*f)(Obj_82CE6A08 *self, int value, int arg);
} Vtbl_82CE6A08;

struct Obj_82CE6A08 {
    Vtbl_82CE6A08 *vt;
};

void fn_82CE6A08(Obj_82CE6A08 *obj, int *items, int count, int arg)
{
    int i;

    for (i = 0; i < count; i++) {
        obj->vt->f(obj, items[i], arg);
    }
}
