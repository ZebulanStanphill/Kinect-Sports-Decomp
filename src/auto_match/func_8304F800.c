typedef struct Obj_8304F800 Obj_8304F800;

typedef struct Vtbl_8304F800 {
    void *slots[5];
    void (*fn14)(Obj_8304F800 *self);
} Vtbl_8304F800;

struct Obj_8304F800 {
    Vtbl_8304F800 *vt;
};

typedef struct Vec_8304F800 {
    Obj_8304F800 **begin;
    Obj_8304F800 **end;
    Obj_8304F800 **cap;
} Vec_8304F800;

extern int fn_82FA5190(unsigned int heap, void *p);
extern unsigned int lbl_831BC978;
extern unsigned int lbl_83265048;
extern Vec_8304F800 lbl_8326504C;

void fn_8304F800(void)
{
    Obj_8304F800 **p;

    lbl_83265048 = 0;
    for (p = lbl_8326504C.begin; p != lbl_8326504C.end; p++) {
        if (*p != 0) {
            (*p)->vt->fn14(*p);
        }
    }
    if (lbl_8326504C.begin != 0) {
        lbl_8326504C.end = lbl_8326504C.begin;
        fn_82FA5190(lbl_831BC978, lbl_8326504C.begin);
        lbl_8326504C.begin = 0;
        lbl_8326504C.end = 0;
        lbl_8326504C.cap = 0;
    }
}
