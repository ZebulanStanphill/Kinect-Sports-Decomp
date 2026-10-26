// Tests whether the stored time plus the given interval lies before the
// current time of the object fn_825089A0 returns.
struct System_8289DBF0 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};

struct State_8289DBF0 {
    char pad[0x14];
    float time;
};

extern "C" System_8289DBF0 *fn_825089A0();

extern "C" bool fn_8289DBF0(State_8289DBF0 *self, float interval)
{
    double now = fn_825089A0()->vf08();
    return (float)(self->time + interval) < now;
}
