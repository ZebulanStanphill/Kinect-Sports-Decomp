typedef struct State_82E8D780 {
    char pad0[4];
    int type;
    char pad8[0x618 - 8];
    unsigned int flag;
    char pad61c[0xaf0 - 0x61c];
    int mode;
    char padaf4[0x1fec - 0xaf4];
    int locked;
    char pad1ff0[0x4b14 - 0x1ff0];
    unsigned int enable;
    char pad4b18[0x4f20 - 0x4b18];
    int other;
} State_82E8D780;

void fn_82E8D780(State_82E8D780 *s)
{
    if (s->type == 8) {
        if (s->mode == 0 || s->mode == 4) {
            s->flag = 0;
        } else {
            s->flag ^= 1;
        }
    } else if (s->mode == 1) {
        if (s->other == 0 || s->other == 4) {
            s->flag = 0;
        } else if (s->locked == 0) {
            s->flag = s->enable & (s->flag ^ 1);
        }
    } else if (s->mode == 2) {
        if (s->other == 0 || s->other == 4) {
            s->flag = 1;
        }
    }
}
