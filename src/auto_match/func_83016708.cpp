struct Obj_83016708 {
    virtual void v0(int flags);
};
struct Own_83016708 {
    Obj_83016708 *m[7];
};
extern "C" int fn_82FA5190(unsigned int, Obj_83016708 *);
extern "C" int fn_8302A570(Obj_83016708 *);
extern "C" unsigned int lbl_831BC768;

static void rel(Obj_83016708 **slot)
{
    if (*slot != 0) {
        fn_8302A570(*slot);
        unsigned int uVar2 = lbl_831BC768;
        Obj_83016708 *p = *slot;
        if (p != 0) {
            p->v0(0);
            fn_82FA5190(uVar2, p);
        }
        *slot = 0;
    }
}

extern "C" void fn_83016708(Own_83016708 *param_1)
{
    rel(&param_1->m[2]);
    rel(&param_1->m[3]);
    rel(&param_1->m[4]);
    rel(&param_1->m[0]);
    rel(&param_1->m[1]);
    rel(&param_1->m[5]);
    rel(&param_1->m[6]);
}
