typedef struct Obj_828726D0 Obj_828726D0;

typedef struct Vtbl_828726D0 {
    unsigned char (*f00)(Obj_828726D0 *self);
    void *f04[16];
    void *(*f44)(void *ret, Obj_828726D0 *self);
    void *f48[10];
    void (*f70)(Obj_828726D0 *self, int flags);
} Vtbl_828726D0;

struct Obj_828726D0 {
    Vtbl_828726D0 *vt;
};

extern void fn_82230300(void *p, int a, int b);
extern void fn_82240378(void *dst, void *src);
extern void fn_82864898(void *p);
extern void fn_828648B8(void *dst, void *src);
extern int fn_82871C50(void *a, Obj_828726D0 *o);
extern int fn_82871EE8(void *a, Obj_828726D0 *o);

int fn_828726D0(void *param_1, Obj_828726D0 **param_2)
{
    unsigned char auStack_80[32];
    unsigned char auStack_60[32];
    unsigned char auStack_40[40];
    Obj_828726D0 *o;

    if (fn_82871C50(param_1, *param_2) < 0) {
        return (int)0xA0110000;
    }
    if ((*param_2)->vt->f00(*param_2)) {
        if (fn_82871EE8(param_1, *param_2) < 0) {
            return (int)0xA0110000;
        }
    }
    else {
        fn_828648B8(auStack_80, (*param_2)->vt->f44(auStack_40, *param_2));
        fn_82240378(auStack_60, auStack_80);
        fn_82230300(auStack_80, 1, 0);
        fn_82864898(auStack_40);
        o = *param_2;
        if (o != 0) {
            o->vt->f70(o, 1);
        }
        fn_82230300(auStack_60, 1, 0);
    }
    *param_2 = 0;
    return 0x20110000;
}
