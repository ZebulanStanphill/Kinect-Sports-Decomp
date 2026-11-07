typedef struct ProfTls_82D48AD0 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D48AD0;

typedef struct Param3_82D48AD0 {
    int unk0;
    int unk4;
    int f8;
} Param3_82D48AD0;

struct Shape_82D48AD0;

typedef struct ShapeArgs_82D48AD0 {
    struct Shape_82D48AD0 *shape;
    int id;
    int f8;
    Param3_82D48AD0 *p3;
} ShapeArgs_82D48AD0;

typedef struct ShapeVt_82D48AD0 {
    void *s0[9];
    void (*Collect)(struct Shape_82D48AD0 *self, int a2, ShapeArgs_82D48AD0 *args, int a4);
} ShapeVt_82D48AD0;

typedef struct Shape_82D48AD0 {
    ShapeVt_82D48AD0 *vt;
} Shape_82D48AD0;

struct Iter_82D48AD0;

typedef struct IterVt_82D48AD0 {
    void *s0[2];
    int (*First)(struct Iter_82D48AD0 *self);
    int (*Next)(struct Iter_82D48AD0 *self, int id);
    void *s10;
    Shape_82D48AD0 *(*Get)(struct Iter_82D48AD0 *self, int id, void *buf);
} IterVt_82D48AD0;

typedef struct Iter_82D48AD0 {
    IterVt_82D48AD0 *vt;
} Iter_82D48AD0;

typedef struct Owner_82D48AD0 {
    int unk[5];
    Iter_82D48AD0 iter;
} Owner_82D48AD0;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

void fn_82D48AD0(Owner_82D48AD0 *self, int a2, Param3_82D48AD0 *p3, int a4)
{
    ProfTls_82D48AD0 *t;
    void **p;
    Iter_82D48AD0 *it;
    int id;
    ShapeArgs_82D48AD0 args;
    unsigned char buf[512];

    t = (ProfTls_82D48AD0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtrcShpCollect";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    it = &self->iter;
    for (id = it->vt->First(it); id != -1; id = it->vt->Next(it, id)) {
        args.shape = it->vt->Get(it, id, buf);
        args.p3 = p3;
        args.f8 = p3->f8;
        args.id = id;
        args.shape->vt->Collect(args.shape, a2, &args, a4);
    }

    t = (ProfTls_82D48AD0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
