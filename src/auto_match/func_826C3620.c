typedef struct Pair_826C3620 {
    void *a;
    void *b;
    unsigned char flags;
} Pair_826C3620;

typedef struct Event_826C3620 {
    void *vt;           /* 0x00 */
    int type;           /* 0x04 */
    int target;         /* 0x08 */
    Pair_826C3620 pair; /* 0x0c */
    int x;              /* 0x18 */
    int y;              /* 0x1c */
    int z;              /* 0x20 */
} Event_826C3620;

typedef struct Object_826C3620 Object_826C3620;

typedef struct ObjectVtable_826C3620 {
    void *slots[15];
    unsigned char (*isActive)(Object_826C3620 *self); /* 0x3c */
} ObjectVtable_826C3620;

struct Object_826C3620 {
    ObjectVtable_826C3620 *vt;
    char pad4[0x24];
    int target; /* 0x28 */
};

typedef struct Source_826C3620 {
    int pad0;
    int type;                /* 0x04 */
    Object_826C3620 *object; /* 0x08 */
    char padc[0xc];
    int x; /* 0x18 */
    int y; /* 0x1c */
    int z; /* 0x20 */
} Source_826C3620;

typedef struct Listener_826C3620 {
    char pad0[0x30];
    void (*handler)(void *event); /* 0x30 */
} Listener_826C3620;

extern char lbl_8200579C[];
extern void fn_82682A48(void *object);
extern void fn_826828D8(Event_826C3620 *event);

void fn_826C3620(Listener_826C3620 *self, Source_826C3620 *source)
{
    Object_826C3620 *object;
    Event_826C3620 event;

    if (self->handler == 0) {
        return;
    }
    object = source->object;
    if (object != 0 && object->vt->isActive(object) != 0) {
        int target = object->target;
        int z = source->z;
        int y = source->y;
        int x = source->x;
        int type = source->type;
        void *owner = object != 0 ? (char *)object - 0x10 : 0;

        event.pair.flags = 0;
        event.pair.a = 0;
        event.pair.b = 0;
        event.target = target;
        event.vt = lbl_8200579C;
        event.type = type;
        event.x = x;
        event.y = y;
        event.z = z;
        self->handler(&event);
        fn_82682A48(owner);
        fn_826828D8(&event);
        return;
    }
    self->handler(source);
}
