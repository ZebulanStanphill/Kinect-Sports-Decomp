typedef struct Obj_82BF43D0 {
    void *vt;
    unsigned char pad[0x58];
    float value2;
    unsigned short count;
    float value;
} Obj_82BF43D0;

extern Obj_82BF43D0 *fn_82BEECD0(Obj_82BF43D0 *o, const char *name, int a, int b, int c);
extern char lbl_820EB860[];

Obj_82BF43D0 *fn_82BF43D0(Obj_82BF43D0 *o, const char *name, int a, unsigned short count,
                          float value, float value2, int b, int c)
{
    fn_82BEECD0(o, name, a, b, c);
    o->value2 = value2;
    o->count = count;
    o->value = value;
    o->vt = lbl_820EB860;
    return o;
}
