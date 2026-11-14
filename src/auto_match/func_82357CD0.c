typedef struct Flags_82357CD0 { char pad[8]; unsigned char bits; } Flags_82357CD0;
typedef struct Inner_82357CD0 { char pad[8]; Flags_82357CD0 *flags; } Inner_82357CD0;
typedef struct Game_82357CD0 { char pad[0xf0]; Inner_82357CD0 *inner; } Game_82357CD0;
typedef struct Owner_82357CD0 { char pad[0x3dc]; int dirty; } Owner_82357CD0;
typedef struct Self_82357CD0 { int f0; Owner_82357CD0 *owner; } Self_82357CD0;
extern Game_82357CD0 *lbl_83265988;

void fn_82357CD0(Self_82357CD0 *self)
{
    Owner_82357CD0 *owner = self->owner;
    Flags_82357CD0 *f = lbl_83265988->inner->flags;
    unsigned char *b = &f->bits;
    if (f->bits & 8) *b &= ~8; else *b |= 8;
    owner->dirty = 1;
}
