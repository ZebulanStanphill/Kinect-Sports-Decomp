// Tests whether the requested duration has elapsed since the stored timestamp.
// State_828AEC08 and SystemClock_828AEC08 are placeholders for the state object
// and the system object's clock interface. Virtual slot 0x08 returns the time.

struct SystemClock_828AEC08 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
extern "C" SystemClock_828AEC08 *fn_825089A0();
struct State_828AEC08 {
    char pad[0x8c];
    float start;
};
extern "C" bool fn_828AEC08(State_828AEC08 *self, float duration) {
    float now = fn_825089A0()->vf08();
    return self->start + duration < now;
}
