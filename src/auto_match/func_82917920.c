typedef struct {
    int v[5];
} Desc;

typedef struct {
    char pad0[0x8];
    unsigned short stride;
} Format;

typedef struct {
    int owner;
    Desc desc;
    Format *format;
    int f1c;
    int f20;
    int f24;
    int f28;
    int count0;
    int f30;
    int count1;
    int f38;
    int f3c;
    int f40;
} Obj;

extern void fn_82917810(int owner, Desc *desc, Format *format, int flag, int *out0, int *out1);

Obj *fn_82917920(Obj *param_1, int owner, Desc *desc, Format *format, int a, int b)
{
    param_1->owner = owner;
    param_1->desc = *desc;
    param_1->f1c = a;
    param_1->f20 = b;
    param_1->format = format;
    param_1->f24 = 0;
    param_1->count0 = 0;
    param_1->count1 = 0;
    fn_82917810(owner, desc, format, 1, &param_1->count0, &param_1->count1);
    param_1->f28 = format->stride * param_1->count0;
    param_1->f30 = format->stride * param_1->count1;
    param_1->f38 = 0;
    param_1->f3c = 0;
    param_1->f40 = 0;
    return param_1;
}
