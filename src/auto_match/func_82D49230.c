typedef struct ProfTls_82D49230 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D49230;

typedef struct Param3_82D49230 {
    int unk0;
    int unk4;
    int f8;
} Param3_82D49230;

struct Shape_82D49230;

typedef struct ShapeArgs_82D49230 {
    struct Shape_82D49230 *shape;
    int id;
    int f8;
    Param3_82D49230 *p3;
} ShapeArgs_82D49230;

typedef struct ShapeVt_82D49230 {
    void *s0[3];
    float (*Project)(struct Shape_82D49230 *self, void *direction);
} ShapeVt_82D49230;

typedef struct Shape_82D49230 {
    ShapeVt_82D49230 *vt;
} Shape_82D49230;

struct Iter_82D49230;

typedef struct IterVt_82D49230 {
    void *s0[2];
    int (*First)(struct Iter_82D49230 *self);
    int (*Next)(struct Iter_82D49230 *self, int id);
    void *s10;
    Shape_82D49230 *(*Get)(struct Iter_82D49230 *self, int id, void *buf);
} IterVt_82D49230;

typedef struct Iter_82D49230 {
    IterVt_82D49230 *vt;
} Iter_82D49230;

typedef struct Owner_82D49230 {
    int unk[4];
    Iter_82D49230 iter;
} Owner_82D49230;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

float fn_82D49230(Owner_82D49230 *self, void *direction)
{
    ProfTls_82D49230 *t;
    void **p;
    Iter_82D49230 *it;
    int id;
    float result;
    unsigned char buf[512];
    t = (ProfTls_82D49230 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TthkpShapeCollection::getMaximumProjection";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
    it = &self->iter;
    result = -3.40282e+38f;
    for (id = it->vt->First(it); id != -1; id = it->vt->Next(it,id)) {
        Shape_82D49230 *shape = it->vt->Get(it,id,buf);
        float value = shape->vt->Project(shape,direction);
        result = (float)(result - value) >= 0.0f ? result : value;
    }
    t = (ProfTls_82D49230 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
    return result;
}
