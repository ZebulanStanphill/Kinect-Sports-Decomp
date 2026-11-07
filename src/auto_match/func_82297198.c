extern int fn_82F85C08(unsigned short *out, unsigned char *in, int count, int *state, char *ctx);

typedef struct Locals_82297198 {
    unsigned char in;
    unsigned short out;
    int state;
} Locals_82297198;

int fn_82297198(char *param_1, unsigned char param_2)
{
    Locals_82297198 l;

    l.state = 0;
    l.in = param_2;
    if (fn_82F85C08(&l.out, &l.in, 1, &l.state, param_1 + 0x18) < 0) {
        return -1;
    }
    return l.out;
}
