// Kinect Sports retail 4D5308C9, function 0x8303DCA0 (72 bytes).
// Forwards to virtual slot 0xC8 of dev with bits 3..7 of the word at o+0x14 and fn_8302BBA8(o).
class Iface_8303DCA0 {
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
    virtual void slotAC();
    virtual void slotB0();
    virtual void slotB4();
    virtual void slotB8();
    virtual void slotBC();
    virtual void slotC0();
    virtual void slotC4();
    virtual void fC8(int a, unsigned int bits, int c);
};

extern "C" int fn_8302BBA8(int o);

extern "C" void fn_8303DCA0(int o, Iface_8303DCA0 *dev, int a)
{
    unsigned int bits = (*(unsigned int *)(o + 0x14) >> 3) & 0x1f;
    dev->fC8(a, bits, fn_8302BBA8(o));
}
