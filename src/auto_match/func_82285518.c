typedef struct {
  void *vt;
  char pad4[0x144 - 4];
  void *f144;
  void *f148;
  void *f14c;
  char f150[4];
  char pad154[0x168 - 0x154];
  void *f168;
  void *f16c;
  char pad170[0x174 - 0x170];
  float f174;
  int f178;
} Obj_82285518;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern void fn_8226D6A0(void *);
extern void fn_82276BC8(void *);
extern void fn_82279AF0(Obj_82285518 *);
extern void fn_82279CA0(Obj_82285518 *, int);
extern void fn_822848B8(void *);
extern void fn_82359C18(void *);
extern void fn_8265CA20(void *);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CC60(const char *, double);
extern void fn_82E1CCA8(void);
extern char lbl_821A8D84[];

void fn_82285518(Obj_82285518 *o)
{
  void *p;
  int n;
  float d;
  o->vt = lbl_821A8D84;
  if (o->f144 != 0) {
    fn_8226D6A0(o->f144);
    o->f144 = 0;
  }
  fn_82279CA0(o, 0);
  if (o->f14c != 0) {
    fn_8226D6A0(o->f14c);
    o->f14c = 0;
  }
  fn_82279CA0(o, 0);
  if (o->f148 != 0) {
    fn_8226D6A0(o->f148);
    o->f148 = 0;
  }
  fn_82279CA0(o, 0);
  p = o->f168;
  if (p != 0) {
    fn_82276BC8(p);
    fn_8265CA20(p);
  }
  o->f168 = 0;
  if (o->f16c != 0) {
    fn_822848B8(o->f16c);
    o->f16c = 0;
  }
  n = o->f178;
  d = o->f174;
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x66, 1) == 0 && fn_82E1CAD0(0x66) != 0) {
      fn_82E1CC60("Duration", d);
      fn_82E1CB88("NumberOfOptionsSelected", n);
      fn_82E1CCA8();
    }
  }
  fn_82359C18(o->f150);
  fn_82279AF0(o);
}
