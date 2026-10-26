// Records the current system-clock time and optionally resets the second
// timestamp. State_8289DAD8 and SystemClock_8289DAD8 are placeholder types for
// the state object and the system object's clock interface. The system object
// is obtained through fn_825089A0; virtual slot 0x08 returns the time.

struct SystemClock_8289DAD8 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
extern "C" SystemClock_8289DAD8 *fn_825089A0();
struct State_8289DAD8 {
    int pad[6];
    float start, reset;
};
extern "C" void fn_8289DAD8(State_8289DAD8 *self, bool reset) {
    float now = fn_825089A0()->vf08();
    self->start = now;
    if (reset) self->reset = now;
}
