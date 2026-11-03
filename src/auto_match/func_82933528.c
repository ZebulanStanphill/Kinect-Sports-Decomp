extern char lbl_8202F1A0[];
typedef struct { unsigned __int64 q[4]; } B32;
typedef struct Obj_82933528 {
  void *vt; int f4; int f8; int fc; int f10; int f14; double d18; B32 b;
} Obj_82933528;
Obj_82933528 *fn_82933528(Obj_82933528 *o, int a, double d, B32 *src)
{
  o->vt = lbl_8202F1A0;
  o->f4 = 0xf;
  o->f8 = 0;
  o->d18 = d;
  o->f10 = a;
  o->fc = 0;
  o->b = *src;
  return o;
}
