// Resets the countdown and records the current system clock value.
struct Clock_828D2F28 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828D2F28 *fn_825089A0();
struct State_828D2F28 { int pad[3]; int count; unsigned __int64 time; };
extern "C" void fn_828D2F28(State_828D2F28 *self) {
    fn_825089A0()->vf0C();
    self->count = 10;
    self->time = fn_825089A0()->vf0C();
}
