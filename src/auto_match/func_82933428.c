extern unsigned int lbl_8202F1A0;

typedef struct Iface_82933428 { void *f0; struct Iface_82933428 *(*f4)(struct Iface_82933428 *); } Iface_82933428;
typedef struct VT_82933428 { Iface_82933428 *(*f0)(void); Iface_82933428 *(*f4)(Iface_82933428 *); } VT_82933428;
typedef struct Obj_82933428 { VT_82933428 *vt; } Obj_82933428;
typedef struct A_82933428 { unsigned __int64 v[2]; } A_82933428;
typedef struct B_82933428 { unsigned __int64 v[4]; } B_82933428;
typedef struct Self_82933428 {
  void *vt;
  int f4;
  int f8;
  int fc;
  A_82933428 a;
  B_82933428 b;
} Self_82933428;

Self_82933428 *fn_82933428(Self_82933428 *s, A_82933428 *a, B_82933428 *b)
{
  s->vt = &lbl_8202F1A0;
  s->f4 = 0xf;
  s->f8 = 0;
  s->fc = 0;
  s->a = *a;
  s->b = *b;
  if (*(int *)&s->a == 4) {
    Obj_82933428 *o = *(Obj_82933428 **)((char *)s + 0x18);
    if (o != 0) {
      *(void **)((char *)s + 0x18) = o->vt->f4((Iface_82933428 *)o);
    }
  }
  return s;
}
