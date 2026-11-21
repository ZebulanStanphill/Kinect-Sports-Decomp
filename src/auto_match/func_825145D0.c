#define __lwsync() __emit(0x7C2004AC)

void __emit(unsigned int opcode);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef struct Service_825145D0 Service_825145D0;

typedef struct ServiceVtbl_825145D0 {
    void (*slot0)(Service_825145D0 *self);
    void (*initialize)(Service_825145D0 *self); /* 0x04 */
} ServiceVtbl_825145D0;

typedef struct Header_825145D0 {
    struct Header_825145D0 *parent; /* 0x00 */
    struct Header_825145D0 *left;   /* 0x04 */
    struct Header_825145D0 *right;  /* 0x08 */
} Header_825145D0;

struct Service_825145D0 {
    ServiceVtbl_825145D0 *vt; /* 0x00 */
    Header_825145D0 header;   /* 0x04 */
    unsigned int count;       /* 0x10 */
};

typedef union Owner_825145D0 {
    __int64 value;

    struct {
        unsigned int thread;
        unsigned int count;
    } parts;
} Owner_825145D0;

extern unsigned int fn_82A1BB18(void);
extern void fn_8313F0B0(void);
extern int atexit(void (*func)(void));

extern ServiceVtbl_825145D0 lbl_821C2504;
extern unsigned int lbl_83297D10;
extern Service_825145D0 lbl_83297954;
extern Service_825145D0 *lbl_83297820;
/* volatile: published under the lock and re-read after every store (double-checked init) */
extern Service_825145D0 *volatile lbl_83297824;
extern __int64 volatile lbl_83297828;

Service_825145D0 *fn_825145D0(void)
{
    Owner_825145D0 owner;
    __int64 previous;
    Service_825145D0 *service;

    owner.parts.thread = fn_82A1BB18();
    owner.parts.count = 1;
    for (;;) {
        previous = _InterlockedCompareExchange64(&lbl_83297828, owner.value, 0);
        if (previous == owner.value)
            return lbl_83297824;
        if (previous == 0)
            break;
    }
    __lwsync();
    if (lbl_83297820 == 0) {
        if ((lbl_83297D10 & 1) == 0) {
            lbl_83297D10 |= 1;
            lbl_83297954.vt = &lbl_821C2504;
            lbl_83297954.header.parent = 0;
            lbl_83297954.header.left = &lbl_83297954.header;
            lbl_83297954.header.right = &lbl_83297954.header;
            lbl_83297954.count = 0;
            atexit(fn_8313F0B0);
        }
        lbl_83297824 = &lbl_83297954;
        service = lbl_83297824;
        service->vt->initialize(service);
        lbl_83297820 = lbl_83297824;
        __lwsync();
    }
    lbl_83297828 = 0;
    return lbl_83297820;
}
