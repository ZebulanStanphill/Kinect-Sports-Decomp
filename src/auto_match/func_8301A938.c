typedef struct Obj_8301A938 Obj_8301A938;

typedef struct {
    void (*dtor)(Obj_8301A938 *self, int flags);
} Vtbl_8301A938;

struct Obj_8301A938 {
    Vtbl_8301A938 *vt;
    int pad[0x16];
    int refcount; /* 0x5c */
};

typedef struct {
    int a;
    int b;
    Obj_8301A938 *obj; /* 0x8 */
} Node_8301A938;

typedef struct {
    int a;
    int b;
    Node_8301A938 *node; /* 0x8 */
    int d;
} Iter_8301A938;

typedef struct {
    int v[4];
} Out_8301A938;

extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FFDF28(Iter_8301A938 *out, void *map, void *key);
extern void fn_830197E8(Out_8301A938 *out, void *map, Iter_8301A938 *it);
extern void *lbl_831BC768;

void fn_8301A938(char *self, void *key)
{
    Iter_8301A938 it;
    Out_8301A938 out;
    Obj_8301A938 *obj;
    void *heap;

    fn_82FFDF28(&it, self + 0x24, key);
    if (it.node != 0) {
        obj = it.node->obj;
        fn_830197E8(&out, self + 0x24, &it);
        if (--obj->refcount <= 0) {
            heap = lbl_831BC768;
            obj->vt->dtor(obj, 0);
            fn_82FA5190(heap, obj);
        }
    }
}
