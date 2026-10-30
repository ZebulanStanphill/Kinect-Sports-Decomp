#define PAD13 \
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c(); \
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c(); \
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c(); \
    virtual void v30();

class Target_82E6FDA0 {
public:
    PAD13
    virtual int receive(unsigned short id, int value, unsigned __int64 data);
};

class Source_82E6FDA0 {
public:
    PAD13
    virtual int getValue();

    unsigned short id;
    char pad[0x40 - 0xa];
    unsigned __int64 data;
};

extern "C" int fn_82E6FDA0(Source_82E6FDA0 *self, Target_82E6FDA0 *target)
{
    if (target == 0) {
        return 0x80070057;
    }
    return target->receive(self->id, self->getValue(), self->data);
}
