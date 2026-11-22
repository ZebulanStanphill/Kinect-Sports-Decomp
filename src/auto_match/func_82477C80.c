typedef struct Tuning_82477C80 {
    char pad000[0x124];
    float areaMinX;      /* 0x124 */
    float areaMaxX;      /* 0x128 */
    float areaMinY;      /* 0x12c */
    float areaMaxY;      /* 0x130 */
    float enableDelay;   /* 0x134 */
    float idleTimeout;   /* 0x138 */
    float promptDelay;   /* 0x13c */
    float promptTimeout; /* 0x140 */
    float cooldown;      /* 0x144 */
} Tuning_82477C80;

typedef struct Owner_82477C80 {
    char pad000[0x84c];
    char sounds[4]; /* 0x84c */
} Owner_82477C80;

typedef struct Hint_82477C80 {
    char pad000[0xd4];
    unsigned int idleSound;   /* 0xd4 */
    unsigned int promptSound; /* 0xd8 */
    char pad0dc[0xec - 0xdc];
    unsigned int flags;     /* 0xec */
    unsigned int showFlags; /* 0xf0 */
    char pad0f4[0x148 - 0xf4];
    float promptTime;     /* 0x148 */
    float idleTime;       /* 0x14c */
    unsigned char active; /* 0x150 */
    char pad151[0x158 - 0x151];
    float cooldown;        /* 0x158 */
    Owner_82477C80 *owner; /* 0x15c */
    int pad160;
    void *voice; /* 0x164 */
} Hint_82477C80;

extern Tuning_82477C80 lbl_831D3AB0;

extern unsigned char fn_82477F00(float minX, float maxX, float minY, float maxY);
extern int fn_825529B0(void **voice);
extern int fn_82552720(void *sounds, void **voice, unsigned int *sound, void *d, int e, void *f, void *g);
extern void fn_82552B50(void **voice, unsigned char destroy);

static __forceinline int IsValid(unsigned int *sound)
{
    if (sound)
        return *sound != 0;
    return 0;
}

static __forceinline float Clamp(float value, float low, float high)
{
    value = value - low >= 0.0f ? value : low;
    return value - high >= 0.0f ? high : value;
}

void fn_82477C80(Hint_82477C80 *self, float dt)
{
    fn_82477F00(lbl_831D3AB0.areaMinX, lbl_831D3AB0.areaMaxX, lbl_831D3AB0.areaMinY, lbl_831D3AB0.areaMaxY);
    if (!self->active) {
        float cooldown;

        self->cooldown -= dt;
        cooldown = Clamp(self->cooldown, 0.0f, lbl_831D3AB0.cooldown);
        self->promptTime = 0.0f;
        self->cooldown = cooldown;
        if (lbl_831D3AB0.enableDelay < 0.0f) {
            self->promptTime = 0.0f;
            self->idleTime = 0.0f;
            self->active = 1;
            self->flags |= 0x10;
        }
    } else {
        if (self->idleTime > lbl_831D3AB0.promptDelay) {
            if (!fn_825529B0(&self->voice) && !(self->promptTime > 0.0f) && IsValid(&self->promptSound))
                fn_82552720(self->owner->sounds, &self->voice, &self->promptSound, 0, 4, 0, 0);
            self->promptTime += dt;
            if (self->promptTime > lbl_831D3AB0.promptTimeout) {
                if (fn_825529B0(&self->voice))
                    fn_82552B50(&self->voice, 1);
                self->promptTime = 0.0f;
                self->cooldown = lbl_831D3AB0.cooldown;
                self->active = 0;
            }
        } else {
            if (!fn_825529B0(&self->voice) && !(self->idleTime > 0.0f) && IsValid(&self->idleSound))
                fn_82552720(self->owner->sounds, &self->voice, &self->idleSound, 0, 4, 0, 0);
            self->idleTime += dt;
            self->promptTime += dt;
            if (self->idleTime > lbl_831D3AB0.promptDelay) {
                if (fn_825529B0(&self->voice))
                    fn_82552B50(&self->voice, 1);
                self->promptTime = 0.0f;
            } else if (self->promptTime > lbl_831D3AB0.idleTimeout) {
                if (fn_825529B0(&self->voice))
                    fn_82552B50(&self->voice, 1);
                self->promptTime = 0.0f;
                self->cooldown = lbl_831D3AB0.cooldown;
                self->active = 0;
            }
        }
    }
    if (self->active)
        self->showFlags |= 0x10;
}
