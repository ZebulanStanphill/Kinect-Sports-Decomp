typedef struct Alloc Alloc;
typedef struct AllocVt { void *s0; char *(*alloc)(Alloc *a, int size); } AllocVt;
struct Alloc { AllocVt *vt; };
typedef struct { char pad[0x10]; Alloc *alloc; } Ctx;
extern Ctx *fn_82CE5410(void);
extern void fn_82CFC050(char *d, char *s, int n);
extern char *fn_82D96728(char *mem);

char *fn_82DBEF20(char *src)
{
    Alloc *al = fn_82CE5410()->alloc;
    char *mem = al->vt->alloc(al, 0x50);
    char *o;
    *(unsigned short *)(mem + 4) = 0x50;
    o = fn_82D96728(mem);
    fn_82CFC050(o + 0x10, src + 0x10, 0x38);
    return o;
}
