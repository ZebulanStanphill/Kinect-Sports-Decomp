#define __lwsync() __emit(0x7C2004AC)

void __emit(unsigned int opcode);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef struct Service_825117D8 Service_825117D8;

typedef struct ServiceVtbl_825117D8 {
    void (*slot0)(Service_825117D8 *self);
    void (*initialize)(Service_825117D8 *self); /* 0x04 */
} ServiceVtbl_825117D8;

struct Service_825117D8 {
    ServiceVtbl_825117D8 *vt; /* 0x00 */
    unsigned int value;       /* 0x04 */
    unsigned char flag8;      /* 0x08 */
    unsigned char flag9;      /* 0x09 */
    unsigned char flagA;      /* 0x0A */
};

typedef union Owner_825117D8 {
    __int64 value;

    struct {
        unsigned int thread;
        unsigned int count;
    } parts;
} Owner_825117D8;

extern unsigned int fn_82A1BB18(void);
extern void fn_8313F020(void);
extern int atexit(void (*func)(void));

extern ServiceVtbl_825117D8 lbl_821C097C;
extern unsigned int lbl_83297D14;
extern Service_825117D8 lbl_83297968;
extern Service_825117D8 *lbl_83297800;
/* volatile: published under the lock and re-read after every store (double-checked init) */
extern Service_825117D8 *volatile lbl_83297804;
extern __int64 volatile lbl_83297808;

Service_825117D8 *fn_825117D8(void)
{
    Owner_825117D8 owner;
    __int64 previous;
    Service_825117D8 *service;

    owner.parts.thread = fn_82A1BB18();
    owner.parts.count = 1;
    for (;;) {
        previous = _InterlockedCompareExchange64(&lbl_83297808, owner.value, 0);
        if (previous == owner.value)
            return lbl_83297804;
        if (previous == 0)
            break;
    }
    __lwsync();
    if (lbl_83297800 == 0) {
        if ((lbl_83297D14 & 1) == 0) {
            lbl_83297D14 |= 1;
            lbl_83297968.vt = &lbl_821C097C;
            lbl_83297968.value = 0;
            lbl_83297968.flag8 = 0;
            lbl_83297968.flag9 = 1;
            lbl_83297968.flagA = 0;
            atexit(fn_8313F020);
        }
        lbl_83297804 = &lbl_83297968;
        service = lbl_83297804;
        service->vt->initialize(service);
        lbl_83297800 = lbl_83297804;
        __lwsync();
    }
    lbl_83297808 = 0;
    return lbl_83297800;
}
