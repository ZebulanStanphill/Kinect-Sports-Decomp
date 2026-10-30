typedef struct { char pad[0x58]; int refs; } Obj_82292928;
typedef struct { Obj_82292928 **begin; Obj_82292928 **end; } Vec_82292928;
extern void fn_82292670(Obj_82292928 *);
extern void fn_8265CA20(void *);
extern unsigned int fn_828647D8(Obj_82292928 *);
extern void *memmove(void *, const void *, unsigned int);

int fn_82292928(Vec_82292928 *v, Obj_82292928 *key)
{
  Obj_82292928 **p;
  Obj_82292928 *o;
  for (p = v->begin; p != v->end; p++) {
    if (fn_828647D8(*p) == fn_828647D8(key)) {
      Obj_82292928 **s;
      o = *p;
      if (--o->refs <= 0) {
        fn_82292670(o);
        fn_8265CA20(o);
        s = p + 1;
        memmove(p, s, (v->end - s) * sizeof(Obj_82292928 *));
        v->end--;
      }
      return 0;
    }
  }
  return 0;
}
