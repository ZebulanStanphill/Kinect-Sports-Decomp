typedef struct Obj_825529B0 Obj_825529B0;
typedef struct ObjVt_825529B0 {
    void *slot0;
    unsigned char (*isBusy)(Obj_825529B0 *self);    /* 0x4 */
} ObjVt_825529B0;
struct Obj_825529B0 {
    ObjVt_825529B0 *vt;
};

extern unsigned char fn_82536358(Obj_825529B0 *obj);

unsigned char fn_825529B0(Obj_825529B0 **holder)
{
    Obj_825529B0 *obj = *holder;
    unsigned char ok;

    if (obj != 0) {
        ok = fn_82536358(obj);
    } else {
        ok = 0;
    }
    if (!ok) {
        return 0;
    }
    return obj->vt->isBusy(obj) == 0;
}
