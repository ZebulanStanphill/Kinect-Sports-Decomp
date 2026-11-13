typedef struct Obj_823400C8 {
    int pad0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
} Obj_823400C8;

typedef struct Mode_8225F160 {
    int pad[5];
    unsigned int mode;
} Mode_8225F160;

extern Mode_8225F160 *fn_8225F160();

int fn_823400C8(Obj_823400C8 *param_1)
{
    switch (fn_8225F160()->mode) {
    case 0:
        return param_1->v0;
    case 1:
        return param_1->v1;
    case 2:
        return param_1->v2;
    case 3:
        return param_1->v3;
    default:
        return param_1->v4;
    }
}
