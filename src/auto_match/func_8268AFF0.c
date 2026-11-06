typedef struct {
    int f0;
    unsigned int f4;
    int f8;
    int fC;
    unsigned char f10;
} Obj_8268AFF0;
extern unsigned int fn_826BD758(int a, unsigned int b);

unsigned int fn_8268AFF0(Obj_8268AFF0 *o)
{
    unsigned int r;
    if (o->f10 != 0) {
        return o->f4;
    }
    r = fn_826BD758(o->f0, o->f4);
    if (r == o->f4) {
        o->f10 = 1;
    }
    return r;
}
