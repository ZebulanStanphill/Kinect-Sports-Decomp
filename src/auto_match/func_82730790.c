typedef struct Obj_82730790 Obj_82730790;
struct Obj_82730790Vt { int s[44]; void *(*fb0)(Obj_82730790 *); };
extern void *fn_8267BED0(void *, int, unsigned *);
extern void fn_826824B0(void *);
extern void *fn_82728680(void *, unsigned, void *);

typedef struct Obj_82730790 {
  struct Obj_82730790Vt *vt;
  int pad[57];
  int fe8;
} Obj_82730790;

void *fn_82730790(Obj_82730790 *o)
{
  void *p;
  void *r;
  if (o->fe8 == 0) {
    unsigned tag = 0x143;
    p = fn_8267BED0(o, 0x38, &tag);
    if (p != 0) {
      r = fn_82728680(p, (unsigned)o->vt->fb0(o), o);
    } else {
      r = 0;
    }
    if ((unsigned)o->fe8 != 0) fn_826824B0((void *)o->fe8);
    o->fe8 = (int)r;
  }
  return (void *)o->fe8;
}
