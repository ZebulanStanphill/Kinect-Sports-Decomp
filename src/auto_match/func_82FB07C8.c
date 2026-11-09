/* Slot 8 of vtable lbl_8216D2D0. */
typedef struct Obj_82FB07C8 Obj_82FB07C8;
typedef struct ObjVtbl_82FB07C8 {
    void *slots[40];
    void (*slot40)(Obj_82FB07C8 *self, int enabled);
} ObjVtbl_82FB07C8;
struct Obj_82FB07C8 {
    ObjVtbl_82FB07C8 *vt;
};

typedef struct Msg_82FB07C8 {
    int value;
    int field_4;
    void *pending;
} Msg_82FB07C8;

int fn_82FB07C8(Obj_82FB07C8 *self, Msg_82FB07C8 *msg)
{
    if (msg->pending == 0) {
        int enabled = 0;
        if (msg->value == 1) {
            enabled = 1;
        }
        self->vt->slot40(self, enabled);
    }
    return 1;
}
