typedef struct Player_82380C18 {
    int pad0;
    void *voice; /* 0x04 */
} Player_82380C18;

typedef struct Self_82380C18 {
    char pad0[0x1ec];
    Player_82380C18 *player; /* 0x1ec */
    char pad1f0[0xc];
    float cooldown; /* 0x1fc */
    char pad200[0x8];
    float peak; /* 0x208 */
} Self_82380C18;

extern void fn_8254EEB8(Player_82380C18 *player, int sound, float volume, float pitch, float pan);

void fn_82380C18(Self_82380C18 *self, float strength, float volume)
{
    float pitch;

    if (self->cooldown > 0.0f) {
        return;
    }
    self->cooldown = volume;
    pitch = volume * 0.6f;
    self->peak = strength - self->peak >= 0.0f ? strength : self->peak;
    if (self->player->voice != 0) {
        fn_8254EEB8(self->player, (int)self->peak, volume, pitch - 0.3f >= 0.0f ? pitch : 0.3f, 0.0f);
    }
}
