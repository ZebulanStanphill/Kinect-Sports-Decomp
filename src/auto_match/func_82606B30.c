extern char lbl_821CA8E4[];
extern void fn_82D95638(void *p);
extern void *fn_82CE5410(void);

typedef struct Alloc Alloc;
struct AllocVt { void *f0; void *f4; void (*free)(Alloc *, void *, unsigned short); };
struct Alloc { struct AllocVt *vt; };
typedef struct { void *vt; unsigned short size; } Obj;

Obj *fn_82606B30(Obj *p, unsigned int flags)
{
    p->vt = lbl_821CA8E4;
    fn_82D95638(p);
    if (flags & 1) {
        Alloc *a = *(Alloc **)((char *)fn_82CE5410() + 0x10);
        a->vt->free(a, p, p->size);
    }
    return p;
}
