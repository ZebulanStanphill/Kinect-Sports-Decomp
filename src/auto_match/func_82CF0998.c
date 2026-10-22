typedef struct {
    float acc[8];
    unsigned short cnt[8];
    int pad[4];
    double val;
} A;

typedef struct {
    int pad;
    int idx[2];
    unsigned int mode;
    float scale[2];
} B;

typedef struct {
    int pad;
    unsigned int v[2];
} C;

void fn_82CF0998(A *a, B *b, C *c, C *d)
{
    int i;

    i = b->idx[0];
    if (i >= 0 && i < 8) {
        a->acc[i] += (float)(d->v[0] - c->v[0]) * b->scale[0];
        a->cnt[i]++;
    }
    i = b->idx[1];
    if (i >= 0 && i < 8) {
        a->acc[i] += (float)(d->v[1] - c->v[1]) * b->scale[1];
        a->cnt[i]++;
    }
    if (b->mode == 0) {
        a->val = (double)b->scale[0] * (double)c->v[0];
    } else if (b->mode == 1) {
        a->val = (double)b->scale[1] * (double)c->v[1];
    }
}
