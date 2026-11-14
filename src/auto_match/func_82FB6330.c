typedef struct State_82FB6330 {
    unsigned int a, b, c, d, e;
    unsigned int high : 6;
    unsigned int low : 26;
    int g, h, i, j, k;
    unsigned short highBits : 4;
    unsigned short bits : 12;
    unsigned short pad;
    int m;
} State_82FB6330;

extern State_82FB6330 lbl_83264268;

State_82FB6330 *fn_82FB6330(void)
{
    State_82FB6330 *s = &lbl_83264268;
    s->a = -1;
    s->c = 0;
    s->e = 0;
    s->b = -1;
    s->high = 15;
    s->highBits = 0;
    s->g = 0;
    s->i = 0;
    s->j = 0;
    s->k = 0;
    s->m = 0;
    return s;
}
