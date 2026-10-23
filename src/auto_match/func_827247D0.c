extern void fn_8267C498(int *p);
extern void fn_8268BA10(int p, int v);

typedef struct Ref {
    int pad0;
    int count;
} Ref;

typedef struct Obj {
    int pad0;
    int *p4;
} Obj;

void fn_827247D0(Obj *param_1, int *param_2)
{
    Ref **pp;
    int r;

    fn_8268BA10((int)param_1, *param_2);
    pp = (Ref **)param_2[1];
    r = (int)*pp;
    if (r != 0) {
        ((Ref *)r)->count = ((Ref *)r)->count + 1;
    }
    if (param_1->p4 != 0) {
        fn_8267C498(param_1->p4);
    }
    param_1->p4 = (int *)*pp;
}
