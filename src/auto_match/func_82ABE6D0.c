typedef struct Obj_82ABE6D0 {
    char pad0[8];
    unsigned int pad8_hi : 18;
    unsigned int kind : 7;
    unsigned int pad8_lo : 7;
    char padc[4];
    unsigned char pad10 : 7;
    unsigned char valid : 1;
    char pad11[3];
    unsigned int pad14_hi : 19;
    unsigned int id : 13;
    char pad18[0x28 - 0x18];
    struct Obj_82ABE6D0 *link;
} Obj_82ABE6D0;

static unsigned char InA(unsigned int k) { return k >= 1 && k <= 0x1f; }
static unsigned char InB(unsigned int k) { return k >= 0x20 && k <= 0x52; }

Obj_82ABE6D0 *fn_82ABE6D0(Obj_82ABE6D0 *o)
{
    Obj_82ABE6D0 *l;
    unsigned int id;
    l = ((Obj_82ABE6D0 *)((unsigned int)o & ~1u))->link;
    if (((unsigned int)l & 1) == 0 && l != 0) {
        if (o->valid != 0 && (id = o->id) != 0x1fff) {
            if (InA(o->kind)) {
                if (l->valid != 0 && l->id == id) {
                    if (InB(l->kind))
                        return l;
                }
            }
        }
    }
    return 0;
}
