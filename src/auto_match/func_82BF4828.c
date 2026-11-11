typedef struct Obj_82BF4828 {
    void *vt;
    unsigned char pad[0x24];
    float value;
} Obj_82BF4828;

extern Obj_82BF4828 *fn_82BF4448(Obj_82BF4828 *o, const char *name, int a, void *p,
                                 unsigned short n, unsigned short m);
extern char lbl_820EB988[];

Obj_82BF4828 *fn_82BF4828(Obj_82BF4828 *o, const char *name, int a, void *p,
                          unsigned short n, unsigned short m, float value)
{
    fn_82BF4448(o, name, a, p, n, m);
    o->value = value;
    o->vt = lbl_820EB988;
    return o;
}
