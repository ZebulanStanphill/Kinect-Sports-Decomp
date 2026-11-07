typedef struct ProfEntry_82DAF480 {
    const char *name;
    unsigned int time;
    int pad;
} ProfEntry_82DAF480;

typedef struct ProfStack_82DAF480 {
    int unk0;
    ProfEntry_82DAF480 *cur;
    int unk8;
    ProfEntry_82DAF480 *end;
} ProfStack_82DAF480;

struct Obj_82DAF480;
typedef struct ObjVt_82DAF480 {
    void *s0;
    void *s1;
    void *s2;
    int (*getId)(struct Obj_82DAF480 *self);
    void (*freeMem)(struct Obj_82DAF480 *self, void *arg);
} ObjVt_82DAF480;

typedef struct Obj_82DAF480 {
    ObjVt_82DAF480 *vt;
} Obj_82DAF480;

struct Checker_82DAF480;
typedef struct CheckerVt_82DAF480 {
    void *s[9];
    unsigned char (*check)(struct Checker_82DAF480 *self, int id);
} CheckerVt_82DAF480;

typedef struct Checker_82DAF480 {
    CheckerVt_82DAF480 *vt;
} Checker_82DAF480;

typedef struct Mgr_82DAF480 {
    int unk[4];
    Checker_82DAF480 *checker;
} Mgr_82DAF480;

unsigned __int64 __mftb(void);
extern void *KeTlsGetValue(unsigned int index);
extern Obj_82DAF480 *fn_82D839C0(void *p);
extern Mgr_82DAF480 *fn_82CE5410(void);
extern void fn_82D02610(int a);
extern unsigned int lbl_8323B4A0;
extern int lbl_8323B520;

void fn_82DAF480(void *param_1)
{
    Obj_82DAF480 *obj;
    Checker_82DAF480 *chk;
    ProfStack_82DAF480 *s;
    ProfEntry_82DAF480 *e;
    int id;

    if (fn_82D839C0(param_1) != 0) {
        obj = fn_82D839C0(param_1);
        id = obj->vt->getId(obj);
        chk = fn_82CE5410()->checker;
        if (chk->vt->check(chk, id) == 0) {
            s = (ProfStack_82DAF480 *)KeTlsGetValue(lbl_8323B4A0);
            e = s->cur;
            if (e < s->end) {
                e->name = "TtWatchDog:FreeMem";
                e->time = (unsigned int)__mftb();
                s->cur = e + 1;
            }
            obj = fn_82D839C0(param_1);
            obj->vt->freeMem(obj, param_1);
            s = (ProfStack_82DAF480 *)KeTlsGetValue(lbl_8323B4A0);
            e = s->cur;
            if (e < s->end) {
                e->name = "Et";
                e->time = (unsigned int)__mftb();
                s->cur = e + 1;
            }
        }
        if (lbl_8323B520 != 0) {
            fn_82D02610(0);
        }
    }
}
