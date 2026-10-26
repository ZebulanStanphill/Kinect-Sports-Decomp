// Tests whether the object's deadline plus an interval precedes system time.
struct Clock_828ACBD8 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
extern "C" Clock_828ACBD8 *fn_825089A0();
struct State_828ACBD8 { char pad[0xbc]; float deadline; };
extern "C" bool fn_828ACBD8(State_828ACBD8 *self, float interval)
{
    Clock_828ACBD8 *clock = fn_825089A0();
    float deadline = self->deadline + interval;
    return deadline < clock->vf08();
}
