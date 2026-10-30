typedef struct Inner_8289C078 Inner_8289C078;
typedef struct IVT_8289C078 { void *s0; unsigned int (*f4)(Inner_8289C078 *); void *s8; void *sc; void *s10; unsigned int (*f14)(Inner_8289C078 *); } IVT_8289C078;
struct Inner_8289C078 { IVT_8289C078 *vt; };
typedef struct Res_8289C078 Res_8289C078;
typedef struct RVT_8289C078 { void (*f0)(Res_8289C078 *, int); } RVT_8289C078;
struct Res_8289C078 { RVT_8289C078 *vt; };
typedef struct Obj_8289C078 { char pad[0x20]; Inner_8289C078 *f20; } Obj_8289C078;
extern Res_8289C078 *fn_8289BD98(Obj_8289C078 *o, int a);

void fn_8289C078(Obj_8289C078 *o, int a)
{
  Res_8289C078 *r;
  if (((o->f20 != 0 && o->f20->vt->f4(o->f20) != 0) ||
       (o->f20 != 0 && o->f20->vt->f14(o->f20) != 0)) &&
      (r = fn_8289BD98(o, a)) != 0) {
    r->vt->f0(r, 1);
  }
}
