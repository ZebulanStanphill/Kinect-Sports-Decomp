typedef struct Session_82549DE8 {
    char pad0[0x93c];
    int online; /* 0x93c */
} Session_82549DE8;

typedef struct SessionRef_82549DE8 {
    char pad0[0x4];
    Session_82549DE8 *session; /* 0x04 */
} SessionRef_82549DE8;

typedef struct Globals_82549DE8 {
    char pad0[0xec];
    SessionRef_82549DE8 *session; /* 0xec */
} Globals_82549DE8;

typedef struct Item_82549DE8 {
    char pad0[0xe4];
    int owner; /* 0xe4 */
} Item_82549DE8;

typedef struct Shake_82549DE8 {
    char pad0[0x44];
    float value;     /* 0x44 */
    float amplitude; /* 0x48 */
    float phase;     /* 0x4c */
    int active;      /* 0x50 */
    float period;    /* 0x54 */
    int count;       /* 0x58 */
} Shake_82549DE8;

typedef struct Sound_82549DE8 {
    char pad0[0xc];
    void *voice; /* 0x0c */
} Sound_82549DE8;

typedef struct Actor_82549DE8 {
    char pad0[0x20];
    Shake_82549DE8 shake; /* 0x020 */
    char pad7c[0x98 - 0x7c];
    char motion[0x130 - 0x98]; /* 0x098 */
    Item_82549DE8 **items;     /* 0x130 */
    char pad134[0x138 - 0x134];
    unsigned int itemCount; /* 0x138 */
    char pad13c[0x1c4 - 0x13c];
    Sound_82549DE8 *sound; /* 0x1c4 */
} Actor_82549DE8;

extern Globals_82549DE8 lbl_832960A0;

extern float fn_82809868(float t);
extern void fn_8284EF60(void *voice, float dt);
extern void fn_82555C00(void *motion, int owner, int b, int c, float dt);

void fn_82549DE8(Actor_82549DE8 *self, int owner, int b, int c, float dt)
{
    Shake_82549DE8 *shake;
    int count;
    int active;
    unsigned int n;
    float amplitude;
    float phase;
    Session_82549DE8 *session;
    Item_82549DE8 **items;
    unsigned int i;

    shake = &self->shake;
    count = shake->count;
    amplitude = shake->amplitude;
    active = shake->active;
    if (count == 0) {
        shake->active = 0;
        shake->amplitude = 0.0f;
        shake->value = 0.0f;
    } else {
        if (active != 0) {
            phase = (1.0f / shake->period) * dt + shake->phase;
            if (phase >= 1.0f) {
                phase = 0.0f;
            }
            shake->phase = phase;
            shake->value = ((1.0f - fn_82809868(phase * 6.2831855f)) * 0.475f + 0.05f) * amplitude;
        } else {
            shake->value = amplitude;
        }
        if (count > 0) {
            shake->count--;
        }
    }
    if (self->sound->voice != 0) {
        fn_8284EF60(self->sound->voice, dt);
    }
    if (lbl_832960A0.session != 0) {
        session = lbl_832960A0.session->session;
    } else {
        session = 0;
    }
    if (session != 0 && session->online != 0) {
        items = self->items;
        n = self->itemCount;
        if (items != 0) {
            for (i = 0; i < n; i++) {
                if (items[i] != 0) {
                    items[i]->owner = owner;
                }
            }
        }
    }
    fn_82555C00(self->motion, owner, b, c, dt);
}
