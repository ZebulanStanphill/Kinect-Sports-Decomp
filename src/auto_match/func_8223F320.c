typedef struct Obj_8223F320 {
    int p0;
    void *f4;
    int p8;
    void *fc;
    int p10;
    void *f14;
    int p18;
    void *f1c;
} Obj_8223F320;
extern void fn_82F62A10(Obj_8223F320 *);
extern void fn_82F641F8(void *);
extern void fn_82F626D0(Obj_8223F320 *);
static __forceinline void Rel(void **pp)
{
    if (*pp != 0) fn_82F641F8(*pp);
    *pp = 0;
}
void fn_8223F320(Obj_8223F320 *o)
{
    fn_82F62A10(o);
    Rel(&o->f1c);
    Rel(&o->f14);
    Rel(&o->fc);
    Rel(&o->f4);
    fn_82F626D0(o);
}
