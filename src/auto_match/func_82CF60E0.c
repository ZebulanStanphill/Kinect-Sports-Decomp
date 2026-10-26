typedef struct Alloc { struct AllocVt *vt; } Alloc;
typedef struct AllocVt { void *a; void *b; void (*free)(Alloc *a, void *p, int size); } AllocVt;
typedef struct { char pad[0x10]; Alloc *alloc; } Ctx;
extern Ctx *fn_82CE5410(void);
extern void fn_82CF1790(void *p);

void *fn_82CF60E0(void *p, unsigned int flags)
{
    fn_82CF1790(p);
    if ((flags & 1) != 0 && p != 0) {
        Alloc *a = fn_82CE5410()->alloc;
        a->vt->free(a, p, 0x58);
    }
    return p;
}
