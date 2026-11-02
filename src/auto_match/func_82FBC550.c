typedef struct Obj_82FBC550 {
    int pad0;
    float f4, f8, fc, f10, f14;
    unsigned char b18, b19;
} Obj_82FBC550;

extern double fn_82F655D8(double, double);
extern double lbl_82015618;

int fn_82FBC550(Obj_82FBC550 *o, short id, void *v)
{
    int r;
    if (v == 0)
        return 0x1f;
    r = 1;
    switch (id) {
    case 0:
        o->f4 = *(float *)v;
        break;
    case 1:
        o->f8 = *(float *)v;
        break;
    case 2:
        o->fc = *(float *)v;
        break;
    case 3:
        o->f10 = *(float *)v;
        break;
    case 4:
        o->f14 = (float)fn_82F655D8(lbl_82015618, *(float *)v * 0.05f);
        break;
    case 5:
        o->b18 = *(unsigned char *)v;
        break;
    case 6:
        o->b19 = *(unsigned char *)v;
        break;
    default:
        r = 0x1f;
        break;
    }
    return r;
}
