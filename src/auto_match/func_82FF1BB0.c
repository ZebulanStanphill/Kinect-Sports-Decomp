typedef struct Player_82FF1BB0 Player_82FF1BB0;

typedef struct Voice_82FF1BB0 {
    char pad0[0x38];
    Player_82FF1BB0 *player; /* 0x38 */
    char pad3c[0x150 - 0x3c];
    float pitch;           /* 0x150 */
    float volume;          /* 0x154 */
    unsigned char enabled; /* 0x158 */
    char pad159;
    unsigned short percent; /* 0x15a */
} Voice_82FF1BB0;

extern float fn_82FF1AD8(Voice_82FF1BB0 *self, float value);
extern void fn_83027260(Player_82FF1BB0 *player, int value);
extern void fn_830272C8(Player_82FF1BB0 *player);
extern void fn_83027308(Player_82FF1BB0 *player);
extern void fn_83027378(Player_82FF1BB0 *player, int on);
extern void fn_830273A8(Player_82FF1BB0 *player, int on);
extern void fn_83027490(Player_82FF1BB0 *player, int value);
extern void fn_83027398(Player_82FF1BB0 *player, int value);

void fn_82FF1BB0(Voice_82FF1BB0 *self, float value, int param)
{
    Player_82FF1BB0 *player;

    switch (param) {
    case 0xb:
        self->percent = (unsigned short)(value * 100.0f);
        return;
    case 0x14:
        self->pitch = fn_82FF1AD8(self, value);
        return;
    case 0x15:
        self->volume = fn_82FF1AD8(self, value);
        return;
    case 0x21:
        self->enabled = value > 0.0f;
        return;
    }
    player = self->player;
    if (player == 0)
        return;
    switch (param) {
    case 0x20:
        fn_83027260(player, (int)value);
        break;
    case 0x22:
        fn_830272C8(player);
        break;
    case 0x23:
        fn_83027308(player);
        break;
    case 0x24:
        fn_83027378(player, value != 0.0f);
        break;
    case 0x25:
        fn_830273A8(player, value != 0.0f);
        break;
    case 0x26:
        fn_83027490(player, (int)value);
        break;
    case 0x27:
        fn_83027398(player, (int)value);
        break;
    }
}
