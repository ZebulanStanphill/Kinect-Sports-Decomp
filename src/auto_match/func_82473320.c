typedef struct Sound_82473320 {
    char pad0[0x50];
    float length; /* 0x50 */
    char pad54[4];
    float position; /* 0x58 */
    int finished;   /* 0x5c */
} Sound_82473320;

typedef struct Slot_82473320 {
    Sound_82473320 *sound; /* 0x00 */
    float remaining;       /* 0x04 */
} Slot_82473320;

typedef struct Player_82473320 {
    char pad0[0x1c];
    Slot_82473320 slots[2]; /* 0x1c */
    char name[4];           /* 0x2c */
    int pending;            /* 0x30 */
    int busy;               /* 0x34 */
} Player_82473320;

extern int lbl_832766DC;
extern const float lbl_821CA45C[2];
extern unsigned int fn_82F4EC30(int index);
extern Sound_82473320 *fn_82F53380(unsigned int bank, void *name, unsigned char loop, int flags);

int fn_82473320(Player_82473320 *self)
{
    int result;
    unsigned int i;
    Slot_82473320 *slot;
    float one;

    if (self->busy != 0) {
        if (lbl_832766DC != 0) {
            self->pending = 1;
        }
        return 1;
    }
    result = 0;
    i = 0;
    slot = self->slots;
    one = lbl_821CA45C[1];
    do {
        Sound_82473320 *sound;
        unsigned int bank;

        if (result != 0) {
            return result;
        }
        if (slot->sound == 0) {
            bank = fn_82F4EC30(i);
            if (bank != 0) {
                Sound_82473320 *created = fn_82F53380(bank, self->name, 0, 1);
                Sound_82473320 *value = 0;
                if (created != 0) {
                    value = created;
                }
                slot->sound = value;
            }
        }
        sound = slot->sound;
        slot->remaining = one - sound->position / sound->length;
        if (sound->finished != 0) {
            slot->remaining = one;
        }
        i++;
        result = sound->finished;
        slot++;
    } while (i < 2);
    return result;
}
