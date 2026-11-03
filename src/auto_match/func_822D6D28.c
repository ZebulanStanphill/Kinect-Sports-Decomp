extern void *fn_8265C9E0(int);
extern void *fn_822D7FE0(void *);
extern void fn_822D79D8(void *, void *);
extern void fn_828E9D90(int);
extern void fn_828E9D40(int);
extern void fn_828E2B28(void *, void *);
extern void fn_822315A0(void *);

struct Itf_822D6D28;
typedef struct VT_822D6D28 {
  int p0;
  void (*f4)(struct Itf_822D6D28 *, int, int, unsigned char);
  int p8, pc;
  void (*f10)(struct Itf_822D6D28 *, int, void *);
  void (*f14)(struct Itf_822D6D28 *, int, void *);
} VT_822D6D28;
typedef struct Itf_822D6D28 { VT_822D6D28 *vt; } Itf_822D6D28;
typedef struct Obj_822D6D28 {
  char pad[0x48];
  Itf_822D6D28 *i48;
  char pad2[0x68 - 0x4c];
  Itf_822D6D28 *i68;
  int p6c;
  Itf_822D6D28 *i70;
  int p74;
  Itf_822D6D28 *i78;
} Obj_822D6D28;
typedef struct Pair_822D6D28 { int first; void *second; } Pair_822D6D28;

void fn_822D6D28(Obj_822D6D28 *o, int a, int b, unsigned char c)
{
  void *mem;
  void *p;
  Pair_822D6D28 pair;
  int t1, t2;
  unsigned char t3;
  int x;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) p = fn_822D7FE0(mem); else p = 0;
  pair.first = 0;
  pair.second = 0;
  fn_822D79D8(&pair, p);
  o->i68->vt->f10(o->i68, pair.first, &a);
  o->i70->vt->f10(o->i70, pair.first, &b);
  o->i78->vt->f10(o->i78, pair.first, &c);
  if (o->i48 != 0) {
    fn_828E9D90(pair.first);
    fn_828E9D40(pair.first);
    x = pair.first;
    o->i68->vt->f14(o->i68, x, &t1);
    o->i70->vt->f14(o->i70, x, &t2);
    o->i78->vt->f14(o->i78, x, &t3);
    if (o->i48 != 0) o->i48->vt->f4(o->i48, t1, t2, t3);
  }
  fn_828E2B28(o, &pair);
  if (pair.second != 0) fn_822315A0(pair.second);
}
