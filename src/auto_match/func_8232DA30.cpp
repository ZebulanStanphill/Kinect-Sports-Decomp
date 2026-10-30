struct Obj_8232DA30 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(int old, int nw);
    int f4;
    int state;
};
struct Owner_8232DA30 {
    char pad[0xc];
    Obj_8232DA30 *obj;
};
extern "C" void fn_8232C528(Obj_8232DA30 *, int);

extern "C" void fn_8232DA30(Owner_8232DA30 *param_1, unsigned int param_2, long long param_3, long long param_4, int param_5)
{
    if (param_5 == 0) {
        int b;
        if (param_2 < 3 || (param_2 >= 6 && param_2 == 6)) b = 1; else b = 0;
        Obj_8232DA30 *o = param_1->obj;
        int old = o->state;
                int nw = !b; o->state = nw; o->v5(old, nw);
        fn_8232C528(param_1->obj, 1);
    }
}
