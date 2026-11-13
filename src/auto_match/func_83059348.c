typedef struct Target_83059348 {
    char pad00[4];
    float f4;
    float f8;
    char pad0c[0x1c];
    float f28;
    float f2c;
    char pad30[0xbdc - 0x30];
    float weights[1];
} Target_83059348;

typedef struct Params_83059348 {
    unsigned int x;
    int pad04;
    Target_83059348 *target;
    unsigned int sub[1];
} Params_83059348;

extern int fn_8305B988(unsigned int *sub, double x);
extern int fn_8305BB28(unsigned int *sub, double x);
extern float lbl_8217E46C;
extern float lbl_8217E470;

void fn_83059348(Params_83059348 *p)
{
    int n;
    int i;
    float *w;
    float v;
    p->target->f8 = lbl_8217E470;
    p->target->f4 = (float)fn_8305BB28(p->sub, (double)p->x);
    p->target->f28 = lbl_8217E46C;
    p->target->f2c = (float)fn_8305B988(p->sub, (double)p->x);
    n = fn_8305B988(p->sub, (double)p->x);
    w = p->target->weights;
    v = 1.0f / (float)n;
    for (i = 0; i < n; i++) {
        w[i] = v;
    }
}
