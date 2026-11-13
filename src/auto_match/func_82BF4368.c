typedef struct Obj_82BF4368 {
    void *vt;
    unsigned char pad[0x58];
    unsigned short count;
    float value;
} Obj_82BF4368;

extern Obj_82BF4368 *fn_82BEECD0(Obj_82BF4368 *o, const char *name, int a, int b, int c);
extern char lbl_820EB818[];

Obj_82BF4368 *fn_82BF4368(Obj_82BF4368 *o, const char *name, int a, unsigned short count,
                          float value, int b, int c)
{
    fn_82BEECD0(o, name, a, b, c);
    o->value = value;
    o->count = count;
    o->vt = lbl_820EB818;
    return o;
}
