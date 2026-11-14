typedef struct Flags_82471A68 { char pad[8]; unsigned char bits; } Flags_82471A68;
typedef struct Inner_82471A68 { char pad[8]; Flags_82471A68 *flags; } Inner_82471A68;
typedef struct Game_82471A68 { char pad[0xf0]; Inner_82471A68 *inner; } Game_82471A68;
typedef struct Owner_82471A68 { char pad[0x67c]; int dirty; } Owner_82471A68;
typedef struct Self_82471A68 { int f0; Owner_82471A68 *owner; } Self_82471A68;
extern Game_82471A68 *lbl_83265988;

void fn_82471A68(Self_82471A68 *self)
{
    Owner_82471A68 *owner = self->owner;
    Flags_82471A68 *f = lbl_83265988->inner->flags;
    unsigned char *b = &f->bits;
    if (f->bits & 8) *b &= ~8; else *b |= 8;
    owner->dirty = 1;
}
