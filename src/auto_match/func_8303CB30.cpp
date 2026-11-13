class Iface_8303CB30 {
public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0C();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1C();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2C();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3C();
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4C();
    virtual void slot50();
    virtual void slot54();
    virtual void slot58();
    virtual void slot5C();
    virtual void slot60();
    virtual void slot64();
    virtual void slot68();
    virtual void slot6C();
    virtual void slot70();
    virtual void slot74();
    virtual void slot78();
    virtual void slot7C();
    virtual void slot80();
    virtual void slot84();
    virtual void slot88();
    virtual void slot8C();
    virtual void slot90();
    virtual void slot94();
    virtual void slot98();
    virtual void slot9C();
    virtual void slotA0();
    virtual void slotA4();
    virtual void slotA8();
    virtual void fAC(int a, int b, float f, unsigned int bits, int c);
};

struct Timer_8303CB30 {
    float base;
    float clock;
};

struct Obj_8303CB30 {
    char pad0[0x14];
    unsigned int flags;
    char pad18[0x10];
    Timer_8303CB30 timer;
    char pad30[4];
    int x34;
};

extern "C" float fn_82FFFC20(float *clock);
extern "C" int fn_8302BBA8(Obj_8303CB30 *o);

extern "C" void fn_8303CB30(Obj_8303CB30 *o, Iface_8303CB30 *dev)
{
    Timer_8303CB30 *t = &o->timer;
    float f = fn_82FFFC20(&t->clock) + t->base;
    unsigned int bits = (o->flags >> 3) & 0x1f;
    int value = o->x34;
    dev->fAC(0, value, f, bits, fn_8302BBA8(o));
}
