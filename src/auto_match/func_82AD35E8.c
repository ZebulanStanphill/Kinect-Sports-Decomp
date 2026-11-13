typedef struct { unsigned a : 4; unsigned f : 3; unsigned b : 25; } Hdr_82AD35E8;
typedef struct { int pad0[2]; struct { unsigned a : 15; unsigned f : 3; unsigned b : 14; } w; int pad1[0x2c / 4 - 3]; Hdr_82AD35E8 *r0; Hdr_82AD35E8 *r1; } Obj_82AD35E8;
typedef struct { int pad[3]; unsigned int x; unsigned int y; } Res_82AD35E8;
extern Res_82AD35E8 *fn_82ACA920(void *, Res_82AD35E8 *, unsigned int);
extern Hdr_82AD35E8 *fn_82AD1978(Obj_82AD35E8 *, void *);
extern Obj_82AD35E8 *fn_82B841E8(void *, void *, int, int, int, int);
Obj_82AD35E8 *fn_82AD35E8(void *a, void *b, unsigned int *list, Res_82AD35E8 *d, Res_82AD35E8 *e)
{
  Obj_82AD35E8 *o = fn_82B841E8(a, b, 0, 3, 2, 4);
  Res_82AD35E8 *t;
  if (d->y != 0) t = fn_82ACA920(a, d, d->x); else t = d;
  o->r0 = fn_82AD1978(o, t);
  if (e->y != 0) t = fn_82ACA920(a, e, e->x); else t = e;
  o->r1 = fn_82AD1978(o, t);
  o->w.f = o->r0->f ? o->r0->f : 0;
  if (list != 0) {
    unsigned int *n = (unsigned int *)(((unsigned int)o & 0xfffffffe) + 0x24);
    n[0] = *list;
    *(unsigned int *)(*list & 0xfffffffe) = (unsigned int)n - 0x24;
    n[1] = (unsigned int)(list - 9) | 1;
    *list = (unsigned int)(n + 1);
  }
  return o;
}
