typedef struct {
    int a;
    int b;
} pair_825BE738;

typedef struct {
    unsigned char pad[0x10];
    void *p10;
    unsigned char pad14[0x20];
    void *p34;
    void *p38;
    unsigned char pad3c[0x18];
    void *p54;
    int pad58;
    void *p5c;
    void *p60;
    int pad64;
    unsigned char p68[0x1a8];
    pair_825BE738 *begin;
    pair_825BE738 *end;
} obj_825BE738;

extern void fn_82517978(pair_825BE738 *out, int a, int b, int c);
extern void *fn_8256BF18(void);
extern void fn_8256C5D0(void *mgr, pair_825BE738 *p);
extern void fn_827DA660(void *a, void *b, void *c);
extern void fn_827DBD80(void *a, void *b, void *c, int d, void *e, int f);
extern void fn_82599418(void);
extern void fn_827DC520(void *a, void *b);

void fn_825BE738(obj_825BE738 *param_1)
{
    pair_825BE738 *it;
    pair_825BE738 *end;
    pair_825BE738 tmp;

    it = param_1->begin;
    end = param_1->end;
    for (; it != end; it++) {
        tmp.a = 0;
        tmp.b = 0;
        fn_82517978(&tmp, it->a, it->b, 0);
        fn_8256C5D0(fn_8256BF18(), &tmp);
    }
    if (param_1->p5c != 0) {
        fn_827DA660(param_1->p34, param_1->p5c, param_1->p38);
        param_1->p5c = 0;
    }
    if (param_1->p60 != 0) {
        fn_827DA660(param_1->p34, param_1->p60, param_1->p38);
        param_1->p60 = 0;
    }
    if (param_1->p54 != 0) {
        fn_827DBD80(param_1->p34, param_1->p54, param_1->p10, 0, param_1->p68, 0);
    }
    fn_82599418();
    if (param_1->p54 != 0) {
        fn_827DC520(param_1->p34, param_1->p54);
        param_1->p54 = 0;
    }
}
