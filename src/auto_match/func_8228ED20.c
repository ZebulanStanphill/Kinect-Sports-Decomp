extern void fn_822315A0(unsigned int);
extern void fn_822848B8(unsigned int);
extern void fn_8228F078(void *);
extern void fn_8228F3E8(void *);
extern void fn_8228F478(void *, char *);
extern void fn_8228F738(void *, int);
extern void fn_82512A48(unsigned int);
extern void fn_82672660(int, void *);

typedef struct Pair_8228ED20 {
  int a;
  unsigned int b;
} Pair_8228ED20;

typedef struct Obj_8228ED20 {
  char pad0[0x14];
  Pair_8228ED20 pair;
  char pad1c[0x34];
  unsigned int f50;
  char pad54[0x10];
  unsigned int f64;
  int f68;
} Obj_8228ED20;

void fn_8228ED20(Obj_8228ED20 *p)
{
  Pair_8228ED20 *s = &p->pair;
  unsigned int t;

  if (s->a != 0) {
    fn_82672660(s->a, p);
    t = s->b;
    s->b = 0;
    p->pair.a = 0;
    if (t != 0) {
      fn_822315A0(t);
    }
  }
  fn_8228F078(p);
  if (p->f50 != 0) {
    fn_822848B8(p->f50);
    p->f50 = 0;
  }
  fn_8228F3E8(p);
  fn_8228F738(p, 0);
  if (p->f64 != 0) {
    fn_82512A48(p->f64);
    p->f64 = 0;
  }
  if (p->f68 != 0) {
    p->f68 = 0;
    fn_8228F478(p, "gameresume");
  }
}
