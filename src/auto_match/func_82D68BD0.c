typedef unsigned short ushort;
typedef unsigned char byte;

typedef struct State {
    ushort v[4];
    byte idx;
    byte mode;
} State;

void fn_82D68BD0(State *s, int *flags)
{
    if (flags[0] != 0) {
        s->v[0] = (1 - (s->v[0] >> 7 & 1)) * 0x10;
        if (s->idx > 1) {
            s->v[0] = 0x10;
            s->v[1] = 0;
            if (s->idx == 3) {
                s->idx = 2;
                s->v[2] = s->v[3];
            }
        }
    }
    if (flags[1] != 0) {
        s->v[s->idx] = (1 - (s->v[s->idx] >> 7 & 1)) * 0x10;
        if (s->mode > 1) {
            s->v[s->idx] = 0x10;
            s->v[s->idx + 1] = 0;
            if (s->mode == 3) {
                s->mode = 2;
            }
        }
    }
}
