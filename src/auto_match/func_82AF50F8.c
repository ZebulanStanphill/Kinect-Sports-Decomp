typedef struct Obj_82AF50F8 {
    int f0;
    int f4;
    unsigned int pad8 : 10;
    unsigned int count : 3;
    unsigned int rest8 : 19;
    int fc[4];
    int f1c;
    int f20[3];
    void *items[8];
} Obj_82AF50F8;

extern void fn_82B82D28(void *item, int a, float *x, float *y, float *z, int f1c, int b, int c);

void fn_82AF50F8(Obj_82AF50F8 *o, float *x, float *y, float *z)
{
    unsigned int i;
    unsigned int n = o->count;
    for (i = 0; i < n; i++)
        fn_82B82D28(o->items[i], 0, &x[i], &y[i], &z[i], o->f1c, 0, 1);
}
