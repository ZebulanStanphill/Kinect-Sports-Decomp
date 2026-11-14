typedef struct ProfEntry_82DAE040 {
    const char *name;
    unsigned int time;
    int pad;
} ProfEntry_82DAE040;

typedef struct ProfStack_82DAE040 {
    int pad0;
    ProfEntry_82DAE040 *cur;
    int pad8;
    ProfEntry_82DAE040 *end;
} ProfStack_82DAE040;

typedef struct Obj_82DAE040 Obj_82DAE040;

typedef struct ObjVtbl_82DAE040 {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void *slot10;
    void (*f14)(Obj_82DAE040 *self, void *arg);
} ObjVtbl_82DAE040;

struct Obj_82DAE040 {
    ObjVtbl_82DAE040 *vt;
};

typedef struct Vec_82DAE040 {
    Obj_82DAE040 **data;
    int count;
} Vec_82DAE040;

unsigned __int64 __mftb(void);
extern void *KeTlsGetValue(unsigned int index);
extern int fn_82DAD5A8(Vec_82DAE040 *v);
extern unsigned int lbl_8323B4A0;

static __forceinline void ProfMark_82DAE040(const char *name)
{
    ProfStack_82DAE040 *ts = (ProfStack_82DAE040 *)KeTlsGetValue(lbl_8323B4A0);
    ProfEntry_82DAE040 *e = ts->cur;
    if (e < ts->end) {
        e->name = name;
        e->time = (unsigned int)__mftb();
        ts->cur = e + 1;
    }
}

void fn_82DAE040(int param_1, void *param_2)
{
    Vec_82DAE040 *v = (Vec_82DAE040 *)(param_1 + 0x144);
    int i = v->count - 1;
    if (i >= 0) {
        do {
            Obj_82DAE040 *o = v->data[i];
            if (o != 0) {
                ProfMark_82DAE040("TtconRepairedCb");
                o->vt->f14(o, param_2);
                ProfMark_82DAE040("Et");
            }
            i--;
        } while (i >= 0);
    }
    fn_82DAD5A8(v);
}
