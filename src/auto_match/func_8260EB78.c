typedef struct Msg_8260EB78 {
    int type;    /* 0x0 */
    int size;    /* 0x4 */
    int data[1]; /* 0x8 */
} Msg_8260EB78;

typedef struct Entry_8260EB78 {
    char pad0[0x10];
    void *object; /* 0x10 */
    char pad14[0x30 - 0x14];
} Entry_8260EB78;

typedef struct Target_8260EB78 {
    char pad0[0xb8];
    void *listener; /* 0xb8 */
} Target_8260EB78;

typedef struct Self_8260EB78 {
    char pad0[0x60];
    Target_8260EB78 **target; /* 0x60 */
    char pad64[0xd8 - 0x64];
    Entry_8260EB78 *entries; /* 0xd8 */
} Self_8260EB78;

typedef struct Pair_8260EB78 {
    char pad0[0x10];
    unsigned char first;  /* 0x10 */
    unsigned char second; /* 0x11 */
} Pair_8260EB78;

extern int fn_82569980(Self_8260EB78 *self, unsigned char id);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8262A108(void *link, Target_8260EB78 *target, void *first, void *second);
extern void XMemSet(void *dst, int value, unsigned int size);
extern void fn_8257E0B8(void *listener, Msg_8260EB78 *msg);

static __forceinline void *Lookup(Self_8260EB78 *self, unsigned char id)
{
    int index = fn_82569980(self, id);
    if (index != -1) {
        return self->entries[index].object;
    }
    return 0;
}

void fn_8260EB78(Self_8260EB78 *self, int unused1, Pair_8260EB78 *pair, int unused3, int kind)
{
    void *first;
    void *second;
    Target_8260EB78 *target;
    void *link;
    Msg_8260EB78 msg;

    if (kind == 0) {
        first = Lookup(self, pair->first);
        second = Lookup(self, pair->second);
        if (first != 0 && second != 0) {
            target = *self->target;
            link = fn_8265C9E0(0x1ba0);
            if (link != 0) {
                fn_8262A108(link, target, first, second);
            }
        }
    } else if (kind == 1 || kind == 3) {
        first = Lookup(self, pair->first);
        if (first != 0) {
            XMemSet(msg.data, 0, 4);
            msg.data[0] = (int)first;
            msg.type = 0x5d;
            msg.size = 0xc;
            fn_8257E0B8((*self->target)->listener, &msg);
        }
    }
}
