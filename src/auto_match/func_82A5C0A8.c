typedef struct Obj_82A5C0A8 Obj_82A5C0A8;
typedef struct {
    char pad[0x2c];
    void (*on0)(Obj_82A5C0A8 *self);       /* 0x2c */
    void (*on1)(Obj_82A5C0A8 *self);       /* 0x30 */
    void (*onOther)(Obj_82A5C0A8 *self);   /* 0x34 */
} Vtbl_82A5C0A8;
struct Obj_82A5C0A8 {
    Vtbl_82A5C0A8 *vt;
    int pad[4];
    int value;      /* 0x14 */
};

void fn_82A5C0A8(Obj_82A5C0A8 *self, unsigned int state, int value)
{
    self->value = value;
    switch (state) {
    case 0:
        self->vt->on0(self);
        break;
    case 1:
        self->vt->on1(self);
        break;
    default:
        self->vt->onOther(self);
        break;
    }
}
