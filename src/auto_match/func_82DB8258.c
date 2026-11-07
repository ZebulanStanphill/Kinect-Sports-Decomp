typedef struct ProfEntry_82DB8258 {
    const char *name;
    unsigned int time;
    unsigned int pad;
} ProfEntry_82DB8258;

typedef struct ProfBuf_82DB8258 {
    int unk0;
    ProfEntry_82DB8258 *cur;
    int unk8;
    ProfEntry_82DB8258 *end;
} ProfBuf_82DB8258;

typedef struct Obj_82DB8258 {
    char pad0[0x14];
    float f14;
    char pad18[0x10];
    unsigned int f28;
    char pad2c[0x8];
    int f34;
} Obj_82DB8258;

extern void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
extern int fn_82DA32A8(Obj_82DB8258 *o);
extern float fn_82DA3118(Obj_82DB8258 *o);
extern int fn_82DB7E98(Obj_82DB8258 *o, float t);
extern unsigned int lbl_8323B4A0;

static __forceinline void Prof_82DB8258(const char *name)
{
    ProfBuf_82DB8258 *b = (ProfBuf_82DB8258 *)KeTlsGetValue(lbl_8323B4A0);
    ProfEntry_82DB8258 *e = b->cur;
    if (e < b->end) {
        e->name = name;
        e->time = (unsigned int)__mftb();
        b->cur = e + 1;
    }
}

int fn_82DB8258(Obj_82DB8258 *o)
{
    int r;
    float t;

    Prof_82DB8258("TtPhysics");
    if (o->f28 != 0) {
        Prof_82DB8258("TtreCollideAfterStepFailure");
        r = fn_82DA32A8(o);
        if (r != 0) {
            Prof_82DB8258("Et");
            Prof_82DB8258("Et");
            return r;
        }
        Prof_82DB8258("Et");
    }
    t = fn_82DA3118(o);
    if (o->f34 != 0) {
        Prof_82DB8258("TtTOIs");
        r = fn_82DB7E98(o, t);
        if (r != 0) {
            o->f28 = (unsigned int)r;
            Prof_82DB8258("Et");
            Prof_82DB8258("Et");
            return r;
        }
        Prof_82DB8258("Et");
    }
    o->f14 = t;
    o->f28 = 0;
    Prof_82DB8258("Et");
    return 0;
}
