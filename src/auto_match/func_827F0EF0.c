typedef struct Obj_827F0EF0 {
    char pad0[0xe0];
    unsigned short fe0[4];
    unsigned short fe8;
    unsigned short flags;
    int fec;
    unsigned int ff0;
} Obj_827F0EF0;

extern void fn_827F0D28(Obj_827F0EF0 *o);

static __forceinline void SetFlag(unsigned short *f, unsigned short v) { *f |= v; }

void fn_827F0EF0(Obj_827F0EF0 *o)
{
    fn_827F0D28(o);
    o->fe0[0] = 0;
    o->fe0[1] = 0;
    o->fe0[2] = 0;
    o->fe0[3] = 0;
    o->ff0 = 0xffff;
    SetFlag(&o->flags, 1);
    SetFlag(&o->flags, 2);
}
