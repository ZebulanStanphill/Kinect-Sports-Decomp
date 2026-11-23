typedef struct Value_82436FE8 {
    int w0;        /* 0x00 */
    int type;      /* 0x04 */
    double number; /* 0x08 */
} Value_82436FE8;

typedef struct Movie_82436FE8 {
    void *root; /* 0x00 */
} Movie_82436FE8;

typedef struct Ui_82436FE8 {
    char pad0[0xc];
    Movie_82436FE8 *movie; /* 0x0C */
} Ui_82436FE8;

typedef struct Game_82436FE8 {
    char pad0[0xd4];
    Ui_82436FE8 *ui; /* 0xD4 */
} Game_82436FE8;

typedef struct State_82436FE8 {
    Game_82436FE8 *game; /* 0x000 */
    char pad4[0x218];
    float limit;      /* 0x21C */
    float timer;      /* 0x220 */
    int showing[2];   /* 0x224 */
    int hasRecord[2]; /* 0x22C */
} State_82436FE8;

typedef struct Screen_82436FE8 {
    char pad0[0x40];
    State_82436FE8 *state; /* 0x40 */
} Screen_82436FE8;

extern void fn_82273CD8(Value_82436FE8 *value, int type);
extern void fn_82273C88(Value_82436FE8 *value);
extern void fn_82672C20(void *root, const char *path, Value_82436FE8 *args, int count);

void fn_82436FE8(Screen_82436FE8 *self, float dt)
{
    State_82436FE8 *state;
    Movie_82436FE8 *movie;
    int i;
    float timer;

    state = self->state;
    timer = state->timer + dt;
    state->timer = timer;
    if (timer > self->state->limit) {
        self->state->timer = 0.0f;
        for (i = 0; i < 2; i++) {
            state = self->state;
            if (state->showing[i] != 0 && state->hasRecord[i] != 0) {
                Value_82436FE8 value;
                movie = state->game->ui->movie;
                value.w0 = 0;
                value.type = 0;
                fn_82273CD8(&value, 3);
                value.number = i + 1;
                fn_82672C20(movie->root, "_root.mainCtrl.showPersonalBestCaption", &value, 1);
                fn_82273C88(&value);
                state = self->state;
                state->showing[i] = !state->showing[i];
            } else {
                Value_82436FE8 value;
                movie = state->game->ui->movie;
                value.w0 = 0;
                value.type = 0;
                fn_82273CD8(&value, 3);
                value.number = i + 1;
                fn_82672C20(movie->root, "_root.mainCtrl.showWorldRecordCaption", &value, 1);
                fn_82273C88(&value);
                state = self->state;
                state->showing[i] = !state->showing[i];
            }
        }
    }
}
