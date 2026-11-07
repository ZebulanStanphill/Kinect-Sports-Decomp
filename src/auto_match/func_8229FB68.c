typedef struct Var_8229FB68 {
    int type;
    int data;
    double value;
} Var_8229FB68;

extern void fn_82273CD8(Var_8229FB68 *v, int type);
extern void fn_82273C88(Var_8229FB68 *v);
extern void fn_82672C20(int obj, const char *name, Var_8229FB68 *args, int count);

void fn_8229FB68(int *obj, int health, double maxHealth)
{
    Var_8229FB68 args[2];
    Var_8229FB68 *e;
    int i;

    for (i = 0; i < 2; i++) {
        args[i].type = 0;
        args[i].data = 0;
    }
    fn_82273CD8(&args[0], 3);
    args[0].value = (double)(health + 1);
    fn_82273CD8(&args[1], 3);
    args[1].value = maxHealth;
    fn_82672C20(*obj, "_root.mainCtrl.setHealth", args, 2);
    e = &args[2];
    i = 1;
    do {
        e--;
        fn_82273C88(e);
        i--;
    } while (i >= 0);
}
