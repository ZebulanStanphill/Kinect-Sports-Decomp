extern void fn_82810360(const float *src, float *dst);

typedef struct {
    char pad[0x1c];
    void *f1c;
} Sub_8284FEB0;

typedef struct {
    char pad[0x90];
    Sub_8284FEB0 *sub;
} Obj_8284FEB0;

typedef struct {
    int f0;
    float *target;
} Arg_8284FEB0;

void fn_8284FEB0(Obj_8284FEB0 *o, Arg_8284FEB0 *a, const float *src)
{
    if (o->sub == 0)
        return;
    if (o->sub->f1c != 0)
        return;
    fn_82810360(src, a->target);
}
