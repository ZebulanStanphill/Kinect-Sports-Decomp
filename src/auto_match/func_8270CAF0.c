typedef struct Src_8270CAF0 Src_8270CAF0;
typedef struct {
    void *slots[12];
    int (*position)(Src_8270CAF0 *self);
} SrcVt_8270CAF0;
struct Src_8270CAF0 {
    SrcVt_8270CAF0 *vt;
};
typedef struct {
    int pad0[2];
    Src_8270CAF0 *src;
    int pad0c;
    int mode;
    int start;
    int end;
} Obj_8270CAF0;

int fn_8270CAF0(Obj_8270CAF0 *o)
{
    int n = o->src->vt->position(o->src);
    switch (o->mode) {
    case 1:
        n = o->end - o->start + n;
        break;
    case 2:
        n = n - o->start;
        if (n < 0) {
            n = 0;
        }
        break;
    }
    return n;
}
