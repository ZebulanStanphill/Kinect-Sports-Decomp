typedef struct Obj_828AC8F0 {
    unsigned int pad[4];
    unsigned int a;
    unsigned int b;
} Obj_828AC8F0;

extern int fn_8223C478(int ctx, int n, int z);
extern int fn_828E9DB8(int ctx, unsigned int v, int n);

void fn_828AC8F0(Obj_828AC8F0 *param_1, int param_2)
{
    unsigned int vals[2];
    int i;

    vals[0] = param_1->a;
    vals[1] = param_1->b;
    for (i = 0; i < 2; i++) {
        fn_8223C478(param_2, 6, 0);
        fn_828E9DB8(param_2, vals[i], 6);
    }
}
