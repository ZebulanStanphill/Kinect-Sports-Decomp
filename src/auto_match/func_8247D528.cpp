extern "C" {
int fn_82286F08(void *);
int fn_8228BE30(void *);
int fn_8229E090(void *, int, int);
int fn_8265CA20(void *);
extern unsigned int lbl_8327F844;
}

class Poly_8247D528 {
public:
    virtual ~Poly_8247D528();
};

struct Glob_8247D528 { char pad[0xf0]; unsigned int a; unsigned int b; };

struct Sub_8247D528 {
    char pad0[0x44];
    void *m44;
    void *m48;
    char pad1[0x24];
    Poly_8247D528 *m70;
    void *m74;
};
struct Obj_8247D528 { char pad[0x10]; Sub_8247D528 s; };

extern "C" void fn_8247D528(Obj_8247D528 *param_1)
{
    Sub_8247D528 *s = &param_1->s;
    unsigned int g = lbl_8327F844; if (lbl_8327F844 != 0) { *(unsigned *)(g+0xf0) = 0; *(unsigned *)(g+0xf4) = 0; }
    if (s->m74 != 0) {
        fn_8229E090(s->m74, 0, 0);
        s->m74 = 0;
    }
    if (s->m44 != 0) {
        fn_82286F08(s->m44);
        s->m44 = 0;
    }
    void *p = s->m48;
    if (p != 0) {
        fn_8228BE30(p);
        fn_8265CA20(p);
        s->m48 = 0;
    }
    if (s->m70 != 0) {
        delete s->m70;
        s->m70 = 0;
    }
}
