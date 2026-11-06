typedef struct Obj_82BF1A18 Obj_82BF1A18;
extern void *fn_82BE1A10(void);
extern void *fn_82BE1FF0(void *mgr);
extern Obj_82BF1A18 *fn_82BEA420(void *sys, int key);
extern void fn_82BF1748(Obj_82BF1A18 *o);

void fn_82BF1A18(int key, char *member)
{
    Obj_82BF1A18 *o = member ? (Obj_82BF1A18 *)(member - 0x2c) : 0;
    if (o == 0) {
        if (fn_82BE1A10() == 0) return;
        if (fn_82BE1FF0(fn_82BE1A10()) == 0) return;
        o = fn_82BEA420(fn_82BE1FF0(fn_82BE1A10()), key);
        if (o == 0) return;
    }
    fn_82BF1748(o);
}
