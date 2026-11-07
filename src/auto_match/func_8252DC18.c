typedef struct Obj_8252DC18 Obj_8252DC18;

typedef struct ObjVt_8252DC18 {
    void (*destroy)(Obj_8252DC18 *self, int flags);
    void *slot1;
    void (*release)(Obj_8252DC18 *self);
} ObjVt_8252DC18;

struct Obj_8252DC18 {
    ObjVt_8252DC18 *vt;
};

typedef struct Entry_8252DC18 {
    Obj_8252DC18 *obj;
    int ref;
} Entry_8252DC18;

typedef struct Array_8252DC18 {
    char *data;
    int pad4;
    int pad8;
    unsigned short stride;
    unsigned short padE;
    unsigned short count;
    unsigned short pad12;
} Array_8252DC18;

extern Array_8252DC18 lbl_8326AF3C;

extern void fn_8251E370(Array_8252DC18 *arr, int a, int b);
extern void fn_8251E400(Array_8252DC18 *arr);
extern void fn_8251E530(Array_8252DC18 *arr, void *elem);

void fn_8252DC18(int param_1)
{
    unsigned int i;
    Entry_8252DC18 *e;

    for (i = 0; i < lbl_8326AF3C.count; i++) {
        e = (Entry_8252DC18 *)(lbl_8326AF3C.stride * i + lbl_8326AF3C.data);
        if (param_1 != 0 || --e->ref <= 0) {
            e->obj->vt->release(e->obj);
            if (e->obj != 0) {
                e->obj->vt->destroy(e->obj, 1);
            }
            fn_8251E530(&lbl_8326AF3C, lbl_8326AF3C.stride * i + lbl_8326AF3C.data);
            i--;
        }
    }
    if (param_1 != 0) {
        fn_8251E400(&lbl_8326AF3C);
        fn_8251E370(&lbl_8326AF3C, 8, 0);
    }
}
