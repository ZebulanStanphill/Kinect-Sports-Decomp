struct Device_828AA2C8 {
    virtual void slot000();
    virtual void slot004();
    virtual void slot008();
    virtual void slot00c();
    virtual void slot010();
    virtual void slot014();
    virtual void slot018();
    virtual void slot01c();
    virtual void slot020();
    virtual void slot024();
    virtual void slot028();
    virtual void slot02c();
    virtual void slot030();
    virtual void slot034();
    virtual void slot038();
    virtual void slot03c();
    virtual void slot040();
    virtual unsigned int GetId();
    virtual unsigned __int64 GetTime();
};

struct Event_828AA2C8 {
    unsigned __int64 time;  /* 0x00 */
    unsigned int id;        /* 0x08 */
    unsigned char enabled;  /* 0x0c */
    unsigned char active;   /* 0x0d */
    unsigned char mode;     /* 0x0e */
    unsigned char reserved; /* 0x0f */
};

extern "C" unsigned char fn_8288B760(Device_828AA2C8 *device);
extern "C" int fn_828B1340(void *self);
extern "C" unsigned char fn_828ED1A0(void *object);
extern "C" void fn_828AA188(void *queue, Event_828AA2C8 *event);
extern "C" void fn_828A94B0(void *self, Event_828AA2C8 *event);

/* The state is turned into a bool by an if/else: the compiler keeps the 0/1 value and tests
   it again in the caller. */
static __forceinline bool IsEnabled(void *self)
{
    if ((unsigned char)fn_828B1340(self)) {
        return true;
    }
    return false;
}

extern "C" void *memset(void *, int, unsigned int);

extern "C" void fn_828AA2C8(char *self, Device_828AA2C8 *device, unsigned char mode)
{
    Event_828AA2C8 event;
    unsigned char active;

    memset(&event.id, 0, 8);
    event.mode = mode;
    event.active = 1;
    event.enabled = fn_8288B760(device);
    event.id = device->GetId();
    event.time = device->GetTime();
    active = IsEnabled(self) || fn_828ED1A0(*(void **)(self + 0x8c));
    if (active) {
        fn_828AA188(self + 0x188, &event);
    } else {
        fn_828A94B0(self, &event);
    }
}
