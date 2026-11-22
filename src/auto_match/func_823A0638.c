typedef struct Player_823A0638 {
    int pad0;
    void *voice; /* 0x04 */
} Player_823A0638;

typedef struct Self_823A0638 {
    char pad0[0x40];
    Player_823A0638 *player; /* 0x40 */
    char pad44[0xe8];
    float peak; /* 0x12c */
    char pad130[0x4];
    float cooldown; /* 0x134 */
} Self_823A0638;

extern void fn_8254EEB8(Player_823A0638 *player, int sound, float volume, float pitch, float pan);

void fn_823A0638(Self_823A0638 *self, float strength, float volume)
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
