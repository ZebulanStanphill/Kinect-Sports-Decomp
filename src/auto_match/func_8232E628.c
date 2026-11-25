long _InterlockedDecrement(long volatile *addend);

typedef struct Rep_8232E628 Rep_8232E628;

typedef struct RepVt_8232E628 {
    void (*destroy)(Rep_8232E628 *rep);
    void (*deleteThis)(Rep_8232E628 *rep);
} RepVt_8232E628;

struct Rep_8232E628 {
    RepVt_8232E628 *vt; /* 0x0 */
    long uses;          /* 0x4 */
    long weaks;         /* 0x8 */
};

typedef struct Stats_8232E628 {
    char pad0[0x78c];
    int level; /* 0x78c */
} Stats_8232E628;

typedef struct Fighter_8232E628 {
    char pad0[4];
    Stats_8232E628 *stats; /* 0x04 */
    char pad8[0x24];
    float chances[8]; /* 0x2c */
} Fighter_8232E628;

typedef struct WeakPtr_8232E628 {
    Fighter_8232E628 *ptr; /* 0x0 */
    Rep_8232E628 *rep;     /* 0x4 */
} WeakPtr_8232E628;

typedef struct Owner_8232E628 Owner_8232E628;

typedef struct State_8232E628 {
    char pad0[0xc];
    Owner_8232E628 *owner; /* 0x0c */
    int state;             /* 0x10 */
    int idleTime;          /* 0x14 */
    char pad18[8];
    int endTime;       /* 0x20 */
    float retryChance; /* 0x24 */
    char pad28[4];
    int active;  /* 0x2c */
    int low;     /* 0x30 */
    float delay; /* 0x34 */
} State_8232E628;

extern unsigned int lbl_83265A28;

extern WeakPtr_8232E628 *fn_822BFB28(WeakPtr_8232E628 *out, Owner_8232E628 *source);
extern unsigned char fn_8223AAC0(Rep_8232E628 *rep);
extern void fn_822315A0(Rep_8232E628 *rep);
extern int fn_82520780(unsigned int *random, float chance);

static __forceinline void Decwref(Rep_8232E628 *rep)
{
    if (_InterlockedDecrement(&rep->weaks) == 0) {
        rep->vt->deleteThis(rep);
    }
}

static __forceinline void ReleaseWeak(Rep_8232E628 **rep)
{
    if (*rep != 0) {
        Decwref(*rep);
    }
}

static __forceinline float Random(unsigned int *seed)
{
    union {
        unsigned int i;
        float f;
    } value;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    value.i = *seed & 0x7fffff | 0x3f800000;
    return value.f - 1.0f;
}

static __forceinline float RandomRange(unsigned int *seed, float lo, float hi)
{
    return lo + (hi - lo) * Random(seed);
}

void fn_8232E628(State_8232E628 *self, int state)
{
    WeakPtr_8232E628 weak;
    WeakPtr_8232E628 *source;
    Rep_8232E628 *rep;
    Fighter_8232E628 *ptr;
    Fighter_8232E628 *fighter;
    Rep_8232E628 *lockedRep;
    int level;
    float chance;

    if (self->state == state) {
        return;
    }
    switch (state) {
    case 0:
        self->idleTime = 0;
        break;
    case 1:
        self->active = 0;
        source = fn_822BFB28(&weak, self->owner);
        rep = source->rep;
        ptr = source->ptr;
        fighter = 0;
        lockedRep = 0;
        if (rep != 0 && fn_8223AAC0(rep) != 0) {
            lockedRep = rep;
            fighter = ptr;
        }
        ReleaseWeak(&weak.rep);
        level = fighter->stats->level - 1;
        if (level < 0) {
            level = 0;
        }
        if (level >= 7) {
            level = 7;
        }
        chance = fighter->chances[level];
        if (fn_82520780(&lbl_83265A28, chance) != 0) {
            if (fn_82520780(&lbl_83265A28, self->retryChance) != 0) {
                fn_8232E628(self, 2);
                if (lockedRep != 0) {
                    fn_822315A0(lockedRep);
                }
                return;
            }
            self->active = 0;
        } else {
            self->active = 1;
            self->low = chance < 0.5f;
            self->delay = RandomRange(&lbl_83265A28, 0.5f, 2.0f);
        }
        if (lockedRep != 0) {
            fn_822315A0(lockedRep);
        }
        break;
    case 2:
        self->endTime = 0;
        break;
    }
    self->state = state;
}
