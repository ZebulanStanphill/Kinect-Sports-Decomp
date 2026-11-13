typedef struct Obj_8267F420 {
    int pad0;
    void *obj;
    int arg;
} Obj_8267F420;

extern void *fn_8267F148(void *p, int arg);

void *fn_8267F420(Obj_8267F420 *o)
{
    void *p = o->obj; if (p == 0) return p; return fn_8267F148(p, o->arg);
}
