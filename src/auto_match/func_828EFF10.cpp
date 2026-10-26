// Refresh the cached system time and the low bit of the service status.
struct System_828EFF10 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
struct State_828EFF10 { float time; unsigned char status; };
extern "C" {
System_828EFF10 *fn_825089A0();
void fn_82CE1E98();
unsigned char fn_82CE07E8();
extern State_828EFF10 lbl_83214564;
void fn_828EFF10() {
    fn_82CE1E98();
    lbl_83214564.time = fn_825089A0()->vf08();
    lbl_83214564.status = fn_82CE07E8() & 1;
}
}
