// A first-call counter baseline. The 64-bit value is lbl_83214020 (relocations added in config.yml).
struct System_828AFE88 {
    virtual void vf00();
    virtual void vf04();
    virtual double vf08();
    virtual unsigned __int64 vf0C();
    virtual unsigned __int64 vf10();
};

extern "C" {
System_828AFE88 *fn_825089A0();
extern unsigned int lbl_83214028;
extern unsigned __int64 lbl_83214020;
}

extern "C" unsigned __int64 fn_828AFE88()
{
    unsigned __int64 now = fn_825089A0()->vf10();
    if (!(lbl_83214028 & 1)) {
        lbl_83214028 |= 1;
        lbl_83214020 = now;
    }
    return now - lbl_83214020;
}
