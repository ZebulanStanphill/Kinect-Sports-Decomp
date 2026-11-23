typedef struct State_828E0338 {
    char pad[0xc];
    unsigned int state; /* 0x0c */
} State_828E0338;

extern void fn_828E0DD8(State_828E0338 *self);
extern void fn_828E1898(State_828E0338 *self);
extern void fn_828E19D0(State_828E0338 *self);
extern void fn_828E1D08(State_828E0338 *self);
extern void fn_828E1120(State_828E0338 *self);
extern void fn_828E1490(State_828E0338 *self);
extern void fn_828E1568(State_828E0338 *self);
extern void fn_828E0E40(State_828E0338 *self);

void fn_828E0338(State_828E0338 *self)
{
    switch (self->state) {
    case 0:
        fn_828E0DD8(self);
        break;
    case 1:
        fn_828E1898(self);
        break;
    case 2:
        fn_828E19D0(self);
        break;
    case 3:
        fn_828E1D08(self);
        break;
    case 4:
        fn_828E1120(self);
        break;
    case 5:
        fn_828E1490(self);
        break;
    case 6:
        fn_828E1568(self);
        break;
    case 7:
        fn_828E0E40(self);
        break;
    }
}
