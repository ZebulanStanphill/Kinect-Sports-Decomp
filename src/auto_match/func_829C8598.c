typedef struct Port_829C8598 {
    int busy;                  /* 0x000 */
    unsigned char state[0x5c]; /* 0x004 */
    unsigned char saved[0x5c]; /* 0x060 */
    char padbc[0xc4];
    int idle; /* 0x180 */
} Port_829C8598;

typedef struct Request_829C8598 {
    int type; /* 0x00 */
    char pad4[0x10];
    void (*callback)(void); /* 0x14 */
    int pad18;

    union {
        unsigned char state[0x5c]; /* 0x1c */

        struct {
            int pad[3];
            int sequence; /* 0x28 */
        } fields;
    } u;
} Request_829C8598;

typedef struct Driver_829C8598 {
    char pad0[0x6c];
    unsigned int lock; /* 0x06c */
    char pad70[0x620];
    int current; /* 0x690 */
    char pad694[0x18];
    Port_829C8598 ports[2];   /* 0x6ac */
    Request_829C8598 request; /* 0x9b4 */
    int requestPort;          /* 0xa2c */
    int pending;              /* 0xa30 */
} Driver_829C8598;

extern Driver_829C8598 lbl_83215000;

extern unsigned char KfAcquireSpinLock(unsigned int *lock);
extern void KfReleaseSpinLock(unsigned int *lock, unsigned char irql);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void fn_829C81E8(void);
extern int fn_829C9BA0(Request_829C8598 *request);

void fn_829C8598(void)
{
    int port;
    unsigned char irql;

    port = lbl_83215000.current;
    irql = KfAcquireSpinLock(&lbl_83215000.lock);
    if (lbl_83215000.pending == 0) {
        lbl_83215000.ports[port].idle = 0;
        lbl_83215000.pending = 1;
        KfReleaseSpinLock(&lbl_83215000.lock, irql);
        lbl_83215000.requestPort = port;
        lbl_83215000.request.type = 0x23;
        lbl_83215000.request.callback = fn_829C81E8;
        memcpy(lbl_83215000.request.u.state, lbl_83215000.ports[port].saved, 0x5c);
        lbl_83215000.request.u.fields.sequence = -lbl_83215000.request.u.fields.sequence;
        if (fn_829C9BA0(&lbl_83215000.request) < 0) {
            lbl_83215000.ports[port].idle = 1;
            lbl_83215000.pending = 0;
        }
    } else {
        KfReleaseSpinLock(&lbl_83215000.lock, irql);
    }
}
