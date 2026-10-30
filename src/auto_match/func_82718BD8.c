typedef struct Obj_82718BD8 Obj_82718BD8;
struct Obj_82718BD8Vt { int s[44]; void *(*fb0)(Obj_82718BD8 *); };
extern void *fn_8267BED0(void *, int, unsigned *);
extern void fn_826824B0(void *);
extern void *fn_82718B40(void *, unsigned, void *);

typedef struct Obj_82718BD8 {
  struct Obj_82718BD8Vt *vt;
  int pad[46];
  int fbc;
} Obj_82718BD8;

void *fn_82718BD8(Obj_82718BD8 *o)
{
  void *p;
  void *r;
  if (o->fbc == 0) {
    unsigned tag = 0x143;
    p = fn_8267BED0(o, 0x34, &tag);
    if (p != 0) {
      r = fn_82718B40(p, (unsigned)o->vt->fb0(o), o);
    } else {
      r = 0;
    }
    if ((unsigned)o->fbc != 0) fn_826824B0((void *)o->fbc);
    o->fbc = (int)r;
  }
  return (void *)o->fbc;
}
