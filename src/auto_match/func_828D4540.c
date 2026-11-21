typedef struct Obj_828D4540 {
    char pad0[0x2c];
    unsigned int state; /* 0x2c */
} Obj_828D4540;

extern void fn_828D4028(Obj_828D4540 *self);
extern void fn_828D4098(Obj_828D4540 *self);
extern void fn_828D4120(Obj_828D4540 *self);
extern void fn_828D4180(Obj_828D4540 *self);

void fn_828D4540(Obj_828D4540 *self)
{
    switch (self->state) {
    case 0:
        fn_828D4028(self);
        break;
    case 1:
        fn_828D4120(self);
        break;
    case 2:
        fn_828D4180(self);
        break;
    case 3:
        fn_828D4098(self);
        break;
    }
}
