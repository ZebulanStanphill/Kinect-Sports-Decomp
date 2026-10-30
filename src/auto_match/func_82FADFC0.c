struct Ob_82FADFC0;
typedef struct { int pad; void (*f4)(struct Ob_82FADFC0 *); } Vt_82FADFC0;
typedef struct Ob_82FADFC0 { Vt_82FADFC0 *vt; } Ob_82FADFC0;
typedef struct { int pad; Ob_82FADFC0 *obj; } El_82FADFC0;
typedef struct {
  Vt_82FADFC0 *vt;
  char pad[0x78];
  El_82FADFC0 *beg;
  El_82FADFC0 *end;
} Obj_82FADFC0;
typedef struct { int pad; char cs[1]; } Glob_82FADFC0;
extern Glob_82FADFC0 *lbl_832642E0;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_82FADFC0(Obj_82FADFC0 *o)
{
  El_82FADFC0 *e;
  void *cs = lbl_832642E0->cs;
  RtlEnterCriticalSection(cs);
  o->vt->f4((Ob_82FADFC0 *)o);
  e = o->beg;
  if (e != o->end) {
    do {
      e->obj->vt->f4(e->obj);
      e++;
    } while (e != o->end);
  }
  RtlLeaveCriticalSection(cs);
}
