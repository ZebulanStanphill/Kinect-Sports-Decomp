typedef struct Settings_824077C8 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Settings_824077C8;

typedef struct Ref_824077C8 Ref_824077C8;

typedef struct Pair_824077C8 {
    void *p;           /* 0x0 */
    Ref_824077C8 *ref; /* 0x4 */
} Pair_824077C8;

typedef struct Owner_824077C8 {
    char pad0[0x34];
    void *sound; /* 0x34 */
} Owner_824077C8;

typedef struct Player_824077C8 {
    char pad0[0x24];
    Owner_824077C8 *owner; /* 0x24 */
    int pad28;
    int slot; /* 0x2c */
} Player_824077C8;

typedef struct Event_824077C8 {
    char pad0[0x38];
    Player_824077C8 *source; /* 0x38 */
    char pad3c[0x4];
    int type; /* 0x40 */
    char pad44[0xf0 - 0x44];
    float volume; /* 0xf0 */
} Event_824077C8;

extern Settings_824077C8 *lbl_832975B0;
extern Settings_824077C8 *fn_82250A18(void);
extern void fn_82407968(int kind, Player_824077C8 *source, Player_824077C8 *first, Player_824077C8 *second,
                        int extra);
extern unsigned char fn_828EA5F8(void *sound);
extern void fn_82458910(Pair_824077C8 *out, Pair_824077C8 *array, int index);
extern void fn_824589D0(void *sound, void *p, int kind, float volume, int isSource, unsigned char enabled,
                        int extra);
extern void fn_822315A0(Ref_824077C8 *ref);

static __forceinline Settings_824077C8 *GetSettings(void)
{
    if (lbl_832975B0 == 0) {
        return fn_82250A18();
    }
    return lbl_832975B0;
}

void fn_824077C8(Event_824077C8 *self, Pair_824077C8 *sounds, Player_824077C8 *first, Player_824077C8 *second,
                 int extra)
{
    int kind;
    float volume;
    Player_824077C8 *source;
    unsigned char enabled;
    void *sound;
    Pair_824077C8 pair;

    switch (self->type) {
    case 1:
        kind = 3;
        break;
    case 2:
        kind = 2;
        break;
    case 3:
        kind = 1;
        break;
    case 5:
        kind = 0;
        break;
    default:
        kind = ((self->type == 6) ^ 1) + 4;
        break;
    }
    volume = self->volume;
    source = self->source;
    enabled = GetSettings()->enabled;
    fn_82407968(kind, source, first, second, extra);
    if (first->owner != 0) {
        sound = first->owner->sound;
        if (sound != 0 && fn_828EA5F8(sound)) {
            fn_82458910(&pair, sounds, first->slot);
            fn_824589D0(sound, pair.p, kind, volume, first == source, enabled, extra);
            if (pair.ref != 0) {
                fn_822315A0(pair.ref);
            }
        }
    }
    if (second->owner != 0) {
        sound = second->owner->sound;
        if (sound != 0 && fn_828EA5F8(sound)) {
            fn_82458910(&pair, sounds, second->slot);
            fn_824589D0(sound, pair.p, kind, volume, second == source, enabled, extra);
            if (pair.ref != 0) {
                fn_822315A0(pair.ref);
            }
        }
    }
}
