struct State_826A12D8 {
    char pad[0xb00];
    unsigned int flags;
};

class Obj_826A12D8 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual State_826A12D8 *getState();

    char pad[0x92 - 4];
    unsigned char x92;
};

extern "C" void fn_826A12D8(Obj_826A12D8 *o, unsigned char value)
{
    o->x92 = value;
    o->getState()->flags |= 0x400;
}
