typedef struct Obj_82447580 Obj_82447580;

typedef struct Vtbl_82447580 {
    void *slots[5];
    void (*Get)(Obj_82447580 *self, int key, void *out);
} Vtbl_82447580;

struct Obj_82447580 {
    Vtbl_82447580 *vt;
};

typedef struct Buf_82447580 {
    unsigned int w[4];
} Buf_82447580;

extern int fn_82447518(void *dst, Buf_82447580 *src);
extern void *fn_824475E0(void *dst);

void fn_82447580(Obj_82447580 *obj, int key, void *dst)
{
    Buf_82447580 tmp;
    void *p;

    p = fn_824475E0(dst);
    if (p != 0) {
        obj->vt->Get(obj, key, p);
    } else {
        obj->vt->Get(obj, key, &tmp);
        fn_82447518(dst, &tmp);
    }
}
