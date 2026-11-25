typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Effect_8246B778 {
    Effect_8246B778(int device, void *settings, int which, int *handle, int *arg, float scale,
                    unsigned int range, __vector4 offset, unsigned int level);

    char pad0[0xc];
    int key;          /* 0x0c */
    __vector4 target; /* 0x10 */
    float fade;       /* 0x20 */
    char pad24[0xc];
    int state; /* 0x30 */
    char pad34[0x58];
    float volume; /* 0x8c */
    float pitch;  /* 0x90 */
    char pad94[0x3c];
};

struct Slot_8246B778 {
    char pad0[0x10];
    __vector4 target;        /* 0x10 */
    __vector4 offset;        /* 0x20 */
    float scale;             /* 0x30 */
    Effect_8246B778 *first;  /* 0x34 */
    Effect_8246B778 *second; /* 0x38 */
    int pad3c;
};

struct Owner_8246B778 {
    Slot_8246B778 slots[2]; /* 0x00 */
    int device;             /* 0x80 */
    int pad84;
    char settings[0x8]; /* 0x88 */
    int listener0;      /* 0x90 */
    int listener1;      /* 0x94 */
    char pad98[0x40];
    float range;     /* 0xd8 */
    float levels[2]; /* 0xdc */
};

extern "C" {
extern float lbl_831C6D60[];

int fn_825200A8(int *a, int *b);
void fn_8246B5D8(Effect_8246B778 *effect);
void fn_8246B2A8(Effect_8246B778 *effect, int *listener);
}

static __forceinline int Valid_8246B778(int *handle)
{
    if (handle == 0)
        return 0;
    return *handle != 0;
}

extern "C" void fn_8246B778(Owner_8246B778 *self, int which, int *handle, int *arg)
{
    Slot_8246B778 *slot;
    Effect_8246B778 *effect;
    Effect_8246B778 *previous;
    float zero;
    float level;
    int *listener;

    if (Valid_8246B778(handle)) {
        slot = &self->slots[which];
        if (slot->first == 0 || fn_825200A8(handle, &slot->first->key) == 0) {
            if (slot->second != 0) {
                fn_8246B5D8(slot->second);
            }
            previous = slot->first;
            zero = 0.0f;
            slot->second = previous;
            if (previous != 0) {
                previous->target = slot->target;
                previous->state = 0;
                previous->fade = zero;
            }
            if (which == 0) {
                level = self->levels[0];
            } else {
                level = self->levels[1];
            }
            effect = new Effect_8246B778(self->device, self->settings, which, handle, arg, slot->scale,
                                         (unsigned int)self->range, slot->offset, (unsigned int)level);
            slot->first = effect;
            listener = (unsigned int)which == 0 ? &self->listener1 : &self->listener0;
            effect->pitch = zero;
            effect->volume = lbl_831C6D60[4];
            fn_8246B2A8(effect, listener);
        }
    }
}
