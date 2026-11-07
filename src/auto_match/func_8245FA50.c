typedef struct Obj_8245FA50 {
    char pad0[0x180];
    int active;
} Obj_8245FA50;

typedef struct Owner_8245FA50 {
    char pad0[0xa0];
    Obj_8245FA50 *obj;
} Owner_8245FA50;

extern int fn_825603C8(int a, Obj_8245FA50 *o, int b);
extern int fn_825604A0(Obj_8245FA50 *o);

void fn_8245FA50(Owner_8245FA50 *param_1, int *param_2)
{
    Obj_8245FA50 *o;

    switch (*param_2) {
    case 0x53:
        o = param_1->obj;
        if (o->active == 0) {
            fn_825603C8(0, o, 1);
            o->active = 1;
        }
        break;
    case 0x52:
        o = param_1->obj;
        if (o->active != 0) {
            fn_825604A0(o);
            o->active = 0;
        }
        break;
    }
}
