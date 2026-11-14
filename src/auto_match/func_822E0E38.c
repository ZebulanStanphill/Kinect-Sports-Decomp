typedef struct Game_822E0E38 {
    char pad0[0xd8];
    int fd8;
    char padDC[0x2184 - 0xdc];
    int f2184;
} Game_822E0E38;

typedef struct Self_822E0E38 {
    Game_822E0E38 *game;
    void *handle;
} Self_822E0E38;

extern float lbl_831CD598[51];
extern void fn_822315A0(void *handle);

float fn_822E0E38(Self_822E0E38 *self)
{
    float value;

    if (self->game->fd8 != 0) {
        value = lbl_831CD598[33];
    } else if (self->game->f2184 != 0) {
        value = lbl_831CD598[34];
    } else {
        value = lbl_831CD598[32];
    }
    if (self->handle != 0) {
        fn_822315A0(self->handle);
    }
    return value;
}
