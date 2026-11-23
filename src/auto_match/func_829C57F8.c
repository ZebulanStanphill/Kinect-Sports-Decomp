typedef struct Request_829C57F8 Request_829C57F8;
typedef void (*Callback_829C57F8)(unsigned int, unsigned int, Request_829C57F8 *);

struct Request_829C57F8 {
    unsigned int result;
    char pad4[8];
    void *event;
    Callback_829C57F8 callback;
};

extern struct State_829C57F8 {
    char pad0[0x1c];
    float value;
    float previousValue;
    unsigned int lock;
    char pad28[0x28];
    int busy;
    char pad54[8];
    unsigned int serial;
    char pad60[0x120];
    char parameters[0x18];
    int x;
    int y;
    char pad1A0[8];
    unsigned int timestamp;
    char pad1AC[0x24];
    unsigned int flags;
    char pad1D4[0x1c];
    Request_829C57F8 *pending;
} lbl_83214DB0;

extern unsigned int KfAcquireSpinLock(unsigned int *lock);
extern void KfReleaseSpinLock(unsigned int *lock, unsigned int oldIrql);
extern int SetEvent(void *event);
extern double fn_82F65018(double y, double x);
extern void fn_829F4FC8(unsigned int flags, void *parameters, float angle, float zero, unsigned int serial,
                        unsigned int mode);
extern unsigned int fn_82A1F2F8(void);
extern void fn_829C56D8(unsigned int result);

void fn_829C57F8(unsigned int result)
{
    unsigned int oldIrql = KfAcquireSpinLock(&lbl_83214DB0.lock);
    Request_829C57F8 *request = lbl_83214DB0.pending;
    unsigned int serial;

    lbl_83214DB0.pending = 0;
    KfReleaseSpinLock(&lbl_83214DB0.lock, oldIrql);
    serial = lbl_83214DB0.serial++;
    fn_829F4FC8(0, lbl_83214DB0.parameters,
                (float)fn_82F65018((double)lbl_83214DB0.y, (double)lbl_83214DB0.x), 0.0f, serial, 0);
    if ((lbl_83214DB0.flags & 0x20) == 0) {
        unsigned int timestamp = fn_82A1F2F8();
        lbl_83214DB0.previousValue = lbl_83214DB0.value;
        lbl_83214DB0.timestamp = timestamp;
    }
    if (request != 0) {
        void *event;
        Callback_829C57F8 callback;

        if (result != 0x4c7)
            lbl_83214DB0.busy = 0;
        event = request->event;
        callback = request->callback;
        request->result = result;
        if (event != 0 && (int)event != -1)
            SetEvent(event);
        if (callback != 0)
            callback(result, 0, request);
        fn_829C56D8(result);
    }
}
