typedef struct Alloc Alloc;
typedef struct {
    void *pad[2];
    void (*free)(Alloc *, void *, unsigned short);
} AllocVtbl;
struct Alloc { AllocVtbl *vt; };

typedef struct {
    char pad[0x10];
    Alloc *alloc;
} Ctx;

typedef struct {
    int pad0;
    unsigned short size;
    char pad6[0xe];
    int f14;
    int f18;
} Obj;

extern Ctx *fn_82CE5410(void);
extern void fn_82CED5B8(void *);
extern void fn_82E04A30(Obj *);

Obj *fn_82E03178(Obj *o, unsigned int flags)
{
    fn_82CED5B8(&o->f18);
    fn_82CED5B8(&o->f14);
    fn_82E04A30(o);
    if (flags & 1) {
        Alloc *a = fn_82CE5410()->alloc;
        a->vt->free(a, o, o->size);
    }
    return o;
}
