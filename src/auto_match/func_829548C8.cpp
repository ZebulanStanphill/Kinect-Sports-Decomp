struct Sink_829548C8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int f3(unsigned a, unsigned b, unsigned *p, unsigned n);
};
struct Aux_829548C8 { char pad[4]; unsigned kind; };
struct Info_829548C8 { char pad[0x3c]; Aux_829548C8 *aux; };
struct Obj_829548C8 {
    char pad0[0xd4]; int fd4;
    char pad1[0x104 - 0xd8]; Info_829548C8 *f104;
    char pad2[0x110 - 0x108]; unsigned *f110; unsigned f114;
    char pad3[0x120 - 0x118]; unsigned f120;
    char pad4[0x1b4 - 0x124]; Sink_829548C8 *f1b4;
};

extern "C" int fn_829548C8(Obj_829548C8 *o)
{
    Sink_829548C8 *s = o->f1b4;
    if (s != 0) {
        unsigned i = o->f120;
        if (i < o->f114 && o->fd4 == 0) {
            Info_829548C8 *inf = o->f104;
            unsigned a = 0, b = 0;
            if (inf != 0 && inf->aux != 0 && *(int *)((char *)inf->aux + 4) == 0xe) {
                a = *(unsigned *)((char *)inf->aux + 0x40);
                b = *(unsigned *)((char *)inf->aux + 0x44);
            }
            unsigned *q = o->f110;
            int r = s->f3(a, b, q + i, o->f114 - i);
            o->f120 = o->f114;
            return r;
        }
    }
    return 0;
}
