#define __lwsync() __emit(0x7C2004AC)

void __emit(unsigned int opcode);
__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef struct Service_82250A18 Service_82250A18;

typedef struct ServiceVtbl_82250A18 {
    void (*slot0)(Service_82250A18 *self);
    void (*initialize)(Service_82250A18 *self); /* 0x04 */
} ServiceVtbl_82250A18;

typedef struct Script_82250A18 {
    unsigned char data[0x4C];
} Script_82250A18;

struct Service_82250A18 {
    ServiceVtbl_82250A18 *vt; /* 0x00 */
    unsigned char active;     /* 0x04 */
    unsigned int value;       /* 0x08 */
    Script_82250A18 script;   /* 0x0C */
    unsigned int value58;     /* 0x58 */
    unsigned char flag5C;     /* 0x5C */
    unsigned int value60;     /* 0x60 */
};

typedef union Owner_82250A18 {
    __int64 value;

    struct {
        unsigned int thread;
        unsigned int count;
    } parts;
} Owner_82250A18;

extern unsigned int fn_82A1BB18(void);
extern void fn_8313AA48(void);
extern Script_82250A18 *fn_824BFFB0(Script_82250A18 *self);
extern int atexit(void (*func)(void));

extern ServiceVtbl_82250A18 lbl_821963EC;
extern unsigned int lbl_83299070;
extern Service_82250A18 lbl_83297998;
extern Service_82250A18 *lbl_832975B0;
/* volatile: published under the lock and re-read after every store (double-checked init) */
extern Service_82250A18 *volatile lbl_832975B4;
extern __int64 volatile lbl_832975B8;

Service_82250A18 *fn_82250A18(void)
{
    Owner_82250A18 owner;
    __int64 previous;
    Service_82250A18 *service;

    owner.parts.thread = fn_82A1BB18();
    owner.parts.count = 1;
    for (;;) {
        previous = _InterlockedCompareExchange64(&lbl_832975B8, owner.value, 0);
        if (previous == owner.value)
            return lbl_832975B4;
        if (previous == 0)
            break;
    }
    __lwsync();
    if (lbl_832975B0 == 0) {
        if ((lbl_83299070 & 1) == 0) {
            lbl_83299070 |= 1;
            lbl_83297998.vt = &lbl_821963EC;
            lbl_83297998.active = 0;
            lbl_83297998.value = 0;
            fn_824BFFB0(&lbl_83297998.script);
            lbl_83297998.value58 = 0;
            lbl_83297998.flag5C = 0;
            lbl_83297998.value60 = 0;
            atexit(fn_8313AA48);
        }
        lbl_832975B4 = &lbl_83297998;
        service = lbl_832975B4;
        service->vt->initialize(service);
        lbl_832975B0 = lbl_832975B4;
        __lwsync();
    }
    lbl_832975B8 = 0;
    return lbl_832975B0;
}
