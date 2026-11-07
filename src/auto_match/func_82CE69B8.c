typedef struct Obj_82CE69B8 Obj_82CE69B8;

typedef struct Vtbl_82CE69B8 {
    void *slot0;
    int (*get)(Obj_82CE69B8 *self, int arg);
} Vtbl_82CE69B8;

struct Obj_82CE69B8 {
    Vtbl_82CE69B8 *vt;
};

void fn_82CE69B8(Obj_82CE69B8 *obj, int *out, int count, int arg)
{
    int i;

    for (i = 0; i < count; i++) {
        out[i] = obj->vt->get(obj, arg);
    }
}
