typedef struct {
    char pad[0x104];
    int f104;
} Obj_82A77168;

extern void fn_82A81830(Obj_82A77168 *o);

void fn_82A77168(Obj_82A77168 *o, void *p)
{
    if (p == 0) {
        fn_82A81830(o);
        return;
    }
    o->f104 = 0;
}
