extern const float lbl_821CA45C[2];

typedef struct Game_82360850 {
    char pad0[0x1488];
    int timer;
    char pad1[0x2b20 - 0x148c];
    void *player;
    char pad2[0x2c9c - 0x2b24];
    int state;
    float fade;
} Game_82360850;

extern void fn_82536590(int *timer, int value);

void fn_82360850(Game_82360850 *self, void *player, int pressed, int keep)
{
    int state;
    if (player != self->player) {
        return;
    }
    state = self->state;
    if (pressed != 0) {
        if (state != 1 && state != 0) {
            return;
        }
        self->state = 2;
    } else {
        if (state == 3) {
            if (keep != 0) {
                fn_82536590(&self->timer, 0);
            } else {
                self->state = 0;
                self->fade = lbl_821CA45C[1];
                return;
            }
        }
        self->state = 1;
    }
}
