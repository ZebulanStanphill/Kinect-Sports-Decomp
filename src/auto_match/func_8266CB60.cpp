extern "C" long _InterlockedDecrement(long volatile *);
extern "C" void fn_8265CA20(void *);

struct RefBase {
    virtual void _Destroy() = 0;
    virtual void _Delete_this() = 0;
    long _Uses;
    long _Weaks;
    void _Decwref() { if (_InterlockedDecrement((volatile long *)&_Weaks) == 0) _Delete_this(); }
};

struct WeakPtr_8266CB60 {
    void *_Ptr;
    RefBase *_Rep;
};

extern "C" WeakPtr_8266CB60 *fn_8266CB60(WeakPtr_8266CB60 *self, unsigned int flags)
{
    if (self->_Rep != 0) self->_Rep->_Decwref();
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
