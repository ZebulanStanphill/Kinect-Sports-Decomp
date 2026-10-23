typedef int (*Method)(void *a, void *b, unsigned int *c, int d, int e);

typedef struct {
    void *pad[8];
    Method m20;
} Vtbl;

typedef struct {
    Vtbl *vt;
} Obj;

unsigned int fn_82A38740(Obj *param_1, void *param_2)
{
    unsigned int result;
    unsigned int flags[2];
    unsigned char buf[8];

    result = 2;
    if (param_1->vt->m20(param_2, buf, flags, 4, 0x1b) >= 0) {
        result = flags[0] & 1;
    }
    return result;
}
