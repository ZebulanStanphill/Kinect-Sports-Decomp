typedef struct Self_82246970 {
    char pad0[8];
    void *owner;
    char padc[0x38 - 0xc];
    void *controller;
    char pad3c[0x44 - 0x3c];
    unsigned char pending;
} Self_82246970;

extern int fn_82247000(void *controller);
extern unsigned char fn_8288D868(void *controller);
extern unsigned char fn_8288E940(void *controller);
extern unsigned char fn_828B1340(void *owner);
extern unsigned char fn_82247068(void *controller, int mode);
extern void fn_822471C8(void *controller, int value);
extern void fn_822474A8(void *controller);
extern void fn_828AE818(void *owner, int message);

void fn_82246970(Self_82246970 *self)
{
    int state = fn_82247000(self->controller);
    unsigned char ready = fn_8288D868(self->controller);
    unsigned char active = fn_8288E940(self->controller);
    unsigned char busy = fn_828B1340(self->owner);

    if (ready == 0)
        return;
    if (active == 0)
        return;
    if (busy != 0)
        return;
    switch (state) {
    case 0:
        if (fn_82247068(self->controller, 1))
            fn_822471C8(self->controller, 1);
        break;
    case 2:
        fn_828AE818(self->owner, 0x1c);
        break;
    case 3:
        if (fn_82247068(self->controller, 4))
            fn_822471C8(self->controller, 1);
        else
            fn_822474A8(self->controller);
        break;
    }
    self->pending = 0;
}
