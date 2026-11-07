typedef unsigned int undefined4;

typedef struct Value_8227A748 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
} Value_8227A748;

typedef struct Obj_8227A748 {
    unsigned int pad0;
    unsigned int pad4;
    void *movie;
} Obj_8227A748;

extern void fn_82273C88(Value_8227A748 *v);
extern void fn_82273CD8(Value_8227A748 *v, int type);
extern void fn_82672C20(void *movie, const char *name, Value_8227A748 *args, int count);

void fn_8227A748(Obj_8227A748 *param_1, undefined4 param_2)
{
    Value_8227A748 v;

    v.a = 0;
    v.b = 0;
    fn_82273CD8(&v, 5);
    v.c = param_2;
    fn_82672C20(param_1->movie, "_root.SetTitleText", &v, 1);
    fn_82273C88(&v);
}
