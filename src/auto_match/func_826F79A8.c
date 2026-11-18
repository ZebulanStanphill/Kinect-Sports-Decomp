typedef struct Slot_826F79A8 {
    int value0;              /* 0x00 */
    int value1;              /* 0x04 */
    float weight0;           /* 0x08 */
    float weight1;           /* 0x0c */
    int value2;              /* 0x10 */
    unsigned char state : 5; /* 0x14 */
    unsigned char mode : 3;
    unsigned char pad15[0xf];
} Slot_826F79A8;

typedef struct Listener_826F79A8 Listener_826F79A8;

typedef struct ListenerVtbl_826F79A8 {
    void *slots00[0x11];
    void (*Notify)(Listener_826F79A8 *self, void *source); /* 0x44 */
} ListenerVtbl_826F79A8;

struct Listener_826F79A8 {
    ListenerVtbl_826F79A8 *vt;
};

typedef struct Registry_826F79A8 Registry_826F79A8;

typedef struct RegistryVtbl_826F79A8 {
    void *slots00[3];
    Listener_826F79A8 *(*Find)(Registry_826F79A8 *self, int id); /* 0x0c */
} RegistryVtbl_826F79A8;

struct Registry_826F79A8 {
    RegistryVtbl_826F79A8 *vt;
};

typedef struct Player_826F79A8 {
    unsigned char pad000[8];
    Registry_826F79A8 registry; /* 0x008 */
    unsigned char pad00c[0x944];
    Slot_826F79A8 slots[4]; /* 0x950 */
    void *tracker;          /* 0x9e0 */
    unsigned char pad9e4[0x11c];
    unsigned int flags; /* 0xb00 */
} Player_826F79A8;

extern void fn_8270EB60(void *tracker);
extern void fn_8267C4F0(Listener_826F79A8 *listener);

void fn_826F79A8(Player_826F79A8 *self, unsigned char enable)
{
    Slot_826F79A8 *slot;
    Listener_826F79A8 *listener;
    int i;

    if (!enable) {
        fn_8270EB60(self->tracker);
        for (i = 0; i < 4; i++) {
            slot = &self->slots[i];
            slot->weight1 = 0.0f;
            slot->weight0 = 0.0f;
            slot->value2 = 0;
            slot->value1 = 0;
            slot->value0 = 0;
            slot->state = 0;
        }
    }
    if (enable) {
        self->flags |= 0x40000;
    } else {
        self->flags &= ~0x40000;
    }
    listener = self->registry.vt->Find(&self->registry, 0x1b);
    if (listener != 0) {
        listener->vt->Notify(listener, self);
        fn_8267C4F0(listener);
    }
}
