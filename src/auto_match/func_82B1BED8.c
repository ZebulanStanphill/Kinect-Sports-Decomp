typedef unsigned int U32;
typedef struct { unsigned a : 4; unsigned f : 3; unsigned b : 25; } Hdr_82B1BED8;
typedef struct { int pad0[2]; struct { unsigned a : 15; unsigned f : 3; unsigned b : 14; } w; int pad1[0x2c / 4 - 3]; Hdr_82B1BED8 *r0; Hdr_82B1BED8 *r1; Hdr_82B1BED8 *r2; } Obj_82B1BED8;
typedef struct { int pad[7]; U32 z; } Src_82B1BED8;
typedef struct { int pad[3]; U32 x; U32 y; } Res_82B1BED8;
extern void fn_82AC6860(void *, Obj_82B1BED8 *, void *, Src_82B1BED8 *);
extern Res_82B1BED8 *fn_82ACA920(void *, Res_82B1BED8 *, U32);
extern void *fn_82AD17B0(void *, void *);
extern Hdr_82B1BED8 *fn_82AD1978(Obj_82B1BED8 *, void *);
extern Obj_82B1BED8 *fn_82B841E8(void *, U32, int, int, int, int);
Obj_82B1BED8 *fn_82B1BED8(void *a, void *b, Src_82B1BED8 *c, Res_82B1BED8 *d, Res_82B1BED8 *e, void *f)
{
  Obj_82B1BED8 *o = fn_82B841E8(a, c->z, 0, 0xe, 3, 4);
  Res_82B1BED8 *t;
  if (d->y != 0) t = fn_82ACA920(a, d, d->x); else t = d;
  o->r0 = fn_82AD1978(o, t);
  if (e->y != 0) t = fn_82ACA920(a, e, e->x); else t = e;
  o->r1 = fn_82AD1978(o, t);
  o->r2 = fn_82AD1978(o, fn_82AD17B0(a, f));
  o->w.f = o->r0->f ? o->r0->f : 0;
  fn_82AC6860(a, o, b, c);
  return o;
}
