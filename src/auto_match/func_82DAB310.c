typedef struct Ev_82DAB310 {
  unsigned short id;
  int f4;
  int f8;
  int fc;
  int f10;
  int f14;
  int f18;
  int f1c;
} Ev_82DAB310;
typedef struct Node_82DAB310 {
  char pad0[8];
  void *f8;
  char pad[0x204 - 0xc];
  unsigned short f204;
} Node_82DAB310;
typedef struct Pair_82DAB310 {
  char pad[0x10];
  Node_82DAB310 *a;
  Node_82DAB310 *b;
} Pair_82DAB310;
extern void fn_82DAF0B0(void *, Ev_82DAB310 *);
extern void fn_82DAD368(Node_82DAB310 *, Ev_82DAB310 *);
void fn_82DAB310(Pair_82DAB310 *p, int param_2, int param_3)
{
  Node_82DAB310 *a = p->a;
  Node_82DAB310 *b = p->b;
  Ev_82DAB310 ev;
  void *h = a->f8;
  ev.id = 0xffff;
  ev.f4 = param_3;
  ev.f8 = (int)a;
  ev.fc = (int)b;
  ev.f14 = (int)p;
  ev.f18 = param_2;
  fn_82DAF0B0(h, &ev);
  if (a->f204 != 0) fn_82DAD368(a, &ev);
  if (b->f204 != 0) fn_82DAD368(b, &ev);
}
