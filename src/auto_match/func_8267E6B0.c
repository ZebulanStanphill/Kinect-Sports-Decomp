typedef struct Obj_8267E6B0 {
    int pad0;
    void *obj;
    int arg;
} Obj_8267E6B0;

extern void *fn_8267E408(void *p, int arg, int c);

void *fn_8267E6B0(Obj_8267E6B0 *o)
{
    void *p = o->obj; if (p == 0) return p; return fn_8267E408(p, o->arg, 0);
}
