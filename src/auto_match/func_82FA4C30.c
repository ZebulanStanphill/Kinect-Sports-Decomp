typedef union Param_82FA4C30 {
    float f;
    int i;
} Param_82FA4C30;

typedef struct Obj_82FA4C30 {
    int pad0;
    Param_82FA4C30 params[8];   /* 0x04 */
} Obj_82FA4C30;

extern double fn_82F655D8(double, double);

int fn_82FA4C30(Obj_82FA4C30 *o, short id, void *v)
{
    if (v == 0)
        return 0x1f;
    switch (id) {
    case 0:
        o->params[0].f = *(float *)v;
        break;
    case 1:
        o->params[1].f = *(float *)v;
        break;
    case 2:
        o->params[2].i = *(int *)v;
        break;
    case 3:
        o->params[3].f = (float)fn_82F655D8(10.0, *(float *)v * 0.05f);
        break;
    case 4:
        o->params[4].f = (float)fn_82F655D8(10.0, *(float *)v * 0.05f);
        break;
    case 5:
        o->params[5].f = *(float *)v;
        break;
    case 6:
        o->params[6].i = *(unsigned char *)v != 0;
        break;
    case 7:
        o->params[7].i = *(int *)v;
        break;
    default:
        o->params[id].f = *(float *)v;
        break;
    }
    return 1;
}
