extern void fn_8224F398(void *p);
extern void *fn_8265C9E0(int size);
extern char lbl_821C2AE8[];

typedef struct Obj {
    void *vtbl;
    int owner;
    unsigned char flag8;
    int unkc;
    char sub[0x40];
    int unk50;
    int unk54;
    int unk58;
    unsigned char flag5c;
} Obj;

static Obj *Obj_ctor(Obj *o, int owner)
{
    o->owner = owner;
    o->flag8 = 0;
    o->vtbl = lbl_821C2AE8;
    o->unkc = 0;
    fn_8224F398(o->sub);
    o->flag5c = 0;
    o->unk50 = -1;
    o->unk58 = -1;
    o->unk54 = 0;
    return o;
}

Obj **fn_8224AB50(Obj **out, int owner)
{
    Obj *m = (Obj *)fn_8265C9E0(100);
    *out = m ? Obj_ctor(m, owner) : 0;
    return out;
}
