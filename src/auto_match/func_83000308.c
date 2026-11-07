typedef struct Obj_83000308 Obj_83000308;

typedef struct {
    char pad[0x48];
    void (*f48)(Obj_83000308 *self, float value, int a, int b, int c);
} Vtbl_83000308;

struct Obj_83000308 {
    Vtbl_83000308 *vt;
    char pad04[0x60];
    void *f64;
    int pad68[3];
    void *f74;
};

extern void fn_82FA5190(unsigned int a, void *b);
extern int fn_83027398(void *a, int b);
extern unsigned int lbl_831BC768;

int fn_83000308(Obj_83000308 *p, int value)
{
    int r;

    if (p->f64 != 0) {
        if (p->f74 != 0) {
            fn_82FA5190(lbl_831BC768, p->f74);
            p->f74 = 0;
        }
        r = fn_83027398(p->f64, value);
        p->vt->f48(p, (float)value, 0x27, 0, 0);
        return r;
    }
    return 2;
}
