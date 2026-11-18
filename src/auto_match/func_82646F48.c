#define HMT_LOW() __emit(0x7C210B78)
#define HMT_VERY_LOW() __emit(0x7FFFFB78)
#define HMT_MEDIUM() __emit(0x7C421378)

extern unsigned long __gregister_get(unsigned int reg);

/* The fence value is written by another processor while this spin-wait polls it: the function reads it
   twice with no store in between and the original loads it twice. */
typedef struct Queue_82646F48 {
    volatile unsigned int value; /* 0x0, written by the GPU */
    unsigned int position;       /* 0x4 */
} Queue_82646F48;

typedef struct Object_82646F48 {
    char pad0000[0x2a88];
    unsigned int ownerThread; /* 0x2a88 */
    char pad2a8c[0x4];
    Queue_82646F48 *queue; /* 0x2a90 */
    char pad2a94[0x29];
    unsigned char flags; /* 0x2abd */
    char pad2abe[0x42];
    int waiting; /* 0x2b00 */
} Object_82646F48;

typedef struct Thread_82646F48 {
    char pad00[0x58];
    unsigned int field58; /* 0x58 */
} Thread_82646F48;

typedef struct Wait_82646F48 {
    Object_82646F48 *owner; /* 0x0 */
    unsigned int type;      /* 0x4 */
    unsigned int value;     /* 0x8 */
    unsigned int start;     /* 0xc */
    unsigned int last;      /* 0x10 */
    unsigned int time;      /* 0x14 */
} Wait_82646F48;

extern unsigned int fn_82A1BB18(void);
extern int fn_826543B0(Object_82646F48 *owner);

static __forceinline Thread_82646F48 *CurrentThread(void)
{
    return *(Thread_82646F48 **)(__gregister_get(13) + 0x100);
}

int fn_82646F48(Wait_82646F48 *wait)
{
    Object_82646F48 *owner = wait->owner;
    unsigned int now;
    int i;

    HMT_LOW();
    for (i = 0; i < 4; i++) {
        HMT_VERY_LOW();
        HMT_VERY_LOW();
        HMT_VERY_LOW();
        HMT_VERY_LOW();
        HMT_VERY_LOW();
        HMT_VERY_LOW();
        HMT_VERY_LOW();
        HMT_VERY_LOW();
    }
    HMT_MEDIUM();
    if ((owner->flags & 2) == 0) {
        Queue_82646F48 *queue = owner->queue;

        now = CurrentThread()->field58;
        if (wait->value != queue->value) {
            unsigned int value = queue->value;

            wait->start = now;
            wait->value = value;
        }
        if (owner->ownerThread == fn_82A1BB18() && owner->waiting != 0) {
            wait->start = now;
        }
        if (now - wait->start < 5000) {
            return 1;
        }
        if (fn_826543B0(owner) != 0) {
            return 0;
        }
        wait->start = now;
        return 1;
    }
    return 0;
}
