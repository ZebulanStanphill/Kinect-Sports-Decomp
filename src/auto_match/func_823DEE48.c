typedef struct Hud_823DEE48 Hud_823DEE48;

typedef struct Screen_823DEE48 {
    unsigned char pad[0xc];
    Hud_823DEE48 *hud;
} Screen_823DEE48;

typedef struct Scene_823DEE48 {
    unsigned char pad[0xd4];
    Screen_823DEE48 *screen;
} Scene_823DEE48;

typedef struct Game_823DEE48 {
    unsigned char pad[0x4b0];
    Scene_823DEE48 **scene;
} Game_823DEE48;

typedef struct Owner_823DEE48 {
    unsigned char pad[8];
    Game_823DEE48 *game;
} Owner_823DEE48;

extern void fn_8229F5A8(Hud_823DEE48 *hud);

void fn_823DEE48(Owner_823DEE48 *self)
{
    fn_8229F5A8((*self->game->scene)->screen->hud);
}
