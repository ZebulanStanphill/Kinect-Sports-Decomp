typedef struct Obj_82BF4910 {
    void *vt;
    unsigned char pad[0x24];
    unsigned short count;
    float value;
    float value2;
} Obj_82BF4910;

extern Obj_82BF4910 *fn_82BF4448(Obj_82BF4910 *o, const char *name, int a, void *p,
                                 unsigned short n, unsigned short m);
extern char lbl_820EB9CC[];

Obj_82BF4910 *fn_82BF4910(Obj_82BF4910 *o, const char *name, int a, void *p,
                          unsigned short n, unsigned short m, unsigned short count,
                          float value, float value2)
{
    fn_82BF4448(o, name, a, p, n, m);
    o->value = value;
    o->count = count;
    o->value2 = value2;
    o->vt = lbl_820EB9CC;
    return o;
}
