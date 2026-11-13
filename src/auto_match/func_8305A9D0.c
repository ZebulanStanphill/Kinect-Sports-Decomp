typedef struct Target_8305A9D0 {
    char pad00[0x18];
    float f18;
    float f1c;
    char pad20[0x20];
    float f40;
    float f44;
    char pad48[0x131c - 0x48];
    float weights[1];
} Target_8305A9D0;

typedef struct Params_8305A9D0 {
    unsigned int x;
    int pad04;
    Target_8305A9D0 *target;
    unsigned int sub[1];
} Params_8305A9D0;

extern int fn_8305B988(unsigned int *sub, double x);
extern int fn_8305BB28(unsigned int *sub, double x);
extern float lbl_8217E570;
extern float lbl_8217E574;

void fn_8305A9D0(Params_8305A9D0 *p)
{
    int n;
    int i;
    float *w;
    float v;
    p->target->f1c = lbl_8217E574;
    p->target->f18 = (float)fn_8305BB28(p->sub, (double)p->x);
    p->target->f40 = lbl_8217E570;
    p->target->f44 = (float)fn_8305B988(p->sub, (double)p->x);
    n = fn_8305B988(p->sub, (double)p->x);
    w = p->target->weights;
    v = 1.0f / (float)n;
    for (i = 0; i < n; i++) {
        w[i] = v;
    }
}
