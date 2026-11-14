typedef struct Game_82266CC0 {
    char pad0[0x62c];
    unsigned int mode;              /* 0x62c */
} Game_82266CC0;

typedef struct Filter_82266CC0 {
    unsigned int modeMask;
    int pad4;
    Game_82266CC0 *game;            /* 0x08 */
} Filter_82266CC0;

extern void fn_82266C00(Game_82266CC0 *game);

void fn_82266CC0(Filter_82266CC0 *self)
{
    Game_82266CC0 *game = self->game;

    switch (game->mode) {
    case 0:
        if (self->modeMask & 1)
            fn_82266C00(game);
        break;
    case 1:
        if (self->modeMask & 2)
            fn_82266C00(game);
        break;
    case 2:
        if (self->modeMask & 4)
            fn_82266C00(game);
        break;
    case 3:
        if (self->modeMask & 8)
            fn_82266C00(game);
        break;
    }
}
