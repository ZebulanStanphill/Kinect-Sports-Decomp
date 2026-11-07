typedef struct Obj_82715660 Obj_82715660;

typedef struct {
    unsigned int v[4];
} Block_82715660;

typedef struct {
    unsigned int flags;
} Flags_82715660;

typedef struct {
    char pad[0xb00];
    Flags_82715660 f;
} Res_82715660;

typedef struct {
    char pad[0x3c];
    void (*f3c)(Obj_82715660 *);
    Res_82715660 *(*f40)(Obj_82715660 *);
} Vtbl_82715660;

struct Obj_82715660 {
    Vtbl_82715660 *vt;
    char pad04[0x62];
    unsigned char flags66;
    char pad67[0x39];
    Block_82715660 *data;
};

extern void fn_8267BE38(Block_82715660 *p);
extern Block_82715660 *fn_8267BED0(Obj_82715660 *o, int size, unsigned int *tag);

static __forceinline void SetFlag_82715660(Flags_82715660 *f, unsigned int bit)
{
    f->flags |= bit;
}

void fn_82715660(Obj_82715660 *o, Block_82715660 *src)
{
    Block_82715660 *old;
    unsigned char changed;
    unsigned int tag;
    Res_82715660 *r;

    old = o->data;
    changed = (src != 0) != (old != 0);
    if (src == 0) {
        fn_8267BE38(old);
        o->data = 0;
        o->flags66 = o->flags66 & 0xfe;
    } else {
        if (old == 0) {
            tag = 0x109;
            o->data = fn_8267BED0(o, 0x10, &tag);
        }
        *o->data = *src;
        o->flags66 = o->flags66 | 1;
    }
    r = o->vt->f40(o);
    SetFlag_82715660(&r->f, 0x400);
    if (changed) {
        o->vt->f3c(o);
    }
}
