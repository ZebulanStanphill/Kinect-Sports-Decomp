typedef struct Alloc_82E041E0 { struct AllocVt_82E041E0 *vt; } Alloc_82E041E0;
typedef struct AllocVt_82E041E0 { char pad[0x10]; void (*free_)(Alloc_82E041E0 *, void *, unsigned, int); } AllocVt_82E041E0;
typedef struct Ctx_82E041E0 { char pad[0x10]; Alloc_82E041E0 *alloc; } Ctx_82E041E0;
typedef struct Vec_82E041E0 { void *data; int size; int cap; } Vec_82E041E0;
typedef struct Obj_82E041E0 { Vec_82E041E0 v[5]; } Obj_82E041E0;
extern Ctx_82E041E0 *fn_82CE5410(void);

static __inline void Clear_82E041E0(Vec_82E041E0 *v, int esz)
{
  Alloc_82E041E0 *a = fn_82CE5410()->alloc;
  v->size = 0;
  if ((v->cap & (int)0x80000000) == 0)
    a->vt->free_(a, v->data, v->cap & 0x3fffffff, esz);
  v->data = 0;
  v->cap = 0x80000000;
}

void fn_82E041E0(Obj_82E041E0 *o)
{
  Clear_82E041E0(&o->v[4], 1);
  Clear_82E041E0(&o->v[3], 2);
  Clear_82E041E0(&o->v[2], 4);
  Clear_82E041E0(&o->v[1], 4);
  Clear_82E041E0(&o->v[0], 0x10);
}
