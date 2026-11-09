typedef struct Obj_82BF4730 {
    void *vt;
    unsigned char pad[0x24];
    unsigned short count;
    float value;
} Obj_82BF4730;

extern Obj_82BF4730 *fn_82BF4448(Obj_82BF4730 *o, const char *name, int a, void *p,
                                 unsigned short n, unsigned short m);
extern char lbl_820EB940[];

Obj_82BF4730 *fn_82BF4730(Obj_82BF4730 *o, const char *name, int a, void *p,
                          unsigned short n, unsigned short m, unsigned short count, float value)
{
    fn_82BF4448(o, name, a, p, n, m);
    o->value = value;
    o->count = count;
    o->vt = lbl_820EB940;
    return o;
}
