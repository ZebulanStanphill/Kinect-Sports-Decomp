typedef struct VTable_82E6FB58 {
    void *slot0;
    void *slot1;
    void (*release)(void *self);
} VTable_82E6FB58;

typedef struct Inner_82E6FB58 {
    VTable_82E6FB58 *vt;
} Inner_82E6FB58;

typedef struct Obj_82E6FB58 {
    void *vt;
    char pad[0x54];
    Inner_82E6FB58 *inner;
} Obj_82E6FB58;

extern int fn_82E6EE68(Obj_82E6FB58 *self);
extern unsigned int lbl_8215EDF0;

void fn_82E6FB58(Obj_82E6FB58 *param_1)
{
    param_1->vt = &lbl_8215EDF0;
    if (param_1->inner != 0) {
        param_1->inner->vt->release(param_1->inner);
        param_1->inner = 0;
    }
    fn_82E6EE68(param_1);
}
