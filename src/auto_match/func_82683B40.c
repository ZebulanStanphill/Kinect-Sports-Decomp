typedef struct Pair_82683B40 {
    void *a;
    void *b;
    unsigned char flags;
} Pair_82683B40;

typedef struct Event_82683B40 {
    void *vt;           /* 0x00 */
    int type;           /* 0x04 */
    int target;         /* 0x08 */
    Pair_82683B40 pair; /* 0x0c */
    int x;              /* 0x18 */
    int y;              /* 0x1c */
    int z;              /* 0x20 */
} Event_82683B40;

typedef struct Object_82683B40 Object_82683B40;

typedef struct ObjectVtable_82683B40 {
    void *slots[15];
    unsigned char (*isActive)(Object_82683B40 *self); /* 0x3c */
} ObjectVtable_82683B40;

struct Object_82683B40 {
    ObjectVtable_82683B40 *vt;
    char pad4[0x24];
    int target; /* 0x28 */
};

typedef struct Source_82683B40 {
    int pad0;
    int type;                /* 0x04 */
    Object_82683B40 *object; /* 0x08 */
    char padc[0xc];
    int x; /* 0x18 */
    int y; /* 0x1c */
    int z; /* 0x20 */
} Source_82683B40;

typedef struct Listener_82683B40 {
    char pad0[0x30];
    int active; /* 0x30 */
} Listener_82683B40;

extern char lbl_8200579C[];
extern void fn_82683990(Listener_82683B40 *self, void *event);
extern void fn_82682A48(void *object);
extern void fn_826828D8(Event_82683B40 *event);

void fn_82683B40(Listener_82683B40 *self, Source_82683B40 *source)
{
    Object_82683B40 *object;
    Event_82683B40 event;

    if (self->active == 0) {
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

        event.target = target;
        event.vt = lbl_8200579C;
        event.pair.flags = 0;
        event.pair.a = 0;
        event.type = type;
        event.pair.b = 0;
        event.x = x;
        event.y = y;
        event.z = z;
        fn_82683990(self, &event);
        fn_82682A48(owner);
        fn_826828D8(&event);
        return;
    }
    fn_82683990(self, source);
}
