typedef struct Obj_8272C318 Obj_8272C318;

typedef struct Vtbl_8272C318 {
    void *slots[107];
    void (*setState)(Obj_8272C318 *self, int state, unsigned char on, int notify);
} Vtbl_8272C318;

struct Obj_8272C318 {
    Vtbl_8272C318 *vt;
    char pad[0xc8 - 4];
    unsigned short flags;
};

void fn_8272C318(Obj_8272C318 *self, int state, unsigned char on)
{
    unsigned short flags = self->flags;
    unsigned char cur = (flags >> 1) & 1;

    if (on && !cur)
        self->flags = flags | 2;
    else if (!on && cur)
        self->flags = flags & ~2;
    self->vt->setState(self, state, on, 1);
}
