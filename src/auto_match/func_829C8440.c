typedef struct State_829C8440 {
    unsigned char bytes[0x5c];
} State_829C8440;

typedef struct Port_829C8440 {
    int busy;                  /* 0x000 */
    unsigned char state[0x5c]; /* 0x004 */
    State_829C8440 saved;      /* 0x060 */
    State_829C8440 history[2]; /* 0x0bc */
    int slots[2];              /* 0x174 */
    int index;                 /* 0x17c */
    int idle;                  /* 0x180 */
} Port_829C8440;

typedef struct Request_829C8440 {
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
} Request_829C8440;

typedef struct Driver_829C8440 {
    char pad0[0x6c];
    unsigned int lock; /* 0x06c */
    char pad70[0x620];
    int current; /* 0x690 */
    char pad694[0x18];
    Port_829C8440 ports[2];   /* 0x6ac */
    Request_829C8440 request; /* 0x9b4 */
    int requestPort;          /* 0xa2c */
    int pending;              /* 0xa30 */
} Driver_829C8440;

extern Driver_829C8440 lbl_83215000;

extern unsigned char KfAcquireSpinLock(unsigned int *lock);
extern void KfReleaseSpinLock(unsigned int *lock, unsigned char irql);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern unsigned int RtlNtStatusToDosError(int status);
extern void fn_829C81E8(void);
extern int fn_829C9BA0(Request_829C8440 *request);

int fn_829C8440(unsigned int port, int force)
{
    unsigned char irql;
    int status;
    int error;

    irql = KfAcquireSpinLock(&lbl_83215000.lock);
    if (force != 0) {
        lbl_83215000.ports[port].idle = 1;
    }
    if (lbl_83215000.ports[port].idle != 0 && lbl_83215000.ports[port].busy == 0 &&
        port == lbl_83215000.current && lbl_83215000.pending == 0) {
        lbl_83215000.ports[port].idle = 0;
        memcpy(&lbl_83215000.ports[port].history[lbl_83215000.ports[port].index],
               &lbl_83215000.ports[port].saved, 0x5c);
        lbl_83215000.pending = 1;
        KfReleaseSpinLock(&lbl_83215000.lock, irql);
        lbl_83215000.request.type = 0x23;
        lbl_83215000.request.callback = fn_829C81E8;
        lbl_83215000.requestPort = port;
        memcpy(lbl_83215000.request.u.state, &lbl_83215000.ports[port].saved, 0x5c);
        lbl_83215000.request.u.fields.sequence = -lbl_83215000.request.u.fields.sequence;
        status = fn_829C9BA0(&lbl_83215000.request);
        if (status == 0x103) {
            status = 0;
        } else if (status < 0) {
            lbl_83215000.ports[port].idle = 1;
            lbl_83215000.pending = 0;
        }
        error = RtlNtStatusToDosError(status);
        if (error > 0) {
            error = (error & 0xffff) | 0x80070000;
        }
        return error;
    }
    KfReleaseSpinLock(&lbl_83215000.lock, irql);
    return 0;
}
