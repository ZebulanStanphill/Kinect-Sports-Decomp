typedef struct Owner_826C7670 {
    unsigned char pad0[0xafc];
    struct Character_826C7670 *pending; /* 0xafc */
} Owner_826C7670;

typedef struct Character_826C7670 {
    void *vtbl;   /* 0x00 */
    int refCount; /* 0x04 */
    unsigned char pad8[0x5e];
    unsigned char flags; /* 0x66 */
    unsigned char pad67[0x11];
    struct Character_826C7670 *nextPending; /* 0x78 */
    unsigned char pad7c[0x10];
    unsigned int pad8c0 : 19; /* 0x8c */
    unsigned int visible : 1; /* 0x8c, 0x1000 */
    unsigned int pad8c1 : 12;
    unsigned char pad90[0x10];
    Owner_826C7670 *owner; /* 0xa0 */
    unsigned char padA4[0x128];
    unsigned char state; /* 0x1cc */
} Character_826C7670;

typedef struct Event_826C7670 {
    int type; /* 0x00 */
} Event_826C7670;

extern void fn_8267C498(Character_826C7670 *self);
extern int fn_8269FE48(Character_826C7670 *self, Event_826C7670 *event);

static __forceinline unsigned char IsType(Event_826C7670 *event, int type)
{
    return event->type == type;
}

int fn_826C7670(Character_826C7670 *self, Event_826C7670 *event)
{
    int result;

    if (self->flags & 0x10) {
        return 0;
    }
    self->refCount++;
    if (IsType(event, 1) & 1) {
        self->flags &= ~0x20;
        if (!(unsigned char)self->visible && (self->state & 0x80) == 0) {
            result = 0;
            fn_8267C498(self);
            return result;
        }
    }
    result = fn_8269FE48(self, event);
    if (IsType(event, 4) & 1) {
        self->flags |= 0x10;
        self->nextPending = self->owner->pending;
        self->owner->pending = self;
        self->refCount++;
    }
    fn_8267C498(self);
    return result;
}
