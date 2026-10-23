typedef struct Pair {
    int a;
    int b;
} Pair;

typedef struct Obj {
    int pad0;
    int pad4;
    unsigned char done;
    char pad9[3];
    int c;
    int d;
    Pair cur;
    Pair def;
} Obj;

extern unsigned char fn_826F26D8(int *a, int *b, Pair *c);

void fn_826F2948(Obj *param_1)
{
    Pair *cur;

    if (param_1->done == 0) {
        cur = &param_1->cur;
        if (fn_826F26D8(&param_1->d, &param_1->c, cur) == 0) {
            int t[2]; t[0] = param_1->def.a; t[1] = param_1->def.b; cur->a = t[0]; cur->b = t[1];
        }
        param_1->done = 1;
    }
}
