#define __lwsync() __emit(0x7C2004AC)

void __emit(unsigned int opcode);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef struct Service_82511928 Service_82511928;

typedef struct ServiceVtbl_82511928 {
    void (*slot0)(Service_82511928 *self);
    void (*initialize)(Service_82511928 *self); /* 0x04 */
} ServiceVtbl_82511928;

struct Service_82511928 {
    ServiceVtbl_82511928 *vt; /* 0x00 */
};

typedef union Owner_82511928 {
    __int64 value;

    struct {
        unsigned int thread;
        unsigned int count;
    } parts;
} Owner_82511928;

extern unsigned int fn_82A1BB18(void);
extern Service_82511928 *fn_82511A50(void);
extern void fn_8313F038(void);
extern int atexit(void (*func)(void));

extern unsigned int lbl_832977CC;
extern Service_82511928 lbl_832977D0;
extern Service_82511928 *lbl_83297810;
/* volatile: published under the lock and re-read after every store (double-checked init) */
extern Service_82511928 *volatile lbl_83297814;
extern __int64 volatile lbl_83297818;

Service_82511928 *fn_82511928(void)
{
    Owner_82511928 owner;
    __int64 previous;
    Service_82511928 *service;

    owner.parts.thread = fn_82A1BB18();
    owner.parts.count = 1;
    for (;;) {
        previous = _InterlockedCompareExchange64(&lbl_83297818, owner.value, 0);
        if (previous == owner.value)
            return lbl_83297814;
        if (previous == 0)
            break;
    }
    __lwsync();
    if (lbl_83297810 == 0) {
        if ((lbl_832977CC & 1) == 0) {
            lbl_832977CC |= 1;
            fn_82511A50();
            atexit(fn_8313F038);
        }
        lbl_83297814 = &lbl_832977D0;
        service = lbl_83297814;
        service->vt->initialize(service);
        lbl_83297810 = lbl_83297814;
        __lwsync();
    }
    lbl_83297818 = 0;
    return lbl_83297810;
}
