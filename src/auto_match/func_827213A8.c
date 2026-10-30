typedef struct Obj Obj;
typedef struct { void (*dtor)(Obj *, int); } ObjVt;
struct Obj { ObjVt *vt; int pad; unsigned int refs; };
typedef struct { char pad[0x38]; int obj; char pad2[0x48 - 0x3c]; int x48; } P;
extern void fn_826C30F8(int *p);
extern void fn_826BE6C0(P *p);

void fn_827213A8(P *p)
{
    fn_826C30F8(&p->x48);
    if (p->obj) {
        Obj *q = (Obj *)p->obj;
        if (++q->refs & 0x70000000) {
            q->refs &= 0x8fffffff;
            q->vt->dtor(q, 2);
        }
    }
    fn_826BE6C0(p);
}
