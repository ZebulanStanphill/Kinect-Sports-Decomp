typedef struct Query_8303A800 {
    unsigned int found;
    int pad04[2];
    unsigned short in;
    unsigned short out;
    unsigned short f10;
    unsigned short pad12;
    int f14;
    char pad18[0x340 - 0x18];
    int result;
    char pad344[0x390 - 0x344];
} Query_8303A800;

typedef struct Obj_8303A800 Obj_8303A800;
typedef struct ObjVt_8303A800 {
    void *pad00[2];
    void (*release)(Obj_8303A800 *self);
    void *pad0c[7];
    void (*query)(Obj_8303A800 *self, Query_8303A800 *q);
} ObjVt_8303A800;
struct Obj_8303A800 {
    ObjVt_8303A800 *vt;
};

int fn_8303A800(Obj_8303A800 *self, unsigned int *value)
{
    Query_8303A800 q;

    q.found = 0;
    q.f10 = 0;
    q.f14 = 0;
    q.in = (unsigned short)*value;
    self->vt->query(self, &q);
    if (q.found != 0) {
        *value = q.out;
        self->vt->release(self);
    } else {
        *value = 0;
    }
    return q.result;
}
