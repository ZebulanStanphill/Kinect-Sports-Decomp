struct Clonable_82931860;
typedef struct ClonableVt_82931860 { void *s0; void *(*clone)(struct Clonable_82931860 *); } ClonableVt_82931860;
typedef struct Clonable_82931860 { ClonableVt_82931860 *vt; } Clonable_82931860;
typedef struct Obj_82931860 { void *vt; int size; int x8; int xc; void *x10; } Obj_82931860;
typedef struct Src_82931860 { char pad[0x10]; Clonable_82931860 *x10; } Src_82931860;
extern int *fn_82934160(void);
extern void *fn_829301D0(int, unsigned int, unsigned int);
extern char lbl_8202F134[];
static __forceinline Obj_82931860 *construct(Obj_82931860 *p)
{
    p->size = 0x14;
    p->x8 = 0;
    p->vt = lbl_8202F134;
    p->xc = 0;
    p->x10 = 0;
    return p;
}
Obj_82931860 *fn_82931860(Src_82931860 *src)
{
    Obj_82931860 *mem = (Obj_82931860 *)fn_829301D0(*fn_82934160(), 0x14, 0x10);
    Obj_82931860 *obj = mem ? construct(mem) : 0;
    if (obj == 0)
        return 0;
    if (src->x10 != 0) {
        obj->x10 = src->x10->vt->clone(src->x10);
        if (obj->x10 == 0)
            return 0;
    }
    return obj;
}
