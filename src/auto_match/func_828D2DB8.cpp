// Update the object's value and timestamp using the system's 64-bit clock.
struct System_828D2DB8 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
struct State_828D2DB8 { int pad[3]; unsigned int value; unsigned __int64 time; };
extern "C" System_828D2DB8 *fn_825089A0();
extern "C" void fn_828D2DB8(State_828D2DB8 *self, unsigned int value) {
    fn_825089A0()->vf0C();
    self->value = value;
    self->time = fn_825089A0()->vf0C();
}
