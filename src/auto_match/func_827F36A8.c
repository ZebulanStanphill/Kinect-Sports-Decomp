typedef struct Obj_827F36A8 {
    char pad0[0x104];
    unsigned int state;        /* 0x104 */
} Obj_827F36A8;

extern unsigned char fn_827F22D0(Obj_827F36A8 *self);
extern unsigned char fn_827F2278(Obj_827F36A8 *self);
extern void fn_827F3580(Obj_827F36A8 *self, float weight, float blend, int id);

void fn_827F36A8(Obj_827F36A8 *self, unsigned int state, float blend, int id)
{
    unsigned char active;

    if (state != self->state) {
        active = fn_827F22D0(self) || fn_827F2278(self);
        self->state = state;
        if (active)
            fn_827F3580(self, 0.0f, blend, id);
    }
}
