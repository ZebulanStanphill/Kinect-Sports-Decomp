typedef struct Obj Obj;
typedef struct {
    void *f[6];
    unsigned short (*f18)(Obj *o);
} ObjVt;
struct Obj {
    ObjVt *vt;
    int pad[7];
    unsigned short **ptr;
    int pad2[3];
    int *count;
};
int fn_822979E8(Obj *p)
{
    unsigned short *s;
    if (p->vt->f18(p) == 0xffff) {
        return -1;
    }
    (*p->count)--;
    s = *p->ptr;
    *p->ptr = s + 1;
    return *s;
}
