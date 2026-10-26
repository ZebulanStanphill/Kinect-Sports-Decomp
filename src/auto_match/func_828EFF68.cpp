// Refresh the cached system flag after the polling interval has elapsed.
struct System_828EFF68 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};
struct Cache_828EFF68 { float time; unsigned char flag; };
extern "C" {
System_828EFF68 *fn_825089A0();
unsigned char fn_82CE07E8();
extern float lbl_82002C5C;
extern Cache_828EFF68 lbl_83214564;
void fn_828EFF68()
{
    float time = fn_825089A0()->vf08();
    if (time - lbl_83214564.time > lbl_82002C5C) {
        lbl_83214564.time = time;
        lbl_83214564.flag = fn_82CE07E8() & 1;
    }
}
}
