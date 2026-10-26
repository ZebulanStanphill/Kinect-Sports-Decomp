// Moves the state machine to its next state and records a system timestamp.
struct Clock_828D30C8 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828D30C8 *fn_825089A0();
struct State_828D30C8 { int pad[2]; void *object; int state; unsigned __int64 time; };
extern "C" bool fn_828ACCE8(void *);
extern "C" bool fn_828AD740(void *);
extern "C" void fn_828D2DB8(State_828D30C8 *, int);
extern "C" void fn_828D30C8(State_828D30C8 *self)
{
    if (self->state == 2 && fn_828ACCE8(self->object) && !fn_828AD740(self->object)) {
        fn_828D2DB8(self, 9);
        return;
    }
    if (self->state != 9) {
        fn_825089A0()->vf0C();
        self->state = 10;
        self->time = fn_825089A0()->vf0C();
    }
}
