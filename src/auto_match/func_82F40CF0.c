typedef struct Obj_82F40CF0 Obj_82F40CF0;
typedef struct ObjVtbl_82F40CF0 {
    void *pad0[3];
    int (*query)(Obj_82F40CF0 *self);
} ObjVtbl_82F40CF0;
struct Obj_82F40CF0 {
    ObjVtbl_82F40CF0 *vt;
};

int fn_82F40CF0(Obj_82F40CF0 *self, unsigned short id, int value)
{
    int hr = 0;

    if (id != 0) {
        if (id == 0xffff) {
            if (value == 0) {
                hr = 0x80070057;
            }
        } else {
            hr = self->vt->query(self);
            if (hr >= 0 && hr == 1) {
                hr = 0x80070057;
            }
        }
    }
    return hr;
}
