typedef struct Alloc Alloc;
typedef struct VTable { void *a,*b; void (*free)(Alloc *,void *,int); } VTable;
struct Alloc { VTable *v; };
typedef struct Manager { char pad[0x14]; Alloc *alloc; } Manager;
typedef struct Obj { char pad[0x1e30]; void *p[4]; } Obj;
extern Manager *fn_82CE5410(void);
static void Free(void *p) { Alloc *a = fn_82CE5410()->alloc; a->v->free(a, p, 0xc00); }
void fn_82D58828(Obj *o) {
 if (o->p[0]) {
  Free(o->p[0]);
  Free(o->p[1]);
  Free(o->p[2]);
  Free(o->p[3]);
  o->p[0]=0;o->p[1]=0;o->p[2]=0;o->p[3]=0;
 }
}
