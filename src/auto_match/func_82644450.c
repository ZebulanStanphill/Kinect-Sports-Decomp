typedef struct Listener_82644450 Listener_82644450;

typedef struct ListenerVtbl_82644450 {
    void *slots[6];
    void (*Begin)(Listener_82644450 *self, unsigned int *data, unsigned int count, int a, int b); /* 0x18 */
    void (*End)(Listener_82644450 *self);                                                         /* 0x1c */
} ListenerVtbl_82644450;

struct Listener_82644450 {
    ListenerVtbl_82644450 *vt;
};

typedef void (*Callback_82644450)(int phase, unsigned int **data, unsigned int *count, int flags);

typedef struct Device_82644450 {
    char pad0[0x2acc];
    unsigned int writePos; /* 0x2acc */
    char pad2ad0[0x3b04 - 0x2ad0];
    unsigned int *ring; /* 0x3b04 */
    unsigned int mask;  /* 0x3b08 */
    char pad3b0c[0x54f4 - 0x3b0c];
    Listener_82644450 *listener; /* 0x54f4 */
    char pad54f8[0x5c18 - 0x54f8];
    Callback_82644450 callback; /* 0x5c18 */
} Device_82644450;

extern unsigned int lbl_832823FC;
extern void fn_82644388(Device_82644450 *device, unsigned int pos, unsigned int count);

void fn_82644450(Device_82644450 *device, unsigned int *data, unsigned int count)
{
    unsigned int pos;
    unsigned int mask;
    unsigned int *ring;
    unsigned int i;

    if (device->listener != 0 && lbl_832823FC == 0) {
        device->listener->vt->Begin(device->listener, data, count, 0, 0);
    }
    if (device->callback != 0) {
        device->callback(1, &data, &count, 0);
    }
    pos = device->writePos;
    mask = device->mask;
    ring = device->ring;
    fn_82644388(device, pos, count);
    for (i = 0; i < count; i++) {
        ring[pos] = data[i];
        pos = (pos + 1) & mask;
    }
    device->writePos = pos;
    if (device->listener != 0) {
        device->listener->vt->End(device->listener);
    }
    if (device->callback != 0) {
        device->callback(2, 0, 0, 0);
    }
}
