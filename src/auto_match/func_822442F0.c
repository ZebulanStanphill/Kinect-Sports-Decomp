#define __lwsync() __emit(0x7C2004AC)

void __emit(unsigned int opcode);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef struct Service_822442F0 Service_822442F0;

typedef struct ServiceVtbl_822442F0 {
    void (*slot0)(Service_822442F0 *self);
    void (*initialize)(Service_822442F0 *self); /* 0x04 */
} ServiceVtbl_822442F0;

struct Service_822442F0 {
    ServiceVtbl_822442F0 *vt; /* 0x00 */
    unsigned int value4;      /* 0x04 */
    unsigned int value8;      /* 0x08 */
    unsigned int valueC;      /* 0x0C */
    unsigned int value10;     /* 0x10 */
    unsigned int value14;     /* 0x14 */
    unsigned char flag18;     /* 0x18 */
    unsigned char flag19;     /* 0x19 */
    unsigned int value1C;     /* 0x1C */
    unsigned int value20;     /* 0x20 */
};

typedef union Owner_822442F0 {
    __int64 value;

    struct {
        unsigned int thread;
        unsigned int count;
    } parts;
} Owner_822442F0;

extern unsigned int fn_82A1BB18(void);
extern void fn_8313A768(void);
extern int atexit(void (*func)(void));

extern ServiceVtbl_822442F0 lbl_8219748C;
extern unsigned int lbl_83298F74;
extern Service_822442F0 lbl_832979FC;
extern Service_822442F0 *lbl_8329759C;
/* volatile: published under the lock and re-read after every store (double-checked init) */
extern Service_822442F0 *volatile lbl_832975A0;
extern __int64 volatile lbl_832975A8;

Service_822442F0 *fn_822442F0(void)
{
    Owner_822442F0 owner;
    __int64 previous;
    Service_822442F0 *service;

    owner.parts.thread = fn_82A1BB18();
    owner.parts.count = 1;
    for (;;) {
        previous = _InterlockedCompareExchange64(&lbl_832975A8, owner.value, 0);
        if (previous == owner.value)
            return lbl_832975A0;
        if (previous == 0)
            break;
    }
    __lwsync();
    if (lbl_8329759C == 0) {
        if ((lbl_83298F74 & 1) == 0) {
            lbl_83298F74 |= 1;
            lbl_832979FC.vt = &lbl_8219748C;
            lbl_832979FC.value4 = 0;
            lbl_832979FC.value8 = 0;
            lbl_832979FC.valueC = 0;
            lbl_832979FC.value10 = 0;
            lbl_832979FC.flag18 = 0;
            lbl_832979FC.flag19 = 0;
            lbl_832979FC.value1C = 0;
            lbl_832979FC.value20 = 0;
            atexit(fn_8313A768);
        }
        lbl_832975A0 = &lbl_832979FC;
        service = lbl_832975A0;
        service->vt->initialize(service);
        lbl_8329759C = lbl_832975A0;
        __lwsync();
    }
    lbl_832975A8 = 0;
    return lbl_8329759C;
}
