typedef struct { unsigned int v[4]; } Quad_82689220;

extern void *fn_8267B890(int size, int a, int b);
extern int fn_82689100(void *obj, int arg, Quad_82689220 *q);

int fn_82689220(int param_1, Quad_82689220 *param_2, int param_3)
{
    void *p;
    Quad_82689220 tmp;

    p = fn_8267B890(param_3, 0x20, 0);
    if (p != 0) {
        tmp.v[0] = param_2->v[0];
        tmp.v[1] = param_2->v[1];
        tmp.v[2] = param_2->v[2];
        tmp.v[3] = param_2->v[3];
        return fn_82689100(p, param_1, &tmp);
    }
    return 0;
}
