typedef struct VTH_82D0D770 { int f0; void *(*alloc)(void *, unsigned); void (*free)(void *, void *, unsigned); } VTH_82D0D770;
typedef struct { VTH_82D0D770 *vt; } Heap_82D0D770;
typedef struct { char pad[0x10]; Heap_82D0D770 *heap; } Ctx_82D0D770;
typedef struct VTC_82D0D770 { int f0; void *(*clone)(void *); } VTC_82D0D770;
typedef struct { VTC_82D0D770 *vt; } Cl_82D0D770;
typedef struct { char pad[4]; short w4; char pad6[2]; void *p8; int ic; Cl_82D0D770 *p10; } Rec_82D0D770;
extern Ctx_82D0D770 *fn_82CE5410(void);
extern Rec_82D0D770 *fn_82D0D6E8(void);
extern void fn_82D16300(void *);
extern void *fn_82D16968(void *);

Rec_82D0D770 *fn_82D0D770(Rec_82D0D770 *src)
{
  Ctx_82D0D770 *c;
  Rec_82D0D770 *r;
  void *old;
  Heap_82D0D770 *h;
  h = fn_82CE5410()->heap;
  ((Rec_82D0D770 *)h->vt->alloc(h, 0x14))->w4 = 0x14;
  r = fn_82D0D6E8();
  old = r->p8;
  if (old != 0) {
    fn_82D16300(old);
    h = fn_82CE5410()->heap;
    h->vt->free(h, old, 0x1c0);
  }
  r->p8 = 0;
  r->p8 = fn_82D16968(src->p8);
  r->ic = src->ic;
  r->p10 = src->p10 != 0 ? (Cl_82D0D770 *)src->p10->vt->clone(src->p10) : 0;
  return r;
}
