// Apply the pending update only when its timestamp matches the object's
// current timestamp. The system supplies the timestamp for the update call.
struct System_828B8800 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
struct State_828B8800 { int pad[18]; unsigned __int64 time; };
extern "C" System_828B8800 *fn_825089A0();
extern "C" void fn_828B8550(State_828B8800 *, unsigned __int64, unsigned int,
    unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern "C" bool fn_828B8800(State_828B8800 *self, unsigned int a,
    unsigned int b, unsigned int c, unsigned int d, unsigned int e,
    unsigned int f, unsigned __int64 time) {
    if (time == self->time) {
        unsigned __int64 now = fn_825089A0()->vf0C();
        fn_828B8550(self, now, a, b, c, f, d, e);
        return true;
    }
    return false;
}
