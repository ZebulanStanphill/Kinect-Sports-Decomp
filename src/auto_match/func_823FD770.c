typedef struct Ref_823FD770 {
    void *p;
    unsigned int *rc;
} Ref_823FD770;
typedef struct Obj_823FD770 {
    void *vt;
    int zero;
    char pad8[0x18 - 8];
    Ref_823FD770 a;
    Ref_823FD770 b;
    Ref_823FD770 c;
    Ref_823FD770 d;
} Obj_823FD770;
extern char lbl_821B7384[];
extern void fn_822315A0(unsigned int *rc);
extern unsigned char fn_8223AAC0(unsigned int *rc);
extern void fn_82365BD8(Ref_823FD770 *dst, Ref_823FD770 *src);

Obj_823FD770 *fn_823FD770(Obj_823FD770 *param_1, Ref_823FD770 *param_2, Ref_823FD770 *param_3, Ref_823FD770 *param_4, Ref_823FD770 *param_5)
{
    Ref_823FD770 *a;
    unsigned int *rc;
    void *p;

    a = &param_1->a;
    param_1->zero = 0;
    param_1->vt = lbl_821B7384;
    a->p = 0;
    a->rc = 0;
    rc = param_2->rc;
    p = param_2->p;
    if (rc != 0 && fn_8223AAC0(rc)) {
        if (a->rc != 0) {
            fn_822315A0(a->rc);
        }
        a->rc = rc;
        a->p = p;
    }
    fn_82365BD8(&param_1->b, param_3);
    fn_82365BD8(&param_1->c, param_4);
    fn_82365BD8(&param_1->d, param_5);
    if (param_2->rc != 0) {
        fn_822315A0(param_2->rc);
    }
    if (param_3->rc != 0) {
        fn_822315A0(param_3->rc);
    }
    if (param_4->rc != 0) {
        fn_822315A0(param_4->rc);
    }
    if (param_5->rc != 0) {
        fn_822315A0(param_5->rc);
    }
    return param_1;
}
