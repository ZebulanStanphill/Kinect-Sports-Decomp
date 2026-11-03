typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern void *fn_8265C9E0(int);
extern void *fn_822D7FE0(void *);
extern void fn_822D79D8(void *, void *);
extern void fn_828E9D90(int);
extern void fn_828E9D40(int);
extern void fn_828E2B28(void *, void *);
extern void fn_822315A0(void *);

struct Itf_823F0828;
typedef struct VT_823F0828 {
  int p0;
  void (*f4)(struct Itf_823F0828 *, int, __vector4);
  int p8, pc;
  void (*f10)(struct Itf_823F0828 *, int, void *);
  void (*f14)(struct Itf_823F0828 *, int, void *);
} VT_823F0828;
typedef struct Itf_823F0828 { VT_823F0828 *vt; } Itf_823F0828;
typedef struct Obj_823F0828 {
  char pad[0x48];
  Itf_823F0828 *i48;
  char pad2[0x68 - 0x4c];
  Itf_823F0828 *i68;
  int p6c;
  Itf_823F0828 *i70;
} Obj_823F0828;
typedef struct Pair_823F0828 { int first; void *second; } Pair_823F0828;

void fn_823F0828(Obj_823F0828 *o, int a, __vector4 v)
{
  void *mem;
  void *p;
  Pair_823F0828 pair;
  int t1;
  __vector4 t2;
  int x;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) p = fn_822D7FE0(mem); else p = 0;
  pair.first = 0;
  pair.second = 0;
  fn_822D79D8(&pair, p);
  o->i68->vt->f10(o->i68, pair.first, &a);
  o->i70->vt->f10(o->i70, pair.first, &v);
  if (o->i48 != 0) {
    fn_828E9D90(pair.first);
    fn_828E9D40(pair.first);
    x = pair.first;
    o->i68->vt->f14(o->i68, x, &t1);
    o->i70->vt->f14(o->i70, x, &t2);
    if (o->i48 != 0) o->i48->vt->f4(o->i48, t1, t2);
  }
  fn_828E2B28(o, &pair);
  if (pair.second != 0) fn_822315A0(pair.second);
}
