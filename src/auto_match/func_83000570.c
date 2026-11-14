typedef struct Control_83000570 Control_83000570;

typedef struct ControlVtbl_83000570 {
    void *slots[0x12];
    void (*SetValue)(Control_83000570 *self, float value, int id, int a, int b);
} ControlVtbl_83000570;

struct Control_83000570 {
    ControlVtbl_83000570 *vt;
    int pad4[0x15];
    float value14;
    float value15;
    int pad60;
    void *bound;
};

extern void fn_830066E0(Control_83000570 *self, unsigned int handled, int arg, int id, int extra);

void fn_83000570(Control_83000570 *self, unsigned int handled, int arg, int id, int extra)
{
    fn_830066E0(self, handled, arg, id, extra);
    if (self->bound != 0 && handled == 0) {
        unsigned char known = 1;
        float value = 0.0f;
        switch (id) {
        case 0x14:
            value = self->value14;
            break;
        case 0x15:
            value = self->value15;
            break;
        default:
            known = 0;
            break;
        }
        if (known) {
            self->vt->SetValue(self, value, id, 0, 0);
        }
    }
}
