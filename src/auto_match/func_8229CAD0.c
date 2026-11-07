typedef struct Value_8229CAD0 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
} Value_8229CAD0;

extern void fn_82273CD8(Value_8229CAD0 *v, int type);
extern void fn_82273C88(Value_8229CAD0 *v);
extern void fn_82672C20(int movie, const char *path, Value_8229CAD0 *args, int count);

void fn_8229CAD0(int *param_1, unsigned int param_2)
{
    Value_8229CAD0 v;

    v.a = 0;
    v.b = 0;
    fn_82273CD8(&v, 5);
    v.c = param_2;
    fn_82672C20(*param_1, "_root.mc_panel.SetTitleText", &v, 1);
    fn_82273C88(&v);
}
