// Record the current system clock in the object's timestamp field.
struct System_8289DB38 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
extern "C" System_8289DB38 *fn_825089A0();
struct Object_8289DB38 { char pad[0x14]; float time; };
extern "C" void fn_8289DB38(Object_8289DB38 *self)
{
    self->time = fn_825089A0()->vf08();
}
