typedef struct Com_82F34768 Com_82F34768;
typedef struct CVT_82F34768 { void *s0; void (*f4)(Com_82F34768 *); void (*f8)(Com_82F34768 *); } CVT_82F34768;
struct Com_82F34768 { CVT_82F34768 *vt; };
typedef struct Obj_82F34768 Obj_82F34768;
typedef struct OVT_82F34768 { void *s[9]; int (*f24)(Obj_82F34768 *, Com_82F34768 *); } OVT_82F34768;
struct Obj_82F34768 { OVT_82F34768 *vt; Com_82F34768 *f4; };

int fn_82F34768(Obj_82F34768 *o, Com_82F34768 *c)
{
  int hr;
  if (c == 0) {
    hr = (int)0x80004003;
  } else {
    hr = o->vt->f24(o, c);
    if (hr >= 0) {
      if (o->f4 != 0) {
        o->f4->vt->f8(o->f4);
        o->f4 = 0;
      }
      o->f4 = c;
      c->vt->f4(c);
    }
  }
  return hr;
}
