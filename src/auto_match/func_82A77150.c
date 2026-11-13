typedef struct {
    char pad[0x104];
    int f104;
} Obj_82A77150;

extern void fn_82A81820(Obj_82A77150 *o);

void fn_82A77150(Obj_82A77150 *o, void *p)
{
    if (p == 0) {
        fn_82A81820(o);
        return;
    }
    o->f104 = 1;
}
