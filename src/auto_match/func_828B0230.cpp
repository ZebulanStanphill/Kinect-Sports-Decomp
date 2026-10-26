// Disables an active operation once its clock timeout has elapsed.
struct Clock_828B0230 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828B0230 *fn_825089A0();
struct State_828B0230 { int pad[2]; void *object; int pad0; unsigned __int64 time; unsigned char active; };
extern "C" { bool fn_828ACCE8(void *); bool fn_828AD740(void *); void fn_828B00F8(State_828B0230 *, int); }
extern "C" void fn_828B0230(State_828B0230 *self) {
    if (self->active && fn_828ACCE8(self->object) && !fn_828AD740(self->object)) {
        unsigned __int64 now = fn_825089A0()->vf0C();
        if ((unsigned int)now - (unsigned int)self->time > 900000)
            fn_828B00F8(self, 0);
    }
}
