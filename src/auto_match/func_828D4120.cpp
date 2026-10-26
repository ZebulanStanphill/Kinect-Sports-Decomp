// Advance the object's state and record the system clock when the transition
// helper returns status one.
struct System_828D4120 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
struct State_828D4120 { int pad[11]; int state; float time; };
extern "C" System_828D4120 *fn_825089A0();
extern "C" unsigned char fn_828D34E0(State_828D4120 *, int);
extern "C" void fn_828D4120(State_828D4120 *self) {
    if (fn_828D34E0(self, 0) == 1) {
        self->state = 2;
        self->time = fn_825089A0()->vf08();
    }
}
