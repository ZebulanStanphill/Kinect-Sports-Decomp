extern void RtlEnterCriticalSection(void *); extern void RtlLeaveCriticalSection(void *);
struct Obj_8245C5E0;
typedef struct VT_8245C5E0 {
  int pad0[4];
  void (*f10)(struct Obj_8245C5E0 *, unsigned);
  int pad14[4];
  unsigned (*f24)(struct Obj_8245C5E0 *);
  int pad28;
  int (*f2c)(struct Obj_8245C5E0 *, unsigned);
  void (*f30)(struct Obj_8245C5E0 *, unsigned);
} VT_8245C5E0;
typedef struct Obj_8245C5E0 { VT_8245C5E0 *vt; } Obj_8245C5E0;
typedef struct O_8245C5E0 {
  char cs[0x568];
  Obj_8245C5E0 *objs[2];
  int pad570; int f574; int pad578; int f57c; int f580; char pad584[0x44];
  void *a5c8; char pad5cc[8]; void (*cb)(void *, void *, int); void *a5d8;
} O_8245C5E0;
void fn_8245C5E0(O_8245C5E0 *o) {
  Obj_8245C5E0 **pp; Obj_8245C5E0 *p; unsigned i; int n;
  if (o->f57c == 0) {
    o->f574 = 0;
    if (o->cb != 0) o->cb(o->a5c8, o->a5d8, o->f580);
    RtlEnterCriticalSection(o);
    o->f57c = 1;
    RtlLeaveCriticalSection(o);
  }
  RtlEnterCriticalSection(o);
  pp = o->objs;
  n = 2;
  do {
    p = *pp;
    i = 0;
    if (p->vt->f24(p) != 0) {
      do {
        if (p->vt->f2c(p, i) != 0) { p->vt->f30(p, i); p->vt->f10(p, i); }
        i++;
      } while (i < p->vt->f24(p));
    }
    n--; pp++;
  } while (n != 0);
  RtlLeaveCriticalSection(o);
}
