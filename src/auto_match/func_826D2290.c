typedef struct Obj_826D2290 Obj_826D2290;
struct Obj_826D2290Vt { int s[44]; void *(*fb0)(Obj_826D2290 *); };
extern void *fn_8267B890(int, int, int);
extern void fn_826824B0(void *);
extern void *fn_826D1C60(void *, unsigned, void *);

typedef struct Obj_826D2290 {
  struct Obj_826D2290Vt *vt;
  int pad[0x27];
  int *f28;
  int pad2[0x6c - 0x29];
  int f1b0;
} Obj_826D2290;

void *fn_826D2290(Obj_826D2290 *o)
{
  void *p;
  void *r;
  unsigned u;
  if (o->f1b0 == 0) {
    p = fn_8267B890(((int *)o->f28)[5], 0x38, 0);
    if (p != 0) {
      r = fn_826D1C60(p, (unsigned)o->vt->fb0(o), o);
    } else {
      r = 0;
    }
    if ((unsigned)o->f1b0 != 0) fn_826824B0((void *)o->f1b0);
    o->f1b0 = (int)r;
  }
  return (void *)o->f1b0;
}
