long _InterlockedDecrement(long volatile *addend);

typedef struct String_8232F7B8 {
    union {
        char buf[16];
        char *ptr;
    } bx;

    unsigned int size;
    unsigned int res;
} String_8232F7B8;

typedef struct Event_8232F7B8 {
    int id;               /* 0x0 */
    String_8232F7B8 name; /* 0x4 */
} Event_8232F7B8;

typedef struct Message_8232F7B8 {
    Event_8232F7B8 *event; /* 0x0 */
} Message_8232F7B8;

typedef struct Rep_8232F7B8 Rep_8232F7B8;

typedef struct RepVt_8232F7B8 {
    void (*destroy)(Rep_8232F7B8 *rep);
    void (*deleteThis)(Rep_8232F7B8 *rep);
} RepVt_8232F7B8;

struct Rep_8232F7B8 {
    RepVt_8232F7B8 *vt; /* 0x0 */
    long uses;          /* 0x4 */
    long weaks;         /* 0x8 */
};

typedef struct Hit_8232F7B8 {
    int state;   /* 0x0 */
    int moveId;  /* 0x4 */
    int hitType; /* 0x8 */
} Hit_8232F7B8;

typedef struct Fighter_8232F7B8 {
    void *vt; /* 0x0 */
    int pad4;
    unsigned int guard; /* 0x8 */
    Hit_8232F7B8 hit;   /* 0xc */
} Fighter_8232F7B8;

typedef struct WeakPtr_8232F7B8 {
    Fighter_8232F7B8 *ptr; /* 0x0 */
    Rep_8232F7B8 *rep;     /* 0x4 */
} WeakPtr_8232F7B8;

typedef struct Controller_8232F7B8 {
    char pad0[0xc];
    void *source; /* 0x0c */
    int pad10;
    int blockLow;     /* 0x14 */
    int blockHigh;    /* 0x18 */
    int animateMoves; /* 0x1c */
} Controller_8232F7B8;

extern unsigned int fn_822C1928(const String_8232F7B8 *self, const char *ptr, unsigned int off,
                                unsigned int count);
extern WeakPtr_8232F7B8 *fn_822BFB28(WeakPtr_8232F7B8 *out, void *source);
extern unsigned char fn_8223AAC0(Rep_8232F7B8 *rep);
extern void fn_822315A0(Rep_8232F7B8 *rep);

static __forceinline void Decwref(Rep_8232F7B8 *rep)
{
    if (_InterlockedDecrement(&rep->weaks) == 0) {
        rep->vt->deleteThis(rep);
    }
}

static __forceinline void ReleaseWeak(Rep_8232F7B8 **rep)
{
    if (*rep != 0) {
        Decwref(*rep);
    }
}

static __forceinline int IsHit(const String_8232F7B8 *name)
{
    return fn_822C1928(name, "punch", 0, 5) != -1 || fn_822C1928(name, "knockback", 0, 9) != -1 ||
           fn_822C1928(name, "stuninto", 0, 8) != -1;
}

void fn_8232F7B8(Controller_8232F7B8 *self, Message_8232F7B8 *message)
{
    self->blockHigh = 0;
    self->blockLow = 0;
    if (fn_822C1928(&message->event->name, "blockhigh", 0, 9) != -1) {
        self->blockHigh = 1;
    }
    if (fn_822C1928(&message->event->name, "blocklow", 0, 8) != -1) {
        self->blockLow = 1;
    }
    self->animateMoves = !IsHit(&message->event->name);
    if (fn_822C1928(&message->event->name, "punch", 0, 5) != -1) {
        WeakPtr_8232F7B8 weak;
        WeakPtr_8232F7B8 *source = fn_822BFB28(&weak, self->source);
        Rep_8232F7B8 *rep = source->rep;
        Fighter_8232F7B8 *ptr = source->ptr;
        Fighter_8232F7B8 *fighter = 0;
        Rep_8232F7B8 *lockedRep = 0;

        if (rep != 0 && fn_8223AAC0(rep) != 0) {
            lockedRep = rep;
            fighter = ptr;
        }
        ReleaseWeak(&weak.rep);
        if (fighter != 0) {
            Hit_8232F7B8 hit = {5, 1, 4};
            fighter->hit = hit;
        }
        if (lockedRep != 0) {
            fn_822315A0(lockedRep);
        }
    }
}
