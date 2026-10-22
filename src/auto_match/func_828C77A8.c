extern int fn_823AA970();
extern int fn_8288DB98();
extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_82026234;
extern unsigned int lbl_82026238;

typedef struct { int a, b, c; } Tri;

typedef struct {
    void *vt0;
    char pad4[0x4c];
    void *vt50;
    char pad54[0x2c];
    char sub80[8];
    int x88;
    int x8c;
    Tri x90;
    int x9c;
    float fa0;
    unsigned char ba4;
    unsigned char ba5;
} Obj;

Obj *fn_828C77A8(Obj *param_1, int param_2, int param_3, int param_4, unsigned char param_5)
{
    Tri *t;
    fn_828BDDA0(param_1);
    param_1->vt0 = &lbl_82026238;
    param_1->vt50 = &lbl_82026234;
    fn_828B5580(param_1->sub80, param_2 + 0x14);
    t = &param_1->x90;
    t->a = 0;
    t->b = 0;
    t->c = 0;
    param_1->fa0 = 0.0f;
    param_1->ba4 = 1;
    param_1->ba5 = param_5;
    param_1->x88 = *(unsigned char *)(param_2 + 0x5c);
    param_1->x8c = fn_823AA970(param_4);
    fn_8288DB98(param_2, param_3, t);
    return param_1;
}
