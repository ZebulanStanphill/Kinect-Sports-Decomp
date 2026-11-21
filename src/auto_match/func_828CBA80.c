#define __lwsync() __emit(0x7C2004AC)

void __emit(unsigned int opcode);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef struct Service_828CBA80 Service_828CBA80;

typedef struct ServiceVtbl_828CBA80 {
    void (*slot0)(Service_828CBA80 *self);
    void (*initialize)(Service_828CBA80 *self); /* 0x04 */
} ServiceVtbl_828CBA80;

typedef struct Header_828CBA80 {
    struct Header_828CBA80 *parent; /* 0x00 */
    struct Header_828CBA80 *left;   /* 0x04 */
    struct Header_828CBA80 *right;  /* 0x08 */
} Header_828CBA80;

struct Service_828CBA80 {
    ServiceVtbl_828CBA80 *vt; /* 0x00 */
    Header_828CBA80 header;   /* 0x04 */
    unsigned int count;       /* 0x10 */
};

typedef union Owner_828CBA80 {
    __int64 value;

    struct {
        unsigned int thread;
        unsigned int count;
    } parts;
} Owner_828CBA80;

extern unsigned int fn_82A1BB18(void);
extern void fn_831413D8(void);
extern int atexit(void (*func)(void));

extern ServiceVtbl_828CBA80 lbl_820264A0;
extern unsigned int lbl_832143E0;
extern Service_828CBA80 lbl_832143CC;
extern Service_828CBA80 *lbl_832143E4;
/* volatile: published under the lock and re-read after every store (double-checked init) */
extern Service_828CBA80 *volatile lbl_832143E8;
extern __int64 volatile lbl_832143F0;

Service_828CBA80 *fn_828CBA80(void)
{
    Owner_828CBA80 owner;
    __int64 previous;
    Service_828CBA80 *service;

    owner.parts.thread = fn_82A1BB18();
    owner.parts.count = 1;
    for (;;) {
        previous = _InterlockedCompareExchange64(&lbl_832143F0, owner.value, 0);
        if (previous == owner.value)
            return lbl_832143E8;
        if (previous == 0)
            break;
    }
    __lwsync();
    if (lbl_832143E4 == 0) {
        if ((lbl_832143E0 & 1) == 0) {
            lbl_832143E0 |= 1;
            lbl_832143CC.vt = &lbl_820264A0;
            lbl_832143CC.header.parent = 0;
            lbl_832143CC.header.left = &lbl_832143CC.header;
            lbl_832143CC.header.right = &lbl_832143CC.header;
            lbl_832143CC.count = 0;
            atexit(fn_831413D8);
        }
        lbl_832143E8 = &lbl_832143CC;
        service = lbl_832143E8;
        service->vt->initialize(service);
        lbl_832143E4 = lbl_832143E8;
        __lwsync();
    }
    lbl_832143F0 = 0;
    return lbl_832143E4;
}
