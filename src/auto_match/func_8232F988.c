long _InterlockedDecrement(long volatile *addend);

typedef struct Rep_8232F988 Rep_8232F988;

typedef struct RepVt_8232F988 {
    void (*destroy)(Rep_8232F988 *rep);
    void (*deleteThis)(Rep_8232F988 *rep);
} RepVt_8232F988;

struct Rep_8232F988 {
    RepVt_8232F988 *vt; /* 0x0 */
    long uses;          /* 0x4 */
    long weaks;         /* 0x8 */
};

typedef struct Fighter_8232F988 Fighter_8232F988;

typedef struct FighterVt_8232F988 {
    void *slot[6];
    int (*GetState)(Fighter_8232F988 *self); /* 0x18 */
} FighterVt_8232F988;

struct Fighter_8232F988 {
    FighterVt_8232F988 *vt; /* 0x0 */
    int pad4;
    unsigned int guard; /* 0x8 */
    int padC;
    int moveId; /* 0x10 */
};

typedef struct WeakPtr_8232F988 {
    Fighter_8232F988 *ptr; /* 0x0 */
    Rep_8232F988 *rep;     /* 0x4 */
} WeakPtr_8232F988;

typedef struct Owner_8232F988 {
    char pad[0x20];
    void *animator; /* 0x20 */
    char pad24[4];
    int paused; /* 0x28 */
} Owner_8232F988;

typedef struct Controller_8232F988 {
    char pad0[8];
    Owner_8232F988 *owner; /* 0x08 */
    void *source;          /* 0x0c */
    int pad10;
    int blockLow;     /* 0x14 */
    int blockHigh;    /* 0x18 */
    int animateMoves; /* 0x1c */
} Controller_8232F988;

extern WeakPtr_8232F988 *fn_822BFB28(WeakPtr_8232F988 *out, void *source);
extern unsigned char fn_8223AAC0(Rep_8232F988 *rep);
extern void fn_822315A0(Rep_8232F988 *rep);
extern const char *fn_8232EC10(int state, int moveId);
extern void fn_822C72E0(void *animator, const char *name);

static __forceinline void Decwref(Rep_8232F988 *rep)
{
    if (_InterlockedDecrement(&rep->weaks) == 0) {
        rep->vt->deleteThis(rep);
    }
}

static __forceinline void ReleaseWeak(Rep_8232F988 **rep)
{
    if (*rep != 0) {
        Decwref(*rep);
    }
}

void fn_8232F988(Controller_8232F988 *self)
{
    WeakPtr_8232F988 weak;
    WeakPtr_8232F988 *source = fn_822BFB28(&weak, self->source);
    Rep_8232F988 *rep = source->rep;
    Fighter_8232F988 *ptr = source->ptr;
    Fighter_8232F988 *fighter = 0;
    Rep_8232F988 *lockedRep = 0;
    const char *name;

    if (rep != 0 && fn_8223AAC0(rep) != 0) {
        lockedRep = rep;
        fighter = ptr;
    }
    ReleaseWeak(&weak.rep);
    if (fighter != 0 && self->owner->paused == 0) {
        if (fighter->vt->GetState(fighter) != 5 && self->animateMoves != 0) {
            name = fn_8232EC10(fighter->vt->GetState(fighter), fighter->moveId);
            fn_822C72E0(self->owner->animator, name);
        } else {
            switch (fighter->guard) {
            case 0:
                if (self->blockHigh == 0) {
                    fn_822C72E0(self->owner->animator, "blockhigh");
                }
                break;
            case 1:
                if (self->blockLow == 0) {
                    fn_822C72E0(self->owner->animator, "blocklow");
                }
                break;
            case 2:
                if (self->blockLow != 0 || self->blockHigh != 0) {
                    fn_822C72E0(self->owner->animator, "idle");
                }
                break;
            }
        }
    }
    if (lockedRep != 0) {
        fn_822315A0(lockedRep);
    }
}
