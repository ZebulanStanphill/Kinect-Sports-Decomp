// Tests whether the stored time plus an interval precedes the system clock.
// System_8289DB88 describes the clock slots used by this function.
struct System_8289DB88 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
extern "C" System_8289DB88 *fn_825089A0();
struct Timer_8289DB88 { char pad[0x1c]; float time; };
extern "C" bool fn_8289DB88(Timer_8289DB88 *self, float interval)
{
    float now = fn_825089A0()->vf08();
    return self->time + interval < now;
}
